#include <unistd.h>
#include <stdio.h>
/*
void	print_nbr(size_t nbr)
{
	if (nbr > 9)
	{
		print_nbr(nbr /= 10);
		print_nbr(nbr % 10);
	}
	else if (nbr <= 9)
		printf("%zu ", nbr);
}
*/
void    print_nbr(size_t nbr)
{
   if (nbr > 9)
   {
       print_nbr(nbr /= 10);
        printf(" ");
       print_nbr(nbr % 10);
   }
   else if (nbr <= 9)
       printf("%zu", nbr);
}

void	stone(size_t height)
{
	size_t i;
	size_t spc;
	size_t k;
	size_t num = 1;

  	spc = height - 1;
	for(i=1;i<=height;i++)
   	{
         for(k=spc;k>=1;k--)
         {
            printf(" ");
         }
           print_nbr(num);
		   num *= 11;
		printf("\n");
    	spc--;
   }
}
