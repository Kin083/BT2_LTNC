#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << ' ';
        }
        for (int t = 0; t < n - i; t++) {
            cout << '*';
        }
        cout << endl;
    }
}
