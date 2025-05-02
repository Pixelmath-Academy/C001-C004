#include <stdio.h>

int main() {
    int a;
    char b;
    scanf("%d", &a);
    scanf(" %c", &b);
    
    float c = a;
    if (b == 'F') {
        c = (a - 32) * 5.0 / 9.0;
    }
    
    if (c <= 0) {
        printf("solid\n");
    } else if (c < 100) {
        printf("liquid\n");
    } else {
        printf("gas\n");
    }
    
    return 0;
} 