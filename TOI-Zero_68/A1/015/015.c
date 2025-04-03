#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100], c[100];
    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);
    
    if (strlen(a) > 5 && strlen(b) > 5) {
        printf("%c%c%c%c\n", a[0], a[1], b[strlen(b)-1], c[strlen(c)-1]);
    } else {
        printf("%c%s%c\n", a[0], c, b[strlen(b)-1]);
    }
    
    return 0;
} 