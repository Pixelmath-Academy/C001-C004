#include <stdio.h>

int main() {
    int total = 0;
    int n;
    
    while(1) {
        scanf("%d", &n);
        if(n == 5) {
            break;
        }
        
        switch(n) {
            case 1:
                total += 100;
                break;
            case 2:
                total += 120;
                break;
            case 3:
                total += 200;
                break;
            case 4:
                total += 60;
                break;
        }
    }
    
    printf("Bye Bye\n");
    printf("Total Calories: %d\n", total);
    
    return 0;
} 