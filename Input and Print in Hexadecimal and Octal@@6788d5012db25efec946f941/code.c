#include <stdio.h>
int main () {
    int n,a,ans:
    scanf("%d".&n);
    ans = 0;
    while(n>0) {
        a = n%8;
        n = ans*10+a;
    }
    print("Hexadecimal: %d",ans);
}