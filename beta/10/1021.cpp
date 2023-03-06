#include<bits/stdc++.h>
using namespace std;
int main()
{
	// #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    priority_queue<int> pq; 

    int n;
    cin >> n;

    char tmp1;
    int tmp2;
    for (int i = 0; i < n; i++) {

    	cin >> tmp1;

    	if (tmp1 == 'P') {
    		cin >> tmp2;
    		pq.push(tmp2);
    	} else if (tmp1 == 'Q') {
    		if (!pq.empty()) {
    			cout << pq.top() << endl;
    			pq.pop();
    		} else {
    			cout << -1 << endl;
    		}
    	}
    }

    return 0;
}