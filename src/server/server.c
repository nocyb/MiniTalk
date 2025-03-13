/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njung <njung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:53:03 by njung             #+#    #+#             */
/*   Updated: 2025/03/13 15:09:21 by njung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

#define END_TRANSMISSION '\0'

void	print_intro(void)
{
	ft_printf("\n\033[1;33m");
	ft_printf("███████╗███████╗██████╗ ██╗   ██╗███████╗██████╗ \n");
	ft_printf("██╔════╝██╔════╝██╔══██╗██║   ██║██╔════╝██╔══██╗\n");
	ft_printf("███████╗█████╗  ██████╔╝██║   ██║█████╗  ██████╔╝\n");
	ft_printf("╚════██║██╔══╝  ██╔══██╗╚██╗ ██╔╝██╔══╝  ██╔══██╗\n");
	ft_printf("███████║███████╗██║  ██║ ╚████╔╝ ███████╗██║  ██║\n");
	ft_printf("╚══════╝╚══════╝╚═╝  ╚═╝  ╚═══╝  ╚══════╝╚═╝  ╚═╝\n");
}

void	process_bit(int sig, unsigned char *current_char, int *bit_index)
{
	if (sig == SIGUSR1)
		*current_char |= (0 << (7 - *bit_index));
	else if (sig == SIGUSR2)
		*current_char |= (1 << (7 - *bit_index));
	(*bit_index)++;
}

void	handle_signal(int sig, siginfo_t *info, void *context)
{
	static unsigned char	current_char = 0;
	static int				bit_index = 0;
	static pid_t			client_pid = 0;

	(void)context;
	if (bit_index == 0)
		client_pid = info->si_pid;
	process_bit(sig, &current_char, &bit_index);
	if (bit_index == 8)
	{
		if (current_char == END_TRANSMISSION)
		{
			ft_printf("\n");
			kill(client_pid, SIGUSR1);
			client_pid = 0;
		}
		else
			ft_printf("%c", current_char);
		bit_index = 0;
		current_char = 0;
	}
}

int	main(void)
{
	struct sigaction	sa;

	print_intro();
	ft_printf("Welcome in njung server !\nThe pid : %d\n", getpid());
	sa.sa_sigaction = handle_signal;
	sa.sa_flags = SA_SIGINFO;
	sigemptyset(&sa.sa_mask);
	if (sigaction(SIGUSR1, &sa, NULL) == -1)
	{
		ft_printf("Error setting up signal handlers\n");
		exit(1);
	}
	if (sigaction(SIGUSR2, &sa, NULL) == -1)
	{
		ft_printf("Error setting up signal handlers\n");
		exit(1);
	}
	while (1)
		pause();
	return (0);
}
