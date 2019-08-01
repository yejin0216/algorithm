#include <iostream>

void quickSort(int *array, int left, int right) {

    int i = left;
    int j = right;
    int pivot = array[(left+right)/2];

    while ( i <= j ) {
        while ( array[i] < pivot ) i++;
        while ( array[j] > pivot ) j--;

        if ( i <= j ) {
            //swap한다.
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;

            i++;
            j--;
        }
    }

    if ( left < j ) {
        quickSort(array, left, j);
    }
    if ( right > i ) {
        quickSort(array, i, right);
    }

}

int main(void) {
    int n;
    scanf("%d", &n);

    int *array = new int[n]; //입력받을 배열
    for ( int i=0; i<n; i++ ) {
        scanf("%d", &array[i]);
    }

    quickSort(array, 0, n-1);

    for ( int i=0; i<n; i++ ) {
        printf("%d\n", array[i]);
    }

    return 0;
}
