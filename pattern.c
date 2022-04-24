#include <stdio.h>
 
int main()
{
    	int n,i,j;
  	scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j = 1;j<=2*i-1;j++)
    {
        if(j == 1 || j == 2*i-1)
      printf("%d",i);
      else
      {
          if(j<=i)
      printf("%d",i-j+1);
      else
      printf("%d",j-i+1);
      }
    }
    printf("\n");
  }
    return 0;
}