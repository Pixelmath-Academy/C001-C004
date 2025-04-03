#include <stdio.h>
#include <ctype.h>

int main() {
    int a;
    char b;
    scanf("%d", &a);
    scanf(" %c", &b);
    b = tolower(b);
    
    if (a < 18 || b == 's') {
        printf("20\n");
    } else {
        printf("50\n");
    }
    
    return 0;
} 