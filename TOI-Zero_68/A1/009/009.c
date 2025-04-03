#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    
    int sum = a + b;
    printf("%d\n", sum);
    
    if (sum >= 50) {
        printf("pass\n");
    } else {
        printf("fail\n");
    }
    
    return 0;
} 