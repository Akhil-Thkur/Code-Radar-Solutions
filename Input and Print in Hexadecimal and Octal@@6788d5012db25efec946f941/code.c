#include <stdio.h>
int main () {
    int n,a,ans:
    scanf("%d".&n);
    ans = 0;
    while(n>0) {
        a = n%8;
        n = n/8;
        ans =(ans*10)+a
    }
}