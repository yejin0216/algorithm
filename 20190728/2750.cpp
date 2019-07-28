#include <iostream>

using namespace std;

int main(void) {

    //첫째 줄에 수의 개수 N(1 ≤ N ≤ 1,000)이 주어진다. 둘째 줄부터 N개의 줄에는 숫자가 주어진다. 이 수는 절댓값이 1,000보다 작거나 같은 정수이다. 수는 중복되지 않는다.
    int n;
    cin >> n;

    int *array = new int[n];
    for ( int i=0; i<n; i++ ) {
        cin >> array[i]; //하나씩 입력
    }

    int *q = new int[n];
    for ( int i=0; i<n; i++ ) {
        int count = 0;
        for ( int j=0; j<n; j++ ) {
            if ( array[i] > array[j] ) {
                count++;
            }
        }
        q[count] = array[i]; //작은 것들의 갯수를 센다
    }

    for ( int i=0; i<n; i++ ) {
        cout << q[i] << endl;
    }

    return 0;
}
