#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    printf("10 = %d\n", n / 10);
    n = n % 10;
    printf("5 = %d\n", n / 5);
    n = n % 5;
    printf("2 = %d\n", n / 2);
    n = n % 2;
    printf("1 = %d\n", n);
    
    return 0;
} 