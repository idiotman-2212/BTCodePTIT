#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> A;

        // �?c ma tr?n vu�ng A v� chuy?n th�nh d�y d� s?p x?p
        for (int i = 0; i < n*n; i++) {
            int num;
            cin >> num;
            A.push_back(num);
        }
        sort(A.begin(), A.end());

        // In ph?n t? nh? nh?t th? k
        cout << A[k-1] << endl;
    }

    return 0;
}

