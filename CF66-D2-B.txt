#include <iostream>
#include <vector>
using namespace std;


int main()
{
	short n,tmp; cin >> n;
	vector <short> v;

	for (short i = 0; i < n; i++) {
		cin >> tmp;
		v.push_back(tmp);
	}

	short cpt, max = 0, imax = 0;
	for (short i = 0; i < n; i++) {
		cpt = 0;
		for (short j = i; j < n-1; j++) {

			if (v[j] < v[j + 1])
				break;

			cpt++;
		}

		for (short j = i; j > 0; j--) {

			if (v[j] < v[j -1])
				break;

			cpt++;
		}

		if (cpt > max) {

			max = cpt;
		}

	}
	cout << max + 1;
}
