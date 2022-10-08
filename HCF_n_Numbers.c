#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10], n, mp, i, count;
    printf("Enter the Size: ");
    scanf("%d", &n);
    printf("Enter %d Numbers: ", n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    i=0;
    mp = arr[i];
    while(i<n)
    {
        if(mp<arr[i])
            mp = arr[i];
        i++;
    }
    while(1)
    {
        i=0;
        count=0;
        while(i<n)
        {
            if(arr[i]%mp==0)
                count++;
            i++;
        }
        if(count==n)
            break;
        else
            mp--;
    }
    printf("\nHCF(");
    for(i=0; i<(n-1); i++)
        printf("%d,", arr[i]);
    printf("%d) = %d", arr[i], mp);
    getch();
    return 0;
}
