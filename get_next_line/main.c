#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main(void)
{
    int		fd;
    char	*lines;

    fd = open("/home/laura/Documents/Codam/get_next_line/testfile.txt", O_RDONLY);
    lines = get_next_line(fd);
    printf("%s\n", lines);
    free(lines);
    lines = get_next_line(fd);
    printf("%s\n", lines);
    free(lines);
    lines = get_next_line(fd);
    printf("%s\n", lines);
    close(fd);
    free(lines);
    return (1);
}