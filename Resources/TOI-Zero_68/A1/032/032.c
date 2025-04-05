#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    // First line
    for(int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");
    
    n -= 2;
    if(n < 1) {
        return 0;
    }
    
    // Second line
    for(int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");
    
    n -= 2;
    if(n < 1) {
        return 0;
    }
    
    // Third line
    for(int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");
    
    return 0;
} 