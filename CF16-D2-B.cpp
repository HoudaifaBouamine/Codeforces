#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int n; short m; cin >> n >> m;

	pair<int, short>* arr = new pair<int, short>[m];

	for (short i = 0; i < m; i++)
		cin >> arr[i].first >> arr[i].second;

	for (short i = 0; i < m; i++) {

		for (short j = i; j < m; j++) {

			if (arr[i].second < arr[j].second) {
				pair<int, short> tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}

		}
	}

	int i = 0, a = 0;
	while (n && i < m) {

		if (n >= arr[i].first) {
			n -= arr[i].first;
			a += arr[i].first * arr[i].second;
			i++;
		}
		else {
			a += n * arr[i].second;
			n = 0;
		}
	}

	cout << a;

}