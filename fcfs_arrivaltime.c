
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n, Tot_WT=0, Tot_TAT=0;
    int P[10], AT[10], BT[10], WT[10], TAT[10], CT[10];
    printf("Enter the number of processes :");
    scanf("%d", &n);
    printf("\nEnter the Arrival time and Burst time of each process :\n");
    for (int i = 0; i < n; i++)
    {
        printf("P[%d] : ", i + 1);
        scanf("%d %d", &AT[i], &BT[i]);
        P[i] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (AT[i] < AT[j])
            {
                swap(&AT[i], &AT[j]);
                swap(&BT[i], &BT[j]);
                swap(&P[i], &P[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            CT[i] = AT[i] + BT[i];
            TAT[i] = CT[i] - AT[i];
            WT[i] = TAT[i] - BT[i];
        }
        else
        {
            CT[i] = CT[i-1] + BT[i];
            TAT[i] = CT[i] - AT[i];
            WT[i] = TAT[i] - BT[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (P[i] > P[j])
            {
                swap(&AT[i], &AT[j]);
                swap(&BT[i], &BT[j]);
                swap(&P[i], &P[j]);
                swap(&WT[i],&WT[j]);
                swap(&TAT[i],&TAT[j]);
                swap(&CT[i],&CT[j]);
            }
        }
    }

    printf("\nP\tAT\tBT\tCT\tTAT\tWT");
    for(int i=0; i<n; i++)
    {
        printf("\nP[%d]\t%2d\t%2d\t%2d\t%2d\t%2d",P[i],AT[i],BT[i],CT[i],TAT[i],WT[i]);
        Tot_WT += WT[i];
        Tot_TAT += TAT[i];
    }
    printf("\nAverage Waiting time:%3f",(float)Tot_WT/n);
    printf("\nAverage Turn Around Time:%3f",(float)Tot_TAT/n);

}
