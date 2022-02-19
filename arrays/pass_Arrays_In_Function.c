#include <stdio.h>

void func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at index %d is %d\n",i,array[i]);
    }
    array[0] = 50;  // The change in function will change the actual value at index 0 of arr in main function()
    
}

void func2(int* ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at index %d is %d\n",i,ptr[i]);
       // printf("The value at index %d is %d\n",i,*(ptr+i));  We can write it like this
    }
    *(ptr + 2) = 50;
}

void func3(int array[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at array %d , %d is %d\n",i,j,array[i][j]);
        }
        
    }
    
}

int main()
{
    int arr[2][2] = {{5,6},{7,8}};
    //int arr[] = {2,4,5,8};
    // printf("The value at index 0 is %d\n",arr[0]);
    // func1(arr);
    // printf("The value at index 0 after changing in fuction is %d\n",arr[0]);

    // printf("The value at index 0 is %d\n",arr[0]);
    // func2(arr);
    // printf("The value at index 2 after changing in fuction is %d\n",arr[2]);

    func3(arr);

    return 0;
}