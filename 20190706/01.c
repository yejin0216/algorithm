#include <stdio.h>
#include <ctype.h>

int main(void) {

//    char input[1000000];
//    gets(input); //입력문자

    int array[26] = {0,};
    int temp;
    int max = 0;
    int result = 0;
    while ( (temp = getchar()) != EOF && temp != '\n' ) {
        temp = toupper(temp);//72,69,76,76,79
        int index = temp-65;
        array[index] += 1; //array[5] = e의 개수
        //printf("%d, %d\n", max, array[index]);

        if ( max < array[index] ) {
            max = array[index];
            result = index+65;
        } else if ( max == array[index] ) {
            result = 63;
        }
    }
    printf("%c", result);

    return 0;
}
