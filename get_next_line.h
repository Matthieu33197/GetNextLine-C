/*
** EPITECH PROJECT, 2020
** .h
** File description:
** .h
*/

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char *get_next_line(const int fd);

#endif