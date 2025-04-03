#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int count = 0;
    char c[2];
    
    for(int i = 0; i < n; i++) {
        scanf("%s", c);
        if(c[0] == 'A' || c[0] == 'E' || c[0] == 'I' || c[0] == 'O' || c[0] == 'U') {
            count++;
        }
    }
    
    printf("%d\n", count);
    
    return 0;
} 