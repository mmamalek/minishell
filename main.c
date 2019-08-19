/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmamalek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 08:33:47 by mmamalek          #+#    #+#             */
/*   Updated: 2019/08/19 16:28:28 by mmamalek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int main(void)
{
	char			*input;
	char			**av;
	static int		eof;

// init_shell();
	while (1)
	{
		ft_putstr("$>");
		get_next_line(stdin, &input);
//		if (strchr(input, EOF))
//			eof = 1;
		if (ft_strstr(input, "exit"))
			break;
		av = ft_strsplit(input, ' ');
		//TODO: look for av[0];
		call_program(av);
		if (eof)
			break;
	}
	return (0);
}

void	call_program(char **av)
{
	pid_t	pid;

	pid = fork();
	if (pid < 0)
		ft_putendl_fd("Error", stderr);
	if (pid == 0)
	{
		//child process...
		execv(av[0], av);
	}
	wait(NULL);
}
