#include <stdio.h>
int main()
{
    int a,d,n,s;
    printf("Enter First Element:");
    scanf("%d",&a);
    printf("Enter Common Difference:");
    scanf("%d",&d);
    printf("Enter the element to find:");
    scanf("%d",&n);
    s=a+(n-1)*d;
    printf("The %dth term is %d",n,s);
}
