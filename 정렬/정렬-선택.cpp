#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


int main() {
	string str;
	cin >> str;

	vector<int> A(str.size());

	// N이 2143인데, 배열로 [2,1,4,3]으로 만들기
	for (int i = 0; i < str.size(); i++) {
		A[i] = stoi(str.substr(i, 1));
	}

	// 선택 정렬
	// 고민: 제일 큰 값을 어떻게 찾지? => 해결방법: max_element사용
	// 고민: 제일 큰 값을 찾았고, 제일 큰 값이랑 맨 앞의 값을 바꾸는 방법? => 해결방법: iter_swap사용
	for (int i = 0; i < A.size(); i++) {
		auto max = max_element(A.begin() + i, A.end());
		iter_swap(max, A.begin() + i);
	}

	for (int i = 0; i < A.size(); i++) {
		cout << A[i] << '\n';
	}
	return 0;
}