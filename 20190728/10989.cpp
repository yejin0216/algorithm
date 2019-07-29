#include <stdio.h>

int main(void) {

    int n;
//    cin >> n;
    scanf("%d", &n);

    int a[10001] = {0,}; //합이 들어갈 배열

    //첫째 줄에 수의 개수 N(1 ≤ N ≤ 10,000,000)이 주어진다. 둘째 줄부터 N개의 줄에는 숫자가 주어진다. 이 수는 10,000보다 작거나 같은 자연수이다.
    getchar(); //버퍼 하나 비우고

    //숫자 입력받기
    for ( int i=0; i<n; i++ ) {
        int temp;
        scanf("%d", &temp);
        a[temp] = a[temp]+1;
    }

    for ( int i=0; i<10001; i++ ) {
        if ( a[i] > 0 ) {
//            printf("%d\n", a[i]);
            for ( int j=0; j<a[i]; j++ ) {
                printf("%d\n", i);
            }
        }
    }




    //메모리 초과 극복을 위해 다시 해보자!

//    int *a = new int[n+1];
//    int *b = new int[n+1];
//    int *nusum = new int[n+1];
//    int *result = new int[n+1];

//    //초기화
//    for ( int i=0; i<=n; i++ ) {
//        b[i] = 0;
//        nusum[i] = 0;
//        result[i] = 0;
//    }
//    //입력
//    for ( int i=1; i<=n; i++ ) {
//        cin >> a[i]; //1번부터 입력한다.
//    }
//
//    //1 1 3 4 1
//    //3 0 1 1 0
//    for ( int i=1; i<=n; i++ ) {
//        //입력된 숫자별 개수를 위치에 넣는다.
//        b[a[i]] = b[a[i]] + 1;
//    }
//
//    //3 3 4 5 5
//    for ( int i=1; i<=n; i++ ) {
//        //누적 숫자를 구한다.
//        nusum[i] = b[i] + nusum[i-1];
//    }
//
//    //3 3 4 5 5
//    for ( int i=1; i<=n; i++ ) {
//        //각 배열에 숫자를 넣는다.
//        result[nusum[a[i]]] = a[i];
//        nusum[a[i]]--;
//    }
//
//    for ( int i=1; i<=n; i++ ) {
//        cout << result[i] << endl;
//    }

//    delete[] a;
//    delete[] b;
//    delete[] nusum;
//    delete[] result;

    return 0;
}
