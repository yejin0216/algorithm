#include <stdio.h>

int main(void) {

//    int count;
//    scanf("%d", &count);
//    int array[count];
//    for ( int i=0; i<count; i++ ) {
//        int a, b;
//        scanf("%d %d", &a, &b);
//        array[i] = a+b;
//    }
//    for ( int j=0; j<count; j++ ) {
//        printf("Case #%d: %d\n", j+1, array[j]);
//    }

    int count;
    scanf("%d", &count);
    int array[count];
    int aArray[count];
    int bArray[count];
    for ( int i=0; i<count; i++ ) {
        scanf("%d %d", &aArray[i], &bArray[i]);
        array[i] = aArray[i]+bArray[i];
    }
    for ( int j=0; j<count; j++ ) {
        printf("Case #%d: %d + %d = %d\n", j+1, aArray[j], bArray[j], array[j]);
    }

    return 0;
}
