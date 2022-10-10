#include <stdio.h>
struct date{
    int day,month,year;
}dt;
int main() {
    printf("Enter in dd-mm-yy\n");
    scanf("%d%d%d", &dt.day, &dt.month, &dt.year);
    if (dt.year / 10000 < 1 && dt.month < 13 && dt.day < 32)
    {
        if (dt.month % 2 == 0 && dt.day == 30 && dt.month != 12) {
            dt.month++;
        } else if (dt.month == 12 && dt.day == 30 && dt.month % 2 == 0) {
            dt.month++;
            dt.year++;
        } else if (dt.month % 2 != 0 && dt.day == 31 && dt.month != 12) {
            dt.month++;
        } else if (dt.month % 2 != 0 && dt.day == 31 && dt.month == 12) {
            dt.month++;
            dt.year++;
        } else if (dt.month == 12) {
            dt.year++;
        } else if (dt.month == 2 && (dt.year / 100 == 0 || dt.year / 400 == 0 || dt.year / 4 == 0) && dt.day == 29) {
            dt.month++;
        } else if (dt.month == 2 && dt.day == 28) {
            dt.month++;
        } else {
            dt.day++;
        }
        printf("Tomorrow's date is : %d-%d-%d ", dt.day, dt.month, dt.year);
    }
    else{
        printf("Please reconsider what u have typed");
    }
    return 0;
}

