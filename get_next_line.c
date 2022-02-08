/*
** EPITECH PROJECT, 2019
** Get_next_line
** File description:
** return the line
*/

#include "get_next_line.h"

char *get_next_line(const int fd)
{
    static int nb = 0;
    int i = 0;
    char courant;
    char *line;
    int v = 0;

    nb++;
    line = malloc(sizeof(char *) * nb);
    v = read(fd, &courant, 1);
    while (courant != '\n' && courant != '\0' && v != 0) {
        line[i] = courant;
        i++;
        v = read(fd, &courant, 1);
    }
    line[i] = '\0';
    return (line);
}
