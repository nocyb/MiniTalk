/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <njung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 14:12:09 by njung             #+#    #+#             */
/*   Updated: 2025/03/13 13:36:42 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

volatile sig_atomic_t	g_confirmation_received = 0;

void	print_intro(void)
{
	ft_printf("\n\033[1;33m");
	ft_printf(" ██████╗██╗     ██╗███████╗███╗   ██╗████████╗\n");
	ft_printf("██╔════╝██║     ██║██╔════╝████╗  ██║╚══██╔══╝\n");
	ft_printf("██║     ██║     ██║█████╗  ██╔██╗ ██║   ██║   \n");
	ft_printf("██║     ██║     ██║██╔══╝  ██║╚██╗██║   ██║   \n");
	ft_printf("╚██████╗███████╗██║███████╗██║ ╚████║   ██║   \n");
	ft_printf(" ╚═════╝╚══════╝╚═╝╚══════╝╚═╝  ╚═══╝   ╚═╝   \n");
}

void	confirmation_handler(int sig)
{
	(void)sig;
	g_confirmation_received = 1;
}

void	send_message(int pid, unsigned char character)
{
	int	i;

	i = 8;
	while (i > 0)
	{
		i--;
		if (character & (1 << i))
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(100);
	}
}

int	main(int argc, char **argv)
{
	pid_t				server_pid;
	const char			*message;
	struct sigaction	sa;
	int					i;

	sa.sa_handler = confirmation_handler;
	sa.sa_flags = 0;
	sigemptyset(&sa.sa_mask);
	print_intro();
	if (argv[1])
		server_pid = ft_atoi(argv[1]);
	if (argc < 3 || server_pid < 0 || sigaction(SIGUSR1, &sa, NULL) == -1)
	{
		ft_printf("ERROR! Usage: %s <pid> <message>\n", argv[0]);
		exit(0);
	}
	message = argv[2];
	i = 0;
	while (message[i])
		send_message(server_pid, message[i++]);
	send_message(server_pid, '\0');
	while (!g_confirmation_received)
		pause();
	ft_printf("Server has successfully received the message!\n");
	return (0);
}
