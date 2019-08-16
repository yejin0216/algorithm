#include <iostream>

using namespace std;

void swap(int array[], int a, int b) {
    int temp = array[a];
    array[a] = array[b];
    array[b] = temp;
}

int partition(int array[], int low, int high) {
    int pi = (low+high)/2;
    int pv = array[pi];
    int si = low;

    swap(array, pi, high);
    for ( int i=low; i<high; i++ ) {
        if ( array[i] < pv ) {
            swap(array, i, si);
            si += 1;
        }
    }
    swap(array, si, high);

    return si;
}

void quick_sort(int array[], int low, int high) {
    if ( low < high ) {
        int pivot = partition(array, low, high);
        quick_sort(array, low, pivot-1);
        quick_sort(array, pivot+1, high);
    }
}

int main(void) {

    int n;
    cin >> n;

    int array[n];
    for ( int i=0; i<n; i++ ) {
        cin >> array[i];
    }

    int m;
    cin >> m;

    int mrray[m];
    for ( int i=0; i<m; i++ ) {
        cin >> mrray[i];
    }

    quick_sort(array, 0, n-1);

    for ( int i=0; i<m; i++ ) {
        int result = 0;
        int left = 0;
        int right = n-1;
        int x = mrray[i];
        while ( left <= right ) {
            int mid = (left+right)/2;
            if ( array[mid] == x ) {
                result = 1;
                break;
            } else if ( x < array[mid] ) {
                right = mid-1;
            } else {
                left = mid+1;
            }
        }

        cout << result;
        if ( i<m-1 ) {
            cout << " ";
        }
    }

    return 0;
}
