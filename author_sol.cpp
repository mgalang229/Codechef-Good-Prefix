#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		int k, x;
		cin >> s >> k >> x;
		int cnt = 0;
		vector<int> letters(26, 0);
		for (int i = 0; i < (int) s.size(); i++) {
			// count the frequency of each letter
			letters[s[i] - 'a']++;
			// check if the frequency of a letter is STRICTLY greater than 'x'
			if (letters[s[i] - 'a'] > x) {
				// check if 'k' is greater than 0
				if (k > 0) {
					// if yes, then reduce the frequency of the letter and decrement 'k'
					letters[s[i] - 'a']--;
					k--;
				} else {
					// otherwise, break the loop
					break;
				}
			} else {
				// if the frequency is less than or equal to 'x', then increment 'cnt'
				cnt++;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}
