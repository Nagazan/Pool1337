#include <unistd.h>

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
	        unsigned int i;

		 i = 0;
		 if (size > i)
		 {
			 while (src[i] != '\0' && i < size - 1)
			 {
				 dest[i] = src[i];
				 i++;
			 }
			 dest[i] = '\0';
                 }
	         while (src[i] != '\0')
	         {
         		 i++;
		 }
		 return (i);
}			 
