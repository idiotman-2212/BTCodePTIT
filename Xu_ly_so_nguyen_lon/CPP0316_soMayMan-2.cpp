#include<bits/stdc++.h>
using namespace std;
bool check(string &s) {
    long long sum = 0; // Bi?n sum d? t�nh t?ng c�c ch? s? c?a s? nguy�n
    int len = s.length() - 1; // �? d�i c?a x�u s
    for (int i = 0; i < len; i++) {
        sum += s[i] - '0'; // C?ng gi� tr? c?a ch? s? t?i v? tr� i v�o sum
    }
    // N?u t?ng c�c ch? s? kh�c 0 v� chia h?t cho 9, t?c l� s? may m?n, tr? v? true, ngu?c l?i tr? v? false
    return (sum && sum % 9 == 0);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        cout << check(s) << endl;
    }
    return 0;
}
