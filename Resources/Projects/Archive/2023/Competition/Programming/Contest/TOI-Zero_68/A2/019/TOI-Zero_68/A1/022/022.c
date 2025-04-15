#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    
    if ((b == 12 && a >= 22) || (b == 1 && a <= 19)) {
        printf("capricorn\n");
    } else if ((b == 1 && a >= 20) || (b == 2 && a <= 18)) {
        printf("aquarius\n");
    } else if ((b == 2 && a >= 19) || (b == 3 && a <= 20)) {
        printf("pisces\n");
    } else if ((b == 3 && a >= 21) || (b == 4 && a <= 19)) {
        printf("aries\n");
    } else if ((b == 4 && a >= 20) || (b == 5 && a <= 20)) {
        printf("taurus\n");
    } else if ((b == 5 && a >= 21) || (b == 6 && a <= 20)) {
        printf("gemini\n");
    } else if ((b == 6 && a >= 21) || (b == 7 && a <= 22)) {
        printf("cancer\n");
    } else if ((b == 7 && a >= 23) || (b == 8 && a <= 22)) {
        printf("leo\n");
    } else if ((b == 8 && a >= 23) || (b == 9 && a <= 22)) {
        printf("virgo\n");
    } else if ((b == 9 && a >= 23) || (b == 10 && a <= 22)) {
        printf("libra\n");
    } else if ((b == 10 && a >= 23) || (b == 11 && a <= 21)) {
        printf("scorpio\n");
    } else {
        printf("sagittarius\n");
    }
    
    return 0;
} 