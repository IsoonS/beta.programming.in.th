#include<bits/stdc++.h>
using namespace std;
int main()
{
	// #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 

	// index = student id, value = class of each student
    int class_of_student[1005];

    queue<int> qClass;
    queue<int> aq[15];
	
	int n_c, n_s;
	cin >> n_c >> n_s;

	int c, s;
	for (int i = 0; i < n_s; i++) {
		cin >> c >> s;
		class_of_student[s] = c;
	}

	char command;

	cin >> command;

	while (command != 'X') {
		if (command == 'E') {
			int studentId;
			cin >> studentId;

			int stdClassNumber = class_of_student[studentId];

			if (aq[stdClassNumber].size() == 0) {
				aq[stdClassNumber].push(studentId);
				qClass.push(stdClassNumber);
			} else {
				aq[stdClassNumber].push(studentId);
			}

		} else if (command == 'D') {
			int classInFront = qClass.front();
			if (aq[classInFront].size() == 0) {
				cout << "Empty\n";
			} else {
				cout << aq[classInFront].front() << "\n";
				aq[classInFront].pop();

				if (aq[classInFront].size() == 0) {
					qClass.pop();
				}
			}
		}


		cin >> command;
	}

	cout << 0;


	return 0;
}