#include <stdio.h>
#include <string.h>

int main()
{
	char name[]="Pataki Norbert";
	int i=0;
	printf("%s\n", name);
	for(i=strlen(name) -1; i>=0;--i)
	{
		printf("%c", name[i]);
	}
	printf("\n");
	return 0;
}
