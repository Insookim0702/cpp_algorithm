#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


bool compare(int a, int b) {
	return a > b;
}

int main() {
	int N;
	cin >> N;

	vector<int> A(N);
	for (int i = 0; i < N ; i++) {
		cin >> A[i];
	}

	sort(A.begin(), A.end(), compare);

	for (int i = 0; i < N; i++) {
		cout << A[i] << '\n';
	}
	return 0;
}