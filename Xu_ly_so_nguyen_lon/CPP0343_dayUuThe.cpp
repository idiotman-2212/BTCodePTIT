#include<bits/stdc++.h>

using namespace std;
// kiem tra k� tu cuoi c�ng cua chuoi c� le hay khong
bool check(string &a)
{
    return a[a.length() - 1] & 1;// neu kh�c 0 l� so le
}

int main()
{
    int t;
    cin >> t;
    string s, x;// x d�ng de luu tung tu khi doc s
    cin.ignore();
    while(t--)
    {
        int c = 0, l = 0;
        getline(cin, s);
        stringstream ss(s);// tach tu trong chuoi 
        int len = 0;
        while(ss >> x)
        {
            if(check(x)) ++l;
            else ++c;
            ++len;
        }
        if((len & 1 && l > c) || (!(len & 1) && c > l)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}


