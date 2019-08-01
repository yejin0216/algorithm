#include <iostream>

void doubleQuicksort(int* x, int* y, int left, int right) {

    int i = left;
    int j = right;
    int pivot = x[(left+right)/2];

    while ( i <= j ) {
        while ( x[i] < pivot ) i++;
        while ( x[j] > pivot ) j--;

        if ( i <= j ) {
            int _x = x[i];
            int _y = y[i];
            x[i] = x[j];
            x[j] = _x;
            y[i] = y[j];
            y[j] = _y;

            i++;
            j--;
        }
    }

    if ( left < j ) {
        doubleQuicksort(x, y, left, j);
    }
    if ( right > i ) {
        doubleQuicksort(x, y, i, right);
    }

}

void quicksort(int* item, int left, int right) {

    int i = left;
    int j = right;
    int pivot = item[(left+right)/2];

    while ( i <= j ) {
        while ( item[i] < pivot ) i++;
        while ( item[j] > pivot ) j--;

        if ( i <= j ) {
            int _x = item[i];
            item[i] = item[j];
            item[j] = _x;

            i++;
            j--;
        }
    }

    if ( left < j ) {
        quicksort(item, left, j);
    }
    if ( right > i ) {
        quicksort(item, i, right);
    }

}


int main(void) {

    int n;
    scanf("%d", &n);

    int *x = new int[n]; //x좌표
    int *y = new int[n]; //y좌표

    for ( int i=0; i<n; i++ ) {
        scanf("%d", &x[i]);
        scanf("%d", &y[i]);
    }

    doubleQuicksort(x, y, 0, n-1);

    int count = 0;
    int start = 0;
    int end = 0;
    for ( int i=0; i<n; i++ ) {
        count++;
        if (  i+1 > n || x[i] != x[i+1] ) {

            int index = count; //개숫
            end = i;
            int *array = new int[index];
            int k = 0;
            for ( int j=start; j<=end; j++ ) {
                array[k] = y[j];
                k++;
            }

            quicksort(array, 0, index-1);

            k = 0;
            for ( int j=start; j<=end; j++ ) {
                y[j]= array[k];
                k++;
            }

            count = 0; //초기화
            start = i+1;
        }
    }

    for ( int i=0; i<n; i++ ) {
        printf("%d %d\n", x[i], y[i]);
    }

    return 0;
}
