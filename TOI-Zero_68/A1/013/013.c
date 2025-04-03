#include <stdio.h>
#include <string.h>

int main() {
    char c;
    char s[100];
    scanf(" %c", &c);
    scanf("%s", s);
    
    if (c == 'H' && strcmp(s, "4567") == 0) {
        printf("safe unlocked\n");
    } else if (strcmp(s, "4567") == 0) {
        printf("safe locked - change char\n");
    } else if (c == 'H') {
        printf("safe locked - change digit\n");
    } else {
        printf("safe locked\n");
    }
    
    return 0;
} 