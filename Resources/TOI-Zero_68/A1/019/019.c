#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    if (a == b && b == c) {
        printf("all the same\n");
    } else if (a != b && b != c && a != c) {
        printf("all different\n");
    } else {
        printf("neither\n");
    }
    
    return 0;
} 