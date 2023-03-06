#include<bits/stdc++.h>
using namespace std;
int main()
{
	// #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 

    map<char, int> variables;
	
	char inp;
	char op1;
	char op2;
	int value;
	// getline(cin, inp);
	cin >> inp;

	while (inp != '!') {

		if (inp == '=') {
			cin >> op1;
			cin >> value;
			variables[op1] = value;
		} else if (inp == '+') {
			cin >> op1 >> op2;
			variables[op1] += variables[op2];
		} else if (inp == '-') {
			cin >> op1 >> op2;
			variables[op1] -= variables[op2];
		} else if (inp == '*') {
			cin >> op1 >> op2;
			variables[op1] *= variables[op2];
		} else if (inp == '/') {
			cin >> op1 >> op2;
			variables[op1] /= variables[op2];
		} else if (inp == '#') {
			cin >> op1;
			cout << variables[op1] << endl;
		}

		cin >> inp;

	}

	cout << "!";

    return 0;
}