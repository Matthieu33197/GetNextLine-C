#include <unistd.h>
#include "get_next_line.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}

void load_file(char  const *filepath) 
{
	int fd = open(filepath, O_RDONLY);
	if (fd) {
	my_putstr(get_next_line(fd));
	my_putchar('\n');
	my_putstr(get_next_line(fd));
	my_putchar('\n');
	my_putstr(get_next_line(fd));
	my_putchar('\n');
	my_putstr(get_next_line(fd));
	my_putchar('\n');
	my_putstr(get_next_line(fd));
	my_putchar('\n');
	my_putstr(get_next_line(fd));
	my_putchar('\n');
	my_putstr(get_next_line(fd));
	my_putchar('\n');
	my_putstr(get_next_line(fd));
	my_putchar('\n');
	my_putstr(get_next_line(fd));
	my_putchar('\n');
	my_putstr(get_next_line(fd));
	my_putchar('\n');
	my_putstr(get_next_line(fd));
	my_putchar('\n');
	my_putstr(get_next_line(fd));
	my_putchar('\n');
	my_putstr(get_next_line(fd));
	my_putchar('\n');
	my_putstr(get_next_line(fd));
	my_putchar('\n');
	my_putstr(get_next_line(fd));
	my_putchar('\n');
	my_putstr(get_next_line(fd));
	my_putchar('\n');
	my_putstr(get_next_line(fd));
	my_putchar('\n');
	my_putstr(get_next_line(fd));
	my_putchar('\n');
	my_putstr(get_next_line(fd));
	my_putchar('\n');
	my_putstr(get_next_line(fd));
	my_putchar('\n');
	my_putstr(get_next_line(fd));
	my_putchar('\n');
	my_putstr(get_next_line(fd));
	my_putchar('\n');
	my_putstr(get_next_line(fd));
	my_putchar('\n');
	my_putstr(get_next_line(fd));
	my_putchar('\n');
	my_putstr(get_next_line(fd));
	my_putchar('\n');
	my_putstr(get_next_line(fd));
	my_putchar('\n');
	my_putstr(get_next_line(fd));
	my_putchar('\n');
	my_putstr(get_next_line(fd));
	my_putchar('\n');
	my_putstr(get_next_line(fd));
	my_putchar('\n');
	my_putstr(get_next_line(fd));
	my_putchar('\n');
	close(fd);
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		load_file(argv[1]);
	}
	return 0;
}