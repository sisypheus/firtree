/*
** EPITECH PROJECT, 2019
** Fir Tree
** File description:
** ascii resizable fir tree
*/

void my_putchar(char c);

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

void shape_creation(int size, int base)
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

int line_creation(int leaves, int spaces)
{
    for (int i = 0; i < spaces; i++)
        my_putchar(' ');
    for (int i = 0; i < leaves; i++)
        my_putchar('*');
    my_putchar('\n');
}

int trunk(int size, int base)
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