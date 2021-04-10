#include <bits/stdc++.h>

using namespace std;
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	// create a 'checker' vector to check the proper appearance of each letter in "heidi"
	vector<bool> checker(5, false);
	for (int i = 0; i < (int) s.size(); i++) {
			if (s[i] == 'h') {
				// check if 'h' appears first
				checker[0] = true;
			} else if (s[i] == 'e' && checker[0] && !checker[1]) {
				// check if 'e' appears after 'h' appeared and make sure it hasn't appeared yet
				checker[1] = true;
			} else if (s[i] == 'i' && checker[1] && !checker[2]) {
				// check if 'i' appears after 'e' appeared and make sure it hasn't appeared yet
				checker[2] = true;
			} else if (s[i] == 'd' && checker[2] && !checker[3]) {
				// check if 'd' appears after 'e' appeared and make sure it hasn't appeared yet
				checker[3] = true;
			} else if (s[i] == 'i' && checker[3] && !checker[4]) {
				// check if 'i' appears after 'd' appeared and make sure it hasn't appeared yet
				checker[4] = true;
			}
	}
	for (int i = 0; i < (int) checker.size(); i++) {
		// check if the string passed all the five checker values
		if (!checker[i]) {
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";
	return 0;
}
