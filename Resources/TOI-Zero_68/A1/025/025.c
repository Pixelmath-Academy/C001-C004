#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[10];
    scanf("%s", s);
    
    // Convert to uppercase
    for(int i = 0; s[i]; i++) {
        s[i] = toupper(s[i]);
    }
    
    char a[3], b[2];
    if(isdigit(s[0])) {
        if(strlen(s) >= 3 && s[0] == '1' && s[1] == '0') {
            a[0] = '1';
            a[1] = '0';
            a[2] = '\0';
            strcpy(b, &s[2]);
        } else {
            a[0] = s[0];
            a[1] = '\0';
            strcpy(b, &s[1]);
        }
    } else {
        a[0] = s[0];
        a[1] = '\0';
        strcpy(b, &s[1]);
    }
    
    const char* c;
    if(strcmp(a, "A") == 0) {
        c = "ace";
    } else if(strcmp(a, "J") == 0) {
        c = "jack";
    } else if(strcmp(a, "Q") == 0) {
        c = "queen";
    } else if(strcmp(a, "K") == 0) {
        c = "king";
    } else {
        c = a;
    }
    
    const char* d;
    if(strcmp(b, "D") == 0) {
        d = "diamonds";
    } else if(strcmp(b, "H") == 0) {
        d = "hearts";
    } else if(strcmp(b, "S") == 0) {
        d = "spades";
    } else if(strcmp(b, "C") == 0) {
        d = "clubs";
    }
    
    printf("%s of %s\n", c, d);
    
    return 0;
} 