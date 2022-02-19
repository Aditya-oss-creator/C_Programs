#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int arr[7];
    int n = 128,i=0;
    while (n > 0)
    {
        arr[i] = n%2;
        n=n/2;
        i++;
    }
        printf("%d\n",arr[7]);

    while (i > 0)
    {   
        i--;
        printf("%d",arr[i]);
    }
    
    
    
    return 0;
}