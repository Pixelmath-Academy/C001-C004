#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int min = INT_MAX;
    int x;
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &x);
        if(x < min) {
            min = x;
        }
    }
    
    printf("%d\n", min);
    
    return 0;
} 