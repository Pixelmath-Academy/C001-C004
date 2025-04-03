#include <stdio.h>

int main() {
    int a1, b1, c1, a2, b2, c2;
    scanf("%d", &a1);
    scanf("%d", &b1);
    scanf("%d", &c1);
    scanf("%d", &a2);
    scanf("%d", &b2);
    scanf("%d", &c2);
    
    if (a1 == a2 && b1 == b2 && c1 == c2) {
        printf("0\n");
    } else if (a1 > a2) {
        printf("2\n");
    } else if (a1 < a2) {
        printf("1\n");
    } else if (b1 > b2) {
        printf("2\n");
    } else if (b1 < b2) {
        printf("1\n");
    } else if (c1 > c2) {
        printf("2\n");
    } else {
        printf("1\n");
    }
    
    return 0;
} 