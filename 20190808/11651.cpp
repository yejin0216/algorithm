/**
 * 1. 다차원 배열 입력시 메모리 초과 안되도록 주의!
 * 2. cin, cout보다 scanf, printf 사용하기
 */
#include <iostream>

using namespace std;

void merge(int array[][2], int low, int mid, int high) {
    int i = low;
    int j = mid+1;
    int k = 0;

    int sorted[100001][2];

    while ( i <= mid && j <= high ) {
        if ( array[i][1] < array[j][1] ) {
            sorted[k][0] = array[i][0];
            sorted[k++][1] = array[i++][1];
        } else if ( array[i][1] == array[j][1] ) {
            //y값이 같을 경우, x값으로 비교한다.
            if ( array[i][0] <= array[j][0] ) {
                sorted[k][1] = array[i][1];
                sorted[k++][0] = array[i++][0];
            } else {
                sorted[k][1] = array[j][1];
                sorted[k++][0] = array[j++][0];
            }
        } else {
            sorted[k][0] = array[j][0];
            sorted[k++][1] = array[j++][1];
        }
    }

    while ( i <= mid ) {
        sorted[k][0] = array[i][0];
        sorted[k++][1] = array[i++][1];
    }

    while ( j <= high ) {
        sorted[k][0] = array[j][0];
        sorted[k++][1] = array[j++][1];
    }

    k--;
//    cout << k << endl;
    while ( k >= 0 ) {
        array[low+k][0] = sorted[k][0];
        array[low+k][1] = sorted[k][1];
//        cout << sorted[k][1] <<;
        k--;
    }

}

void merge_sort(int array[][2], int low, int high) {
    if ( low < high ) {
        int mid = (low+high)/2;
        merge_sort(array, low, mid);
        merge_sort(array, mid+1, high);

        merge(array, low, mid, high);
    }
}

int main(void) {

    int n;
    scanf("%d", &n);

    int array[n][2];

    for ( int i=0; i<n; i++ ) {
        scanf("%d %d", &array[i][0], &array[i][1]);
    }

    merge_sort(array, 0, n-1);

    for ( int i=0; i<n; i++ ) {
        printf("%d %d\n", array[i][0], array[i][1]);
    }

    return 0;
}
