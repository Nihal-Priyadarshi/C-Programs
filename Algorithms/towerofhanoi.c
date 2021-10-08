#include<stdio.h>
void towerofhanoi( int n,char S, char M,char D)/*Source =S Middle =  M Destination D of the disk*/
{
    if(n==1)
    {
        printf("%d TRANSFER DISK FROM %c TO %c\n",n,S,D);
       }
    else
    {
        towerofhanoi(n-1,S,D,M);

        printf("%d TRANSFER DISK FROM %c to %c\n",n,S,D);

         towerofhanoi(n-1,M,S,D);
    }
}
 void main()
{
    int n;
    printf("/*Source =S Middle =  M Destination D  the disk*/ \n");
    printf("ENTER  THE ELEMENT: ");
    scanf("%d",&n);

    towerofhanoi(n,'S','M','D');

}
