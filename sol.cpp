#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, a, b;
		cin >> n >> a >> b;
		for (int i = 0; i < n; i++) {
			// print letters from 'i' to 'i + a' with 'b' distinct letters
			cout << ((char) ((i % b) + 97));
		}
		cout << '\n';
	}
	return 0;
}
