#include <stdio.h>

int countOnesInBinary(int num) {
    int count = 0;
    while (num) {
        count += num & 1; // Check if the least significant bit is 1
        num >>= 1;        // Right shift to process the next bit
    }
    return count;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Number of 1's in the binary equivalent: %d\n", countOnesInBinary(num));
    return 0;
}
