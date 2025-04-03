#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    
    if (a > 9 || a == 0) {
        printf("Error : Out of range\n");
    } else if (a < 0) {
        printf("Error : Please input positive number\n");
    } else {
        const char* roman_numerals[] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        printf("%s\n", roman_numerals[a - 1]);
    }
    
    return 0;
} 