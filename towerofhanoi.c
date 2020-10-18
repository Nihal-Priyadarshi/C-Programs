#include<stdio.h>
void towerofhanoi( int n,char source, char middle,char destination)
{
    if(n==1)
    {
        printf("%d TRANSFER DISK FROM %c TO %c\n",n,source,destination);
       }
    else
    {
        towerofhanoi(n-1,source,destination,middle);

        printf("%d TRANSFER DISK FROM %c to %c\n",n,source,destination);

         towerofhanoi(n-1,middle,source,destination);
    }
}
 void main()
{
    int n;
    printf("ENTER  THE ELEMENT");
    scanf("%d",&n);

    towerofhanoi(n,'source','middle','destination');

}
