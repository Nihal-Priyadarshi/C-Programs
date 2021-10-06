#define CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void quickSort(int arr[], int firstIndex, int lastIndex) {
    //  Quick sort: Selects an index (pivot) and sorts around it, meaning that all left items are lesser and
    //  all right items are larger. This is performed recursively on either side of the pivot
    //  Time Complexity: Best - O(n log2 n) Average - O(n log2 n) Worst - O(n^2)

    //  Declare i, j, pivot, and temp as integers
    int i, j, pivot, temp;

    //  Verify that a valid range has been given/ that the indices do not match
    //  When the indices match, there will only be 1 item in the array to sort
    if (firstIndex < lastIndex) {
        //  Select a value to pivot around, in this case the first index is selected
        //  This is not always ideal, however in many cases this is fine
        pivot = firstIndex;

        //  Set values for iterators i and j
        i = firstIndex;
        j = lastIndex;

        //  Whilst i is less than j, make comparisons that close around the pivot
        while (i < j) {
            //  Whilst the value at index i is less than or equal to that of the pivot
            //  and i is less than the end of the array, increment i
            while (arr[i] <= arr[pivot] && i < lastIndex) {
                i++;
            }
            //  Whilst the value at index j is larger than that at the pivot, decrement j
            while (arr[j] > arr[pivot]) {
                j--;
            }
            //  If i is less than j, swap the values at the index locations
            //  As prior loops filter until a swap is needed, this is where the swap takes place
            if (i < j) {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }

        //  Update the value of the pivot index
        //  NOTE: Arithmetic swapping here causes erroneous results, possibly due to overlapping values
        temp = arr[pivot];
        arr[pivot] = arr[j];
        arr[j] = temp;

        //  As the pivot should now be placed correctly, sort the subarrays on either side of it
        quickSort(arr, firstIndex, j - 1);
        quickSort(arr, j + 1, lastIndex);

    }
}

//  Driver program for testing the quick sort
int main() {
    int arr[100], arrLen, i;

    printf("Enter number of elements in the array: ");
    scanf("%d", &arrLen);

    printf("Enter %d integers\n\r", arrLen);

    for (i = 0; i < arrLen; i++) {
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, arrLen);

    printf("Printing the sorted array:\n\r");

    for (i = 0; i < arrLen; i++) {
        printf("%d\n\r", arr[i]);
    }

    return 0;
}
