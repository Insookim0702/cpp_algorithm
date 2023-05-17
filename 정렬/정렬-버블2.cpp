#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
	int N;
	cin >> N;
	vector<pair<int, int>> A(N);

	for (int i = 0; i < N; i++) {
		cin >> A[i].first;
		A[i].second = i;
	}

	sort(A.begin(), A.end());

	// 고민: 인덱스가 바뀐 자리를 어떻게 찾지? 같은 값도 있을테니, 값끼리 비교는 안 되고.
	// find 함수를 쓰면 되지 않을까? -> find 함수는 정렬된 벡터에서만 쓸 수 있음. -> 했지만, 지움.
	// 해결방법: vector<pair<int, int>> A(N); 이렇게 만들어서, 정렬된 벡터의 인덱스를 두번째 원소에 저장하도록 하자.
	int max = 0;
	for (int i = 0; i < N; i++) {
		if (A[i].second - i > max) {
			max = A[i].second - i;
		}
	}

	cout << max + 1 << '\n';
	return 0;
}