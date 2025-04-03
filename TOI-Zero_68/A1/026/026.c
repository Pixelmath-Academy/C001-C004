#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    int odd = 0, even = 0;
    
    if (a % 2 == 1) {
        odd++;
    } else {
        even++;
    }
    
    if (b % 2 == 1) {
        odd++;
    } else {
        even++;
    }
    
    if (c % 2 == 1) {
        odd++;
    } else {
        even++;
    }
    
    printf("even %d\n", even);
    printf("odd %d\n", odd);
    
    return 0;
} 