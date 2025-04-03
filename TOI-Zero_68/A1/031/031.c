#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char s[20];
    sprintf(s, "%d", n);
    int length = strlen(s);
    
    for(int i = 0; i < length; i++) {
        printf("%c", s[i]);
        if(length - i == 4) {
            printf(",");
        }
    }
    printf("\n");
    
    return 0;
} 