#include<bits/stdc++.h>
using namespace std;
int main()
{
	// #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    string inp;
    cin >> inp;

    double x, y;
    x = y = 0;

    while (inp != "*") {
    	int i = 0;
    	double distance = 0;

    	// convert string to number (distance)
    	while ((int)inp[i] >= (int)('0') and (int)inp[i] <= (int)('9')) {
    		distance = (10 * distance) + (int)inp[i] - (int)('0');
    		i++;
    	}

    	// direction in mix (isn't N E W S)
    	if (inp.length() - i == 2) {
    		distance /= sqrt(2);
    	}

    	while (i < inp.length()) {
    		if (inp[i] == 'N') y += distance;
    		else if (inp[i] == 'E') x += distance;
    		else if (inp[i] == 'W') x -= distance;
    		else if (inp[i] == 'S') y -= distance;
    		i++;
    	}

    	cin >> inp;
    }

    cout << fixed << setprecision(3) << x << " " << y << endl;

    double displacement = sqrt(x*x + y*y);

    cout << fixed << setprecision(3) << displacement;


    return 0;
}