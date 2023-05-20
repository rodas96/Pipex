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

#ifndef pipex.h
# define pipex.h

typedef struct s_stack
{
	int     fd[2];
	char	*path;
    char    *cmd;
    char    **cmd_paths;
    char    **cmd_args;
	
}t_stack;





#endif
