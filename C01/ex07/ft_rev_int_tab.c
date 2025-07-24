#include <unistd.h>

void    ft_rev_int_tab(int *tab, int size)
{
        int     B1;
	int     B2;
        int     swap;

	B1 = 0;
	B2 = size - 1;
	while (B1 < B2)
	{
		swap = tab[B1];
		tab[B1] = tab[B2];
		tab[B2] = swap;
		B1++;
		B2--;
	}
}

