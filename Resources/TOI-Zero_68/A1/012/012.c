#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    char c;
    scanf("%s", s);
    scanf(" %c", &c);
    
    int a1 = atoi(s);
    
    // Reverse the string
    int len = strlen(s);
    for (int i = 0; i < len/2; i++) {
        char temp = s[i];
        s[i] = s[len-1-i];
        s[len-1-i] = temp;
    }
    int a2 = atoi(s);
    
    if (c == '+') {
        printf("%d + %d = %d\n", a1, a2, a1 + a2);
    } else {
        printf("%d * %d = %d\n", a1, a2, a1 * a2);
    }
    
    return 0;
} 