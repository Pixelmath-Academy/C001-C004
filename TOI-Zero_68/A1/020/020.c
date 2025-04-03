#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    if (a < b && b < c) {
        printf("increasing\n");
    } else if (a > b && b > c) {
        printf("decreasing\n");
    } else {
        printf("neither\n");
    }
    
    return 0;
} 