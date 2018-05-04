#include <stdlib.h>
#include <stdio.h>

void stone(int height);

int main(int ac, char **ag) 
{
	if (ac != 2)
		return (1);
    stone(atoi(ag[1]));
		return (0); 
}
