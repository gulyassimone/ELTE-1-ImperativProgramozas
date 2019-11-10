#include <stdio.h>

int main ()
{
	int i;
	int j;
	
	printf("program\n");
	
	for (i=0; i<10; i++) 
	{
		for (j=0; j<10; j++) 
		{
			
			printf("%d*%d=%d ",i,j,i*j);
		}
		printf("\n");
	}
	
	return 0;
}
