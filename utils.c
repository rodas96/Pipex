#include "pipex.h"
#include <string.h>
#include "./libft/libft.h"

//envp key=value. Find "PATH=". "PATH=" list all directories where the shell will look for executables. Split "PATH=" by ':' and get all commands in that directory.

void free_arr_of_str(char **arr)
{
    int i = 0;

    if (arr != NULL)
    {
        while (arr[i])
        {
            free(arr[i]);
            i++;
        }
        free(arr);
    }
}

char    **extract_paths(char **envp)
{
    int    i;
    char    **paths_array;
    
    i = 0;
    while (envp[i])
    {
        if (ft_strncmp(envp[i], "PATH=", 5) == 0)
        {
            paths_array = ft_split(envp[i] + 5, ':');
            if(paths_array == NULL)
                return (NULL);
            return (paths_array);
        }
        i++;
    }
    return (NULL);
}
