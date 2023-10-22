#include "pipex.h"
#include <string.h>
#include "./libft/libft.h"

void validate_path(t_stack *stack) 
{   int i = 0;
    while(i < 2)
    {
        char *cmd_path = stack->cmd_paths[i];
        if (access(cmd_path, X_OK) == -1) {
            perror("Command not found or not executable");
            exit(EXIT_FAILURE);
        }
        i++;
    }
}

char *string_contains(const char *haystack, const char *needle) {
    
}


