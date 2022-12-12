#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "get_next_line.h"
#include <unistd.h>

int	main(void)
{
    int		fd;
    char	*lines;
	lines = NULL;
    fd = open("/home/laura/Documents/Codam/get_next_line/testfile.txt", O_RDONLY);
    lines = get_next_line(fd);
    printf("%s", lines);
    free(lines);
	lines=NULL;
    lines = get_next_line(fd);
    printf("%s", lines);
	free(lines);
	lines=NULL;
	lines = get_next_line(fd);
	printf("%s", lines);
    free(lines);
	lines = get_next_line(fd);
	printf("%s", lines);
	free(lines);
	lines=NULL;
	lines=NULL;
	lines = get_next_line(fd);
	printf("%s", lines);
	free(lines);
	lines=NULL;
	lines = get_next_line(fd);
	printf("%s", lines);
	free(lines);
	lines=NULL;
	close(fd);
	return (1);
}