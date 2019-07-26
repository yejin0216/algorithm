#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(void) {

    int n;
    int error_count;

    cin >> n; //채널
    cin >> error_count; //고장난 개수

    char *button = new char[error_count]; //버튼 그룹
    for ( int i=0; i<error_count; i++ ) {
        cin >> button[i];
    }

    // 모든 버튼이 고장났을 경우
    if ( error_count == 10 ) {

        cout << abs(n-100); //+버튼으로 올린다.

    } else {

        //100에서 +, - 버튼으로 접근하는 경우
        int comp = abs(n-100);

        // 평범 사례
        int min = 999999;
        int value = 0;
        for ( int i=0; i<999999; i++ ) {
            string channel = to_string(i); //숫자
            int check = 0;
            for ( int j=0; j<error_count; j++ ) {
                int index = channel.find(button[j]);
                if ( index > -1 ) { //잘못된 버튼이 포함되지 않아야한다.
                    check = 1;
                    break;
                }
            }

            if ( check == 0 ) {
//                cout << i << endl;
                //자리수 구하기
                int _value = i;
                int jarisu = 0;
                if ( _value == 0 ) {
                    jarisu++;
                } else {
                    while( _value > 0 ) {
                        jarisu++;
                        _value /= 10;
                    }
                }

                int temp = abs(n-i)+jarisu;
                if ( temp > min ) {
                    break;
                } else {
                    min = temp;
                    value = i;
//                    cout << jarisu << endl;
//                    cout << min << endl;
//                    cout << value << endl;
                }
            }
        }

//        min = abs(value-n);

        if ( comp > min ) {
            cout << min << endl;
        } else {
            cout << comp << endl;
        }

    }

    return 0;
}
