#include <stdio.h>

int main() {
    double num;
    
    // Prompt the user for input
    printf("Enter a double precision floating point number: ");
    
    // Read the double value
    scanf("%lf", &num);
    
    // Print the double value
    printf("You entered: %lf\n", num);
    
    return 0;
}
