#include <stdio.h>
#include <string.h>

int main() {
    char A[100], B[100];
    scanf("%s", A);
    scanf("%s", B);
    
    printf("Hello %s %s\n", A, B);
    
    char C[5];
    C[0] = A[0];
    C[1] = A[1];
    C[2] = B[0];
    C[3] = B[1];
    C[4] = '\0';
    printf("%s\n", C);
    
    return 0;
} 