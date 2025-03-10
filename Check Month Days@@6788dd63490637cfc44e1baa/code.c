#include<stdio.h>
int main () {
    int x;
    scanf("%d",&x);
    switch (x) {
        case 1:
            printf('31'); // jan
        case 2:
            printf('28'); //feb
        case 3:
            printf('31'); // march
        case 4:
            printf('30'); // april
        case 5:
            printf('31'); // may
        case 6:
            printf('30'); // june 
        case 7:
            printf('31'); // july
        case 8:
            printf('31'); // aug
        case 9:
            printf('30'); // sept
        case 10:
            printf('31'); //out
        case 11:
            printf('30');   // nov    
        case 12:
            printf('31');
        default (
            printf("nothing");
        )                                         
    }
}