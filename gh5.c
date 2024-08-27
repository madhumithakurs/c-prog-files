#include <stdio.h>

int main() {
    int number, factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if (number>0) 
	{
		int temp = number; 
        while (temp > 1)
		{
            factorial *= temp;
        }
    printf("Factorial of %d is %d\n", number, factorial);    
    
    } else {
        
        printf("Enter a valid number!!!"); 
    }

    return 0;
}