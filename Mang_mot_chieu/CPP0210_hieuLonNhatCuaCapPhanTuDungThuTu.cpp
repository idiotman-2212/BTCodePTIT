#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }

        int max_diff = -1; // Khoi tao gi� tri hieu lon nhat ban dau
        int min_value = A[0]; // Khoi tao gi� tri nho nhat ban dau

        for (int i = 1; i < n; i++) {
            if (A[i] > min_value) {
                int diff = A[i] - min_value; // T�nh hieu cua hai phan tu
                max_diff = max(max_diff, diff); // Cap nhat gi� tri hieu lon nhat
            } else {
                min_value = A[i]; // Cap nhat gi� tri nho nhat neu gap phan tu nho hon
            }
        }

        cout << max_diff << endl; // In ket qua
    }

    return 0;
}

