#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    // Corner cases
    if (n <= 1) {
        return 0; // Not prime
    }
    
    // Check from 2 to square root of n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // Not prime
        }
    }
    
    return 1; // Prime
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check if the number is prime
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    
    return 0;
}
