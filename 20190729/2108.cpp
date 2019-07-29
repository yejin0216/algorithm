#include <iostream>
#include <cmath>


int main(void) {

    int n;
    scanf("%d", &n);//개수

    int sum = 0;
    int median = 0;
    int mode = 0;

    int min = 4000;
    int max = -4000;
    int centerIndex = n/2+1;

    int *array = new int[n];
    int minus[4002] = {0,};
    int plus[4002] = {0,};
    for ( int i=0; i<n; i++ ) {
        scanf("%d", &array[i]);

        int temp = array[i];
        sum += temp;

        if ( min > temp ) {
            min = temp; //최소값
        }
        if ( max < temp ) {
            max = temp;
        }

        if ( temp < 0 ) {
            minus[abs(temp)] = minus[abs(temp)]+1; //마이너스값, 각 숫자별로 빈도수 측정
        } else {
            plus[abs(temp)] = plus[abs(temp)]+1; //플러스값
        }
    }

    int acc = 0;
    int modecount = 0;
    int flag = 0;
    for ( int i=4000; i>=1; i--) {
        int temp = minus[i];
        if ( temp > 0 ) { //소속된 개수가 0보다 클 때
            acc += temp; //누적값을 계산한다.

            if ( centerIndex <= acc && centerIndex > acc-temp ) {
                median = i*-1;
            }

            //최빈값
            if ( modecount < temp ) {
                modecount = temp;
                mode = i*-1;
                flag = 1;
            } else if ( flag == 1 && modecount == temp ) {
                mode = i*-1;
                flag = 0;
            }
        }
    }

    for ( int i=0; i<=4000; i++) {
        int temp = plus[i];
        if ( temp > 0 ) { //소속된 개수가 0보다 클 때
            acc += temp; //누적값을 계산한다.

            if ( centerIndex <= acc && centerIndex > acc-temp ) {
//                printf("%d\n", acc);
                median = i;
            }

            //최빈값
            if ( modecount < temp ) {
                modecount = temp;
                mode = i;
                flag = 1;
            } else if ( flag == 1 && modecount == temp ) {
                mode = i;
                flag = 0;
            }
        }
    }

    double avg = floor((double)sum/(double)n+0.5);

    printf("%d\n", (int)avg); //평균
    printf("%d\n", median); //중앙값
    printf("%d\n", mode); //최빈값
    printf("%d\n", max-min); //범위

}
