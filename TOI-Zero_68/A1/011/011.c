#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    scanf("%s", a);
    
    if (strlen(a) == 0) {
        return 0;
    }
    
    int c = 1;
    for (int i = 1; i < strlen(a); i++) {
        if (a[i] == a[i-1]) {
            c++;
        } else {
            printf("%c%d", a[i-1], c);
            c = 1;
        }
    }
    printf("%c%d\n", a[strlen(a)-1], c);
 