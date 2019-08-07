#include <iostream>
#include <string>
#include <string.h>

using namespace std;

void quickSort(int* count, string* array, int left, int right) {
    int i = left;
    int j = right;
    int p = count[(left+right)/2];

    while ( i <= j ) {
        while ( count[i] < p ) i++;
        while ( count[j] > p ) j--;

        if ( i <= j ) {
            //swap
            int temp = count[i];
            string stemp = array[i];
            count[i] = count[j];
            array[i] = array[j];
            count[j] = temp;
            array[j] = stemp;

            i++;
            j--;
        }
    }

    if ( i < right ) {
        quickSort(count, array, i, right);
    }
    if ( j > left ) {
        quickSort(count, array, left, j);
    }
}

int main(void) {

    int n;
    cin >> n;

    string array[n];
    int count[n];

    int size = 0;
    for ( int i=0; i<n; i++ ) {
        cin >> array[i];
        size = array[i].size();
        count[i] = size;
    }

    //quickSort
    quickSort(count, array, 0, n-1);

    int check = 0;
    int flag = 0;
    while ( !flag ) {
        int result = 0;
        for ( int i=0; i<n-1; i++ ) {
            if ( count[i] == count[i+1] ) {
                string a = array[i];
                string b = array[i+1];
                result = a.compare(b);
                if ( result > 0 ) {
                    string temp = array[i];
                    array[i] = array[i+1];
                    array[i+1] = temp;
                    check = 1;
                }
                if ( result == 0 ) {
                    array[i] = " ";
                }
            }
        }
        if ( check == 1 ) {
            check = 0;
        } else {
            flag = 1;
        }
    }

    for ( int i=0; i<n; i++ ) {
        if ( array[i] != " " ) continue;
        cout << array[i] << endl;
    }

    return 0;
}
