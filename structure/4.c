#include <stdio.h>
struct std{
    int roll[50],marks[50];
    char nm[50][50];

}s;
int main() {
    int i,n;
    printf("How many student are there\n");
    scanf("%d",&n);
    for (int i = 0; i <n ; i++) {
         printf("Enter the roll number class and name of  student[%d]\n",i+1);
        scanf("%d %s%d", &s.roll[i], s.nm[i], &s.marks[i]);
    }
    printf("----------------\n");
    for (int i = 0; i <n ; ++i) {
        printf("%d-%s-->%d\n", s.roll[i], s.nm[i], s.marks[i]);
    }
    printf("----------------\n");

    
    return 0;
}

