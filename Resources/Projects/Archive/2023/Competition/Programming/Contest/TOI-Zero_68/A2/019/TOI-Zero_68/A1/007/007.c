#include <stdio.h>
#include <ctype.h>

int main() {
    char a;
    scanf("%c", &a);
    a = tolower(a);
    
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
} 