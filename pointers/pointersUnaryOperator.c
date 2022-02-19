#include <stdio.h>

const int MAX = 3;  // Global declaration
int main()
{
	int var[] = {100, 200, 300};
    int *ptr;

    ptr = var;//storing address of the first element of the array in pointer variable
    
    printf("INCREMENT");
    for (int i = 0; i < MAX; i++)
    {
        printf("\n\n\nAddress of var[%d] = %x ", i, ptr);
        printf("\nValue of var[%d] = %d ", i, *ptr);

        ptr++;//move to the next location
    }
    return 0;
}
    
