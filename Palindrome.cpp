#include <iostream>
#include <string>

using namespace std;

int main (void) {

	int n, k;
	int i = 0;
	string numero;

	cin >> n >> k >> numero;

	if (k >= n) {
		cout << string(n, '9') << '\n';
	} else {
		int cam = 0;
		for (i = 0; i < n/2; i++) {
			if (numero[i] != numero[n-1-i])
				cam++;
		}

		if (cam > k) {
			cout << "-1\n";
		} else {
			for (i = 0; i < n/2; i++) {
				if (numero[i] == '9') {
					if (numero[n-1-i] != '9') {
						numero[n-1-i] = '9';
						k--;
						cam--;
					}
				} else {
					if (numero[i] == numero[n-1-i]) {
						if (k - cam >= 2) {
							numero[i] = '9';
							numero[n-1-i] = '9';
							k -= 2;
						}
					} else {
						if (numero[n-1-i] == '9') {
							numero[i] = '9';
							k--;
							cam--;
						} else if (k - cam >= 1) {
							numero[i] = '9';
							numero[n-1-i] = '9';
							cam--;
							k -= 2;
						} else {
							char max = numero[i] > numero[n-1-i] ? numero[i] : numero[n-1-i];
							numero[i] = max;
							numero[n-1-i] = max;
							cam--;
							k--;
						}
					}
				}
			}

			if (k > 0 && n % 2)
				numero[n/2] = '9';

			cout << numero << '\n';
		}
	}

	return 0;
}
