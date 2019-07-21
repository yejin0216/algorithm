#include <stdio.h>
#include <stdlib.h>

int main(void) {

    //첫째 줄에 카드의 개수 N(3 ≤ N ≤ 100)과 M(10 ≤ M ≤ 300,000)이 주어진다.
    //둘째 줄에는 카드에 쓰여 있는 수가 주어지며, 이 값은 100,000을 넘지 않는다.

    int n, m;
    scanf("%d %d\n", &n, &m);

    int *array = (int*)malloc(sizeof(int)*n); //배열 만들기
    for ( int i=0; i<n; i++ ) {
        scanf("%d", &array[i]); //n개의 카드 입력
    }

    //카드 3개를 고른다.
    int max = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    for ( int i=0; i<n; i++ ) {
        a = array[i];
        if ( a >= m ) break;
        for ( int j=i+1; j<n; j++ ) {
            b = array[j];
            for ( int k=j+1; k<n; k++ ) {
                c = array[k];
//                printf("%d %d %d \n", a, b, c);
                int value = a+b+c;
                if ( value >= max && value <= m ) {
                    max = value;
                    break;
                }
            }
        }
    }

    printf("%d", max);
    free(array);

    return 0;
}
