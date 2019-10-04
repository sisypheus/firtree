/*
** EPITECH PROJECT, 2019
** Fir Tree
** File description:
** ascii resizable fir tree
*/

int main(void)
{
    tree();
    return(0);
}

void my_putchar(char c)
{
    write(1, &c, 1);
}

int shape_creation(void)
{

}

void tree(int size)
{
    trunk();
}

int trunk(void)
{
    int i;
    int j;
    int size = 3;

    for (i = 0; i <= size - 1; i++) {
        my_putchar('|');
        for ( j = 0; j <= size -2; j++) {
            my_putchar('|');
        }
        my_putchar('\n');
    }
            
    
    
}

int new_floor(void)
{    


}

