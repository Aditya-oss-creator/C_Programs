 #include<stdio.h>
 #include<conio.h>
int product(int,int,int);
int main(){
  int a,b,c;
  printf("Enter the value of a: ");
  scanf("%d",&a);
  printf("Enter the value of b: " );
  scanf("%d",&b);
  printf("Enter the value of c: ");
  scanf("%d",&c);

// printf("Enter value of a,b and c\n");
// scanf("%d %d %d",&a,&b,&c);
  
  printf("%d",product(a,b,c));
    getch();
}

int product(int a,int b, int c)
{
    if(c == 7)
    {
        return -1;
    }
    else if(b == 7)
    {
        return c;
    }
    else if(a == 7)
    {
        return b*c;
    }
    else
    {
        return a*b*c;
    }
}