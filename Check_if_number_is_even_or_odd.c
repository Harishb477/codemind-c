#include <stdio.h>
int main() 
{
    int num;
    scanf("%d", &num);
    
    (num % 2 == 0) ? printf("Even", num) : printf("Odd", num);
    return 0;
}
