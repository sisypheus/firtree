/*
** EPITECH PROJECT, 2019
** Fir Tree
** File description:
** ascii resizable fir tree
*/

#include <stdlib.h>
#include <stdio.h>

void my_putchar(char c);
void line_creation(int leaves, int spaces);
int base_calculation(int size);
int shape_creation(int size, int base);

int base_calculation(int size)
{
    int lines = 4;
    int retention = 1;
    int length = 1;

    for (int i = 0; i < size; i++) {
        for (int i = 0; i <  lines; i++) {
            length += 2;
        }
        if (i % 2 == 0)
            retention++;
        length -= 2 * retention;
        lines++;
    }
    length += 2 * retention;
    return (length);
}

int shape_creation(int size, int base)
{
    int lines = 4;
    int retention = 1;
    int length = 1;
    int spaces;

    for (int i = 0; i < size; i++) {
        for (int i = 0; i <  lines; i++) {
            spaces = ((base - length) / 2) - 1;
            line_creation(length, spaces);
            length += 2;
        }
        if (i % 2 == 0)
            retention++;
        length -= 2 * retention;
        lines++;
    }
    length += 2 * retention;
    return (length);
}

void line_creation(int leaves, int spaces)
{
    for (int i = 0; i < spaces; i++)
        my_putchar(' ');
    for (int i = 0; i < leaves; i++)
        my_putchar('*');
    my_putchar('\n');
}

void trunk(int size, int base)
{
    int previous_size = size;

    if (size % 2 == 0)
        size++;
    for (int i = 0; i < previous_size; i++) {
        for (int i = 0; i < (base - size) / 2 - 1; i++)
            my_putchar(' ');
        for (int i = 0; i < size; i++)
            my_putchar('|');
        my_putchar('\n');
    }
}

void tree(int size)
{
    int base = base_calculation(size);
    shape_creation(size, base);
    trunk(size, base);
}

int main(int ac, char **av)
{
    if (ac != 2) {
        printf("Invalid input\n");
        return (84);
    } else if (atoi(av[1]) > 0 && atoi(av[1]) < 6) {
        tree(atoi(av[1]));
        return (0);
    }
    return (0);
}