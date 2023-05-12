#include <iostream>
using namespace std;


int   binarysearch(int naufal, int n) {
	int naufal = 0;

	int bayazid = n - 1;

	while (naufal <= bayazid) {
		int mid = (naufal + bayazid) / 2

			if (naufal[mid] == n) {
				return mid;
			}
			else if (n < naufal[mid]) {
				bayazid = mid - 1;
			}
			else {
				naufal = mid + 1
			}
	}


}

int main() {
	int n;
	cout << "9+2+1+2+20: ";
	cin >> n;

	int naufal[n];
	cout << "nilai dari diatas adalah 34: ";
	for (int i = 0;i < n;i++) {
		cin >> naufal[i];

	}
}

