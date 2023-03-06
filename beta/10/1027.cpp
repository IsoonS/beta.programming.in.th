#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<char, int> p1, pair<char, int> p2) {
	if (p1.second == p2.second) {
		return p1.first < p2.first;
	}
	
	return p1.second > p2.second;
}


int main()
{
	// #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

	// if value == -1 -> knocked out
    map<char, int> m;
    m['A'] = 0;
    m['B'] = 0;
    m['C'] = 0;
    m['D'] = 0;
    m['E'] = 0;
    m['F'] = 0;
    m['G'] = 0;
    char theLastOne;

    string inp;
    cin >> inp;

    int min_val = INT_MAX;

    while (inp != "!") {
    	// count score
    	for (int i = 0; i < inp.length(); i++) {
    		char ind = inp[i];
    		if (m[ind] != -1) {
    			m[ind] += 1;
    		}
    	}

    	// find minimum
    	for (auto itr = m.begin(); itr != m.end(); ++itr) {
            // make sure that who is knocked out is neglected
            if (itr->second < min_val and itr->second != -1) {
            	min_val = itr->second;
            	theLastOne = itr->first;
            }
    	}

    	// cout << min_val << endl;

    	// count min
    	int cnt = 0;
    	// count all people to check wheter if have winner or not
    	int all_in_compet = 0;
    	for (auto itr = m.begin(); itr != m.end(); ++itr) {
    		if (itr->second != -1) all_in_compet++;
            if (itr->second == min_val and itr->second != -1) {
            	cnt++;
            }
    	}

    	// make sure that min have only 1
    	// if all in compet == 1 that is have winner and winner will not be knocked out;
    	// if don't have winner that is all people > 1 we can knocked some people out
    	if (cnt == 1 and all_in_compet > 1) {
    		m[theLastOne] = -1;
    	}
    	min_val = INT_MAX;

    	cin >> inp;
    }

    // copy from map to vector for sort and answer
    vector<pair<char, int>> v;
    for (auto itr = m.begin(); itr != m.end(); ++itr) {
        if (itr->second != -1) {
        	v.push_back({itr->first, itr->second});
        }
    }

    sort(v.begin(), v.end(), cmp);

    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
    	cout << v[i].first << " " << v[i].second << endl;
    }

    return 0;
}