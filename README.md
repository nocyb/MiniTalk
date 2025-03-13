# Minitalk

> **A process communication project for 42.**

Minitalk is a project from 42 that involves implementing a communication system between two processes using UNIX signals. This project highlights fundamental concepts such as signal handling, inter-process communication (IPC), and bit manipulation.

## Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Examples](#examples)
- [Skills Developed](#skills-developed)
- [Resources](#resources)

---

## Overview

Minitalk consists of two main programs:

1. **Server**: A program that waits for messages from a client and displays them.
2. **Client**: A program that sends messages to the server using UNIX signals.

The project relies on the use of `SIGUSR1` and `SIGUSR2` signals to transmit information between processes.

---

## Features

- Process communication via UNIX signals.
- Transmission of strings from the client to the server.
- Error handling and robustness in signal management.
- Implementation of a simple protocol to encode and decode messages.

---

## Installation

To clone and compile the project, follow these steps:

1. Clone the GitHub repository:

   ```bash
   git clone https://github.com/your-username/minitalk.git
   cd minitalk
   ```

2. Compile the programs using `make`:

   ```bash
   make
   ```

   This will generate two executables: `server` and `client`.

---

## Usage

### Start the Server

To start the server, run the following command:

```bash
./server
```

The server will display its **PID** (Process ID), which you will need to send messages.

### Send a Message with the Client

To send a message to the server, use the client program with the server's PID and the message you want to send:

```bash
./client <server_PID> "Your message here"
```

Example:

```bash
./client 12345 "Hello, Minitalk!"
```

---

## Examples

### Example Communication

1. Start the server:

   ```bash
   ./server
   ```

   Expected output:

   ```
   Server PID: 12345
   ```

2. Send a message from the client:

   ```bash
   ./client 12345 "Hello, server!"
   ```

   Expected output on the server:

   ```
   Message received: Hello, server!
   ```

---

## Skills Developed

This project helps develop the following skills:

- Understanding UNIX signals (`SIGUSR1`, `SIGUSR2`).
- Process management and inter-process communication (IPC).
- Bit manipulation for encoding/decoding messages.
- Error handling and program robustness.
- Adherence to 42's coding standards.

---

## Resources

Here are some useful resources to understand and deepen the concepts used in this project:

- [UNIX Signals Documentation](https://man7.org/linux/man-pages/man7/signal.7.html)
- [Guide to Inter-Process Communication (IPC)](https://www.geeksforgeeks.org/inter-process-communication-ipc/)
- [42 Coding Standards](https://github.com/42School/norminette)
