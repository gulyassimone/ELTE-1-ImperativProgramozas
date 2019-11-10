#include <stdio.h>
#include <string.h>

int main()
{
	char *n= "blablabla";
	char k[]= "blablabla";
	printf("%s\n",n);
	n="Kiss Erik";
	
	printf("%d %d \n", sizeof(n), sizeof(k)); // pointer mérete 64 biten, mindig 8 bájt , tömb mérete
	printf("%d %d \n", sizeof(k), strlen(k)); //tömb végén \0 van
	printf("%d\n", '\0' ==k[9] ); //tömb végén \0 van
	printf("%s\n",n);
	
	
	
	return 0;
}
