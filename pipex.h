/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:45:21 by rmorais           #+#    #+#             */
/*   Updated: 2023/05/20 16:56:32 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <stdlib.h>


#ifndef PIPEX_H
# define PIPEX_H

typedef struct s_stack
{
	int     fd[2];
	char	*path;
    char    *cmd;
    char    **cmd_paths;
    char    **cmd_args;
	
}t_stack;

void validate_path(t_stack *stack);
#endif