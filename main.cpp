#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sort(vector<int>& vec) {
	sort(vec.begin(), vec.end());
}

int main() {
	vector<int> vec = {10, 12, 1, 4, 3};
	sort(vec);
	return 0;
}
