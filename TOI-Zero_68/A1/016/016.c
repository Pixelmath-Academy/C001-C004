#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    scanf("%s", a);
    
    if (strlen(a) > 3 && a[2] == '1' && a[3] == '6') {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
} 