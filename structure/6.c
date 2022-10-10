#include <stdio.h>
struct std{
    int eno[50],sal[50];
    char nm[50][50];

}s;
int main() {
    int i,n;
    printf("How many employees are there\n");
    scanf("%d",&n);
    for (int i = 0; i <n ; i++) {
        printf("Enter the employee number name and salary of employee %d \n",i+1);
        scanf("%d %s%d", &s.eno[i], s.nm[i], &s.sal[i]);
    }
    printf("----------------\n");
    for (int i = 0; i <n ; ++i) {
        printf("%d-%s-->%d\n", s.eno[i], s.nm[i], s.sal[i]);
    }
    printf("----------------\n");


    return 0;
}

