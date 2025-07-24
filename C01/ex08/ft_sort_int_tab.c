#include <unistd.h>

void    ft_sort_int_tab(int *tab, int size)
{
	int    B1;
	int    B2;
	int    swap;

	B1 = 0;
	while (B1 < size)
	{
		B2 = B1 + 1;
		while (B2 < size)
		{
			if (tab[B1] > tab[B2])
			{
				swap = tab[B1];
				tab[B1] = tab[B2];
				tab[B2] = swap;
			}
			B2++;
		}
		B1++;
	}
}
