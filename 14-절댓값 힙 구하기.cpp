

#include <iostream>
#include <queue>
using namespace std;

struct compare {
	bool operator()(int o1, int o2) {
		int first_abs = abs(o1);
		int second_abs = abs(o2);
		if (first_abs == second_abs) {
			return o1 > o2;
		}
		else {
			return first_abs > second_abs;
		}
	}	
};

int main() {

	priority_queue<int, vector<int>, compare> pq;

	int N;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;

		if (x == 0) {
			if (pq.empty()) {
				cout << 0 << '\n';
			}
			else {
				cout << pq.top() << '\n';
				pq.pop();
			}
			
		}
		else {
			pq.push(x);
		}
	}


	return 0;
}