#include <stdio.h>
#include <math.h>

float EDistance(int x1, int y1, int x2, int y2)
{
    int distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    return distance;
}

float areaOfCircle(int x1, int y1, int x2, int y2, float (*distance)(int, int, int, int)) // int x1, int y1, int x2, int y2,
{
    return distance(x1,  y1, x2, y2);
}

int main()
{
    int x1, x2, y1, y2;
     float dst;
    printf("Enter x1 y1 value\n");
    scanf("%d %d", &x1, &y1);

    printf("Enter x2 y2 value\n");
    scanf("%d %d", &x2, &y2);
    EDistance(x1, y1, x2, y2);

    dst = areaOfCircle(x1, y1, x2, y2, EDistance);
    printf("Distance b/w these point is: %.2f\n",dst);
    return 0;
}