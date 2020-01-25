#include <stdio.h>
#include <stdlib.h>
#define DEBUG
#ifdef DEBUG
    #define PRINT_FUNCTION(txt) printf("%-10s\n%-10s:\n%4d:%s\n%s\n%s\n%d\n%d\n", __FUNCTION__,__FILE__,__LINE__,txt,__DATE__,__TIME__,__STDC__,__STDC_HOSTED__);
#endif // DEBUG

int main()
{
    char txt[100]="abc";
    PRINT_FUNCTION(txt);
    return 0;
}
