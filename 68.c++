#include <iostream>
using namespace std;

int main() {
    int n = 6;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            if(j == 1 || j == i || i == n)
                cout << char('A' + j - 1);
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}