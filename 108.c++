#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n / 2; i++) {
        for (int s = 1; s <= n / 2; s++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }

    for (int j = 1; j <= n; j++)
        cout << "*";
    cout << endl;

    for (int i = n / 2; i >= 1; i--) {
        for (int s = 1; s <= n / 2; s++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }

    return 0;
}