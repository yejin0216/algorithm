#include <stdio.h>

int main(void) {
    //N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오
    //20 10 35 30 7

    int count; //N개
    scanf("%d", &count);
    int array[count];

    int max = 0;
    int min = 0;

    for ( int i=0; i<count; i++ ) {
        scanf("%d", &array[i]); //N개 만큼 주입받음, 입력에 공백이 있어도 이 부분에 굳이 공백을 넣을 필요는 없다!!!

        int item = array[i];
        if ( i == 0 ) {
            max = item; //최대값
            min = item; //최소값
        } else {
            if ( max < item ) {
                max = item;
            }
            if ( min > item ) {
                min = item;
            }
        }
    }

    printf("%d %d", min, max);

    return 0;
}
