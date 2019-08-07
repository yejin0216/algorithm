#include <iostream>
#include <string>

using namespace std;

void merge(string array[], int low, int mid, int high)  {
    int i = low;
    int j = mid+1;
    int k = 0;
    string sorted[20001];

    while ( i<=mid && j<=high ) {
        if ( array[i].size() < array[j].size() ) {
            sorted[k] = array[i];
            k++;
            i++;
        } else if ( array[i].size() == array[j].size() ) {
            if ( array[i].compare(array[j]) < 0 ) {
                sorted[k] = array[i];
                k++;
                i++;
            } else {
                sorted[k] = array[j];
                k++;
                j++;
            }
        } else {
            sorted[k] = array[j];
            k++;
            j++;
        }
    }

    while ( i <= mid ) {
        sorted[k] = array[i];
        k++;
        i++;
    }

    while ( j <= high ) {
        sorted[k] = array[j];
        k++;
        j++;
    }

    k--;

    while ( k >= 0 ) {
        array[low+k] = sorted[k];
        k--;
    }

}

void merge_sort(string array[], int low, int high) {
    int mid;
    if ( low < high ) {
        mid = (high+low)/2;
        //분할
        merge_sort(array, low, mid);
        //분할
        merge_sort(array, mid+1, high);

        //정복
        merge(array, low, mid, high);
    }
}

int main(void) {

    int n;
    cin >> n;

    string array[n];
    for ( int i=0; i<n; i++ ) {
        cin >> array[i]; //문자
    }

    //합병정렬 시도
    merge_sort(array, 0, n-1);

    for ( int i=0; i<n; i++ ) {
        if ( i == 0 || (array[i-1]).compare(array[i]) != 0 ) {
            cout << array[i] << '\n';
        }
    }

    return 0;
}
