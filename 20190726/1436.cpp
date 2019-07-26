#include <string>
#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;

    int number = 666;
    int check = 0;

    while ( 1 ) {
        string temp = to_string(number);
        int index = temp.find("666");
//        cout << index;
        if ( index >= 0 ) {
            check++;
        }
        if ( check == n ) break;
        number++;
    }

    cout << number;

    return 0;
}
