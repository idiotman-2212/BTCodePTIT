#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); // �?c k� t? '\n' sau d�ng ch?a s? lu?ng b? test

    while (t--) {
        string s;
        getline(cin, s); // �?c x�u k� t? S

        // T�ch x�u S th�nh c�c t? ri�ng bi?t v� luu v�o vector
        vector<string> words;
        stringstream ss(s);
        string word;
        while (ss >> word) {
            words.push_back(word);
        }
        // In ra c�c t? trong vector theo th? t? ngu?c l?i
        for (int i = words.size() - 1; i >= 0; i--) {
            cout << words[i];
            if (i != 0) {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}

