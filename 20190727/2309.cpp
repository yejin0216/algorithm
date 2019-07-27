#include <iostream>

using namespace std;

int main(void) {

    int array[9];
    int sum = 0;
    for ( int i=0; i<9; i++ ) {
        cin >> array[i];
        sum += array[i];
    }

    int gap = sum - 100;
    int check = 0;
    for ( int i=0; i<9; i++ ) {
        for ( int j=1; j<9; j++ ) {
            if ( array[i] + array[j] == gap && i != j ) {
                array[i] = 0;
                array[j] = 0;
                check = 1;
                break;
            }
        }
        if ( check ) break;
    }

    int queue[7] = {0,};
    for ( int i=0; i<9; i++ ) {
        int number = 0;
//        cout << array[i] << endl;
        if ( array[i] > 0 ) {
            for ( int j=0; j<9; j++ ) {
                if ( array[j] > 0 ) {
                    if ( array[i] > array[j] ) { //나보다 작은 수가 몇개있나?
                        number++;
                    }
                }
            }
            queue[number] = array[i];
        }
    }

    int temp = 0;
    for ( int i=0; i<7; i++ ) {
        cout << queue[i] << endl;
        temp+=queue[i];
    }

    return 0;
}
