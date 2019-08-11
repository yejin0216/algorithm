#include <iostream>

using namespace std;

string result;
int steps;

void move(int from, int to) {
    result += to_string(from);
    result += " ";
    result += to_string(to);
    result += "\n";

    steps++;
}

void hanoi(int count, int from, int by, int to) {
    if ( count == 1 ) {
        move(from, to);
    } else {
        hanoi(count-1, from, to, by);
        move(from, to);
        hanoi(count-1, by, from, to);
    }
}

int main(void) {

    int count;
    cin >> count;

    hanoi(count, 1, 2, 3);

    cout << steps << "\n";
    cout << result;

    return 0;
}
