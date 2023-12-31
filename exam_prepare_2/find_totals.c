#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int find_totals(int arr[SIZE][SIZE], int size);

int main(void) {

    // Only your function is called during testing
    // Any changes in this main function will not
    // be used in testing

    int array1[SIZE][SIZE] = {{0, 3, 2, 5, 2},
                            {2, 1, 5, 1, 1},
                            {4, 4, 7, 7, 0},
                            {10, 0, 0, 0, 0},
                            {0, 0, 0, 0 ,0}};

    // Should have 2 rows with a sum of 10
    printf("%d rows had a sum of 10\n", find_totals(array1, SIZE));

    return 0;
}

int find_totals(int arr[SIZE][SIZE], int size) {

    // TODO: Find the number of rows with a 
    // sum equal to exactly 10
    int counter = 0;
    for (int row = 0; row < size; row++) {
        int sum = 0;
        for (int col = 0; col < size; col++) {
            sum += arr[row][col];
        }
        if (sum == 10) {
            counter += 1;
        }
    }
    return counter;
}

