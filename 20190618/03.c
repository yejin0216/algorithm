#include <stdio.h>
#include <stdbool.h>

int main(void) {

    //이때, A에서 X보다 작은 수를 모두 출력하는 프로그램을 작성하시오.
    int count, std;
    scanf("%d %d", &count, &std);

//    int temp;
//    while ( (temp=getchar())!=EOF && temp!='\n' ) {}

    int array[count];
    for ( int i=0; i<count; i++ ) {
        scanf("%d", &array[i]);
    }

    bool check = false;
    for ( int j=0; j<count; j++ ) {
        if ( check && std > array[j] ) {
            printf(" %d", array[j]);
        } else if ( !check && std > array[j] ) {
            printf("%d", array[j]);
            check = true;
        }
    }

    return 0;
}
