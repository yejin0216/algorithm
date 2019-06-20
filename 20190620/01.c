#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char array[1000000];
    gets(array);

    //가운데만, 앞에만, 뒤에만, 앞enl
    int temp = 0;
    for ( int i=0; i<1000000; i++ ) {
        if ( array[i] == NULL || array[i] == '\n' ) {
//            printf("%c\n", array[i]);
            break;
        }
        temp++;
    }

    char newArray[temp];
    for ( int i=0; i<temp; i++ ) {
        newArray[i] = array[i];
    }

    //The Curious Case of Benjamin Button
    //1. 가운데만 n+1
    int count = 0;
    if ( newArray[0] != ' ' && newArray[temp-1] != ' ' ) {
        for ( int i=0; i<temp; i++ ) {
            if ( newArray[i] == ' ' ) {
                count++;
            }
        }
        printf("%d", count+1);
    }

    //2. 앞+가운데 n
    if ( (newArray[0] == ' ' && newArray[temp-1] != ' ') ||
         (newArray[0] != ' ' && newArray[temp-1] == ' ') ) {
        for ( int i=0; i<temp; i++ ) {
            if ( newArray[i] == ' ' ) {
                count++;
            }
        }
        printf("%d", count);
    }

    //3. 앞+가운데+뒤 n-1
    if ( newArray[0] == ' ' && newArray[temp-1] == ' ' ) {
        for ( int i=0; i<temp; i++ ) {
            if ( newArray[i] == ' ' ) {
                count++;
            }
        }
        printf("%d", count-1);
    }

    return 0;
}
