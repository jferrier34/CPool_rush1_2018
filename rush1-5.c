/*
** EPITECH PROJECT, 2018
** rush1-5.c
** File description:
** rush5
*/

void rush(int x, int y)
{
    int i;
    int j;

    for (i = 0; i < x; i++) {
	for (j = 0; j < y; j++) {
	    if ((i == 0 && j == 0) || ( i == x - 1 && j == y - 1)){
		    my_putchar('A');
	    } else if ((i == x - 1 && j == 0) || (j == y - 1 && i == 0)) {
                    my_putchar('C');
            } else if (i == 0 || i == x - 1 ){
                    my_putchar('B');
            } else if ((i != 0 && i != x - 1) && (j == 0 || j == y - 1)) {
		    my_putchar('B');
	    } else {
		    my_putchar(' ');
            }
        }
	            my_putchar('\n');
    }
}
