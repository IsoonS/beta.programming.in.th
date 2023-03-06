#include<bits/stdc++.h>
using namespace std;
int main()
{
	// #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 

  	int startNum[6] = {1, 2, 3, 5, 4, 6};
  	int a[6];

  	vector<string> v;

  	vector<int> ans;

  	int n;
  	cin >> n;

  	string tmp;
  	for (int i = 0; i < n; i++) {
  		string tmp;
  		cin >> tmp;
  		v.push_back(tmp);
  	}

  	for (int i = 0; i < n; i++) {
  		// init array

  		for (int j = 0; j < 6; j++) {
  			a[j] = startNum[j];
  		}

  		// debug
  		// for (int k = 0; k < 6; k++) {
  		// 	cout << a[k] << " ";
  		// } 
  		// cout << endl;

  		int tmp;

  		for (int j = 0; j < v[i].length(); j++) {
  			if (v[i][j] == 'F') {
  				tmp = a[0];
  				a[0] = a[3];
  				a[3] = a[5];
  				a[5] = a[1];
  				a[1] = tmp;
  			} else if (v[i][j] == 'B') {
  				tmp = a[5];
  				a[5] = a[3];
  				a[3] = a[0];
  				a[0] = a[1];
  				a[1] = tmp;
  			} else if (v[i][j] == 'L') {
  				tmp = a[2];
  				a[2] = a[0];
  				a[0] = a[4];
  				a[4] = a[5];
  				a[5] = tmp;
  			} else if (v[i][j] == 'R') {
  				tmp = a[4];
  				a[4] = a[0];
  				a[0] = a[2];
  				a[2] = a[5];
  				a[5] = tmp;
  			} else if (v[i][j] == 'C') {
  				tmp = a[3];
  				a[3] = a[2];
  				a[2] = a[1];
  				a[1] = a[4];
  				a[4] = tmp;
  			} else if (v[i][j] == 'D') {
  				tmp = a[1];
  				a[1] = a[2];
  				a[2] = a[3];
  				a[3] = a[4];
  				a[4] = tmp;
  			}
  		}

  		// debug
  		// for (int k = 0; k < 6; k++) {
  		// 	cout << a[k] << " ";
  		// } 
  		// cout << endl << endl;

  		ans.push_back(a[1]);
  	}

  	for (int i = 0; i < ans.size(); i++) {
  		cout << ans[i] << " ";
  	}

    return 0;
}