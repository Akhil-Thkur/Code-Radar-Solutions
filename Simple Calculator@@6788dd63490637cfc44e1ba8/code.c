#include <stdio.h>

int main() {
    int x, y;
    char c;
    
    scanf("%d", &x);
    scanf("%d", &y);
    scanf(" %c", &c); // Added space before %c to ignore whitespace characters
    
    if (c == '+') {
        printf("%d", x + y);
    } 
    else if (c == '-') {
        printf("%d", x - y);
    } 
    else if (c == '*') {
        printf("%d", x * y);
    } 
    else if (c == '/') {
        if (y != 0) {
            printf("%d", x / y);
        } else {
            printf("error");
        }
    } 
    else {
        printf("Invalid operator");
    }

    return 0;
}
