#include <stdio.h>
#include <string.h>

int main()
{
	char name[]="Pataki Norbert";
	int i;
	int len=strlen(name);
	char c;
	printf("%s\n", name);
	for(i=0; i<len/2 ;++i)
	{
		c=name[i];
		name[i]=name[len-1-i];
		name[len-1-i]=c;
		
	}
	printf("%s\n", name);
	return 0;
}
