#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    if (a < 5 || b < 20 || c < 25) {
        printf("fail\n");
    } else {
        printf("pass\n");
    }
    
    return 0;
} 