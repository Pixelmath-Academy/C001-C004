#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if(n < 0) {
        if(n % 10 != 0) {
            n -= n % 10;
        }
        while(n <= 0) {
            printf("%d ", n);
            n += 10;
        }
    } else {
        if(n % 10 != 0) {
            n -= n % 10;
        }
        while(n >= 0) {
            printf("%d ", n);
            n -= 10;
        }
    }
    printf("\n");
    
    return 0;
} 