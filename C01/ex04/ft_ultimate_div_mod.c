#include <unistd.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
        int tmp = *a;
	*a = *a / *b;
	*b = *a % *b;
}
