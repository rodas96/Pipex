/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:45:21 by rmorais           #+#    #+#             */
/*   Updated: 2023/12/04 17:14:56 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "pipex.h"
#include <string.h>
#include "./libft/libft.h"

#include <unistd.h>
#include <stdlib.h>

// Assuming that the free_matrix and ft_putstr_fd functions are available

void error_handler(t_stack *file_descriptor, char *err_msg, int perr) {
    int *fds_to_close[] = {
        &file_descriptor->fd[0],
        &file_descriptor->fd[1],
        &file_descriptor->std[0],
        &file_descriptor->std[1],
        &file_descriptor->pipe_end[0],
        &file_descriptor->pipe_end[1]
    };

    // Close file descriptors in a loop
    for (int i = 0; i < array_len(fds_to_close); i++) {
        if (*(fds_to_close[i]) != -1) {
            close(*(fds_to_close[i]));
        }
    }

    // Free memory in a loop
    char *ptrs_to_free[] = {
        file_descriptor->path,
        file_descriptor->cmd
    };
    
    for (int i = 0; i < sizeof(ptrs_to_free) / sizeof(ptrs_to_free[0]); i++) {
        if (ptrs_to_free[i] != NULL) {
            free(ptrs_to_free[i]);
        }
    }

    // Free cmd_paths and cmd_args assuming free_matrix handles it correctly
    if (file_descriptor->cmd_paths) {
        free_matrix(file_descriptor->cmd_paths);
    }
    if (file_descriptor->cmd_args) {
        free_matrix(file_descriptor->cmd_args);
    }

    // Handle errors
    if (perr == 1) {
        perror(err_msg);
    } else {
        ft_putstr_fd(err_msg, 2);
    }

    exit(EXIT_FAILURE);
}

