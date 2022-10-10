#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter 10 Elemants of Array: ");
    int a[15];
    int i,n,p,x,val,temp;
    int fai=9;
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);

    }
    printf("\nEntered Array is: ");
    for(int i=0;i<10;i++){
        printf("%d  ",a[i]);
    }

    do{
        printf("\n");
        printf("1-> Insertion \n");
        printf("2-> Deletion \n");
        printf("3-> Search \n");
        printf("4-> Display \n");
        printf("5-> Sort \n");
        printf("6-> Exit");
        printf("\n\nSelection an option:  ");
        scanf("%d",&n);


        switch(n)
        {
            case 1: printf("Enter index where do you want to insert number: ");
                    scanf("%d",&p);
                    printf("Enter Value: ");
                    scanf("%d",&val);
                    for(i=fai;i>=p;i--){
                        a[i+1]=a[i];
                    }
                    fai++;
                    a[p]=val;
                    for(i=0;i<=fai;i++){
                        printf("%d  ",a[i]);
                    }
                    break;

            case 2: printf("Enter index to be deleted:   ");
                    scanf("%d",&p);

                    for(i=p+1;i<=fai;i++){
                        a[i-1]=a[i];
                    }
                    fai--;
                    break;

             case 3:for (i = 0; i < fai; i++)
                    {
                        for (int j = 0; j < (fai - i - 1); j++)
                        {
                            if (a[j] > a[j + 1])
                            {
                                temp = a[j];
                                a[j] = a[j + 1];
                                a[j + 1] = temp;
                            }
                        }
                    }

                    printf("\nEnter the element to search:");
                    scanf("%d",&x);
                    int flag=0;
                    int first=0;
                    int last=n-1;
                    int mid;
                    while(first<=last)
                    {
                        mid=(first+last)/2;

                        if(x==a[mid]){
                            flag=1;
                            break;
                        }
                        else
                            if(x>a[mid])
                                first=mid+1;
                            else
                                last=mid-1;
                    }

                    if(flag==1)
                        printf("\nElement found at position %d",mid+1);
                    else
                        printf("\nElement not found");
                    break;

            case 4:for(i=0;i<=fai;i++){
                        printf("%d",a[i]);
                        }
                    break;
            case 5:for (i = 0; i < fai; i++)
                    {
                        for (int j = 0; j < (fai - i - 1); j++)
                        {
                            if (a[j] > a[j + 1])
                            {
                                temp = a[j];
                                a[j] = a[j + 1];
                                a[j + 1] = temp;
                            }
                        }
                    }
                    break;


        }

    }while (n!= 6);
    return 0;
}