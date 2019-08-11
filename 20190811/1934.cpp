#include <iostream>

using namespace std;

int gcd(int a, int b) {
    int c;
    //유클리드 호제법 : a b의 최소 공약수는 b a%b의 최소 공약수와 같다.
    while ( b ) { //b가 1보다 클 때까지만...
        c = a%b;
        a = b;
        b = c;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main(void) {

    int n;
    cin >> n;

    int array[n][2];
    for ( int i=0; i<n; i++ ) {
        cin >> array[i][0];
        cin >> array[i][1];
    }

    for ( int i=0; i<n; i++ ) {
        cout << lcm(array[i][0], array[i][1]) << "\n";
    }

    return 0;
}
