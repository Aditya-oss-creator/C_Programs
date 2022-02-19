#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    printf("Current File is %s\n",__FILE__);  
    printf("Current Date is %s\n",__DATE__);
    printf("Current Time is %s\n",__TIME__);
    printf("Current Line is %d\n",__LINE__);
    printf("ANSI: %d\n",__STDC__);
    return 0;
}