#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    long long sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += (long long)i * i;
    }
    
    printf("%lld\n", sum);
    
    return 0;
} 