#include<bits/stdc++.h>

using namespace std;
int main(){
	int t; 
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		int x = -1;
		bool check = false;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		// Khoi tao mang d�nh dau voi gi� tri ban dau l� 0
		int dd[100000] = {0};
		for(int i = 0; i < n; i++){
			// Neu phan tu a[i] d� xuat hien truoc d�, g�n x v� dung v�ng lap
			if(dd[a[i]] > 0){
				x = a[i];
				check = true;
				break;
			}
			 // ��nh dau phan tu a[i] d� xuat hien
			dd[a[i]]++;
		}
		if(check){
			cout << x << endl;
		}else{
			cout << -1 << endl;
		}
	}
	return 0;
}
