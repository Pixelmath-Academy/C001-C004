#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    struct {
        int value;
        const char* symbol;
    } val[] = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };
    
    for(int i = 0; i < 13; i++) {
        while(n >= val[i].value) {
            printf("%s", val[i].symbol);
            n -= val[i].value;
        }
    }
    printf("\n");
    
    return 0;
} 