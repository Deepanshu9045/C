#include <stdio.h>

int main() {
    int n = 5;
    int arr[4] = {1, 2, 3, 4};
    int sum = 0, total;

    // Sum of array elements
    for (int i = 0; i < 4; i++) {
        sum = sum + arr[i];             // 1 + 2 + 3 + 4 = 10
    }

    // Sum of numbers from 1 to n
    total = (n * (n + 1)) / 2;         // 5 * 6 / 2 = 15

    // Missing number
    int missing = total - sum;        // 15 - 10 = 5

    printf("The missing number is: %d", missing);       // Output: The missing number is: 5

    return 0;
}
