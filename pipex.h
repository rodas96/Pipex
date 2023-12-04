/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:45:21 by rmorais           #+#    #+#             */
/*   Updated: 2023/12/04 17:07:07 by codespace        ###   ########.fr       */
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
#define array_len(arr) (sizeof(arr) / sizeof((arr)[0]))

typedef struct s_stack
{
	int     fd[2];
	char	*path;
    char    *cmd;
    char    **cmd_paths;
    char    **cmd_args;
	
}t_stack;

void    free_arr_of_str(char **arr);
char    **extract_paths(char **envp);


#endif