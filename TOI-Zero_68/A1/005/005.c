#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    
    if (a == 1 || a == 2 || (a == 3 && b < 21)) {
        printf("winter\n");
    } else if ((a == 3 && b >= 21) || a == 4 || a == 5 || (a == 6 && b < 21)) {
        printf("spring\n");
    } else if ((a == 6 && b >= 21) || a == 7 || a == 8 || (a == 9 && b < 21)) {
        printf("summer\n");
    } else if ((a == 9 && b >= 21) || a == 10 || a == 11 || (a == 12 && b < 21)) {
        printf("fall\n");
    }
    
    return 0;
} 