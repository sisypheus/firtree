/*
** EPITECH PROJECT, 2020
** CPool_Tree_2019
** File description:
** my_putchar
*/

#include <unistd.h>
#include <stdlib.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}