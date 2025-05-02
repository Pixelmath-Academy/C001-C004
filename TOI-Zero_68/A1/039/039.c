#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if(n == 0 || n == 1) {
        printf("1\n");
        return 0;
    }
    
    long long result = 1;
    for(int i = 2; i <= n; i++) {
        result *= i;
    }
    
    printf("%lld\n", result);
    
    return 0;
} 