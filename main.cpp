# include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	while (1) {
		n++;
		int u = n % 10;
		int t = (n / 10) % 10;
		int h = (n / 100) % 10;
		int th = n / 1000;

		if (u != th  && u != t && u != h && t != h && t != th && h != th) {
			cout << n;
			return 0;
		}

		if (n > 9123) {
			return 1;
		}
	}
	
}
