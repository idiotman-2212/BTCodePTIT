#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int A[100][100];

        // �?c ma tr?n A
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> A[i][j];
            }
        }

        // In c�c ph?n t? thu?c v�ng bi�n
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                    cout << A[i][j] << " ";
                } else {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}

