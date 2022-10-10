#include<stdio.h>
#include<math.h>
struct distance
{
    float x1,y1,x2,y2;
}x;

int main() {
    float dist;
    printf("Enter the 1st points --> ");
    scanf("%f %f", &x.x1, &x.y1);
    printf("Enter the 2nd points --> ");
    scanf("%f %f", &x.x2, &x.y2);
    dist = sqrt((x.x2 - x.x1)*(x.x2 - x.x1) + (x.y2 - x.y1)*(x.y2 - x.y1));
    printf("The distance between the points (%0.01f,%0.01f) and (%0.01f,%0.01f) is %0.01f", x.x1, x.y1, x.x2, x.y2, dist);
}
