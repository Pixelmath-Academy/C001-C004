#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    scanf("%s", a);
    
    if (strlen(a) == 13) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
} 