#include<bits/stdc++.h>
using namespace std;
int main()
{
    string operand1, operand2, operator1;
    cin >> operand1;
    cin >> operator1;
    cin >> operand2;

    if (operator1 == "*") {
        int numZero = 0;
        for (int i = 0; i < operand1.length(); i++) {
            if (operand1[i] == '0') numZero++;
        }
        for (int i = 0; i < operand2.length(); i++) {
            if (operand2[i] == '0') numZero++;
        }

        cout << "1";
        for (int i = 0; i < numZero; i++) {
            cout << "0";
        }
    } else if (operator1 == "+") {
        int op1_len = operand1.length();
        int op2_len = operand2.length();
        if (op1_len < op2_len) {
            int i;
            for (i = 0; i < op2_len - op1_len; i++) {
                cout << operand2[i];
            }
            for (i = op2_len - op1_len; i < op2_len; i++) {
                if (operand2[i] == '0' and operand1[i - (op2_len - op1_len)] == '0') {
                    cout << "0";
                } else if (operand2[i] == '1' and operand1[i - (op2_len - op1_len)] == '1') {
                    cout << "2";
                } else {
                    cout << "1";
                }

            }
        } else {
            int i;
            for (i = 0; i < op1_len - op2_len; i++) {
                cout << operand1[i];
            }
            for (i = op1_len - op2_len; i < op1_len; i++) {
                if (operand1[i] == '0' and operand2[i - (op1_len - op2_len)] == '0') {
                    cout << "0";
                } else if (operand1[i] == '1' and operand2[i - (op1_len - op2_len)] == '1') {
                    cout << "2";
                } else {
                    cout << "1";
                }

            }
        }
    }


    return 0;
}
