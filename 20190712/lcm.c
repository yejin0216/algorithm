#include <stdio.h>

//최대 공약수
int gcd(int a, int b) {
    int c;
    while ( b != 0 ) {
        c = a%b; //나머지
        a = b;
        b = c;
    }
    return a;
}

//최소 공배수
int lcm(int a, int b) {
    return a*b/gcd(a, b);
}

int main(void) {

    int m = 4;
    int n = 10;

    printf("%d", lcm(m,n));

    return 0;
}