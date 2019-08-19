/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmamalek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 08:36:03 by mmamalek          #+#    #+#             */
/*   Updated: 2019/08/19 09:17:33 by mmamalek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/wait.h>
# include "./get_next_line/get_next_line.h"
# include "./libft/libft.h"

# define stdin 0
# define stdout 1
# define stderr 2
void	call_program(char **av);
#endif
