#include<stdio.h>
int main () {
    int x;
    scanf("%d",&x);
    switch (x) {
        case 1:
            printf("31");
            break; // jan
        case 2:
            printf("28");
            break; //feb
        case 3:
            printf("31");
            break; // march
        case 4:
            printf("30");
            break; // april
        case 5:
            printf("31");
            break; // may
        case 6:
            printf("30");
            break; // june 
        case 7:
            printf("31");
            break; // july
        case 8:
            printf("31");
            break; // aug
        case 9:
            printf("30");
            break; // sept
        case 10:
            printf("31");
            break; //out
        case 11:
            printf("30");
            break;   // nov    
        case 12:
            printf("31");
            break;
        default: 
            printf("nothing");
                                             
    }
}