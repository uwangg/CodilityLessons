#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int solution(vector<int> &A) {

	int pre = A[0];
	int post = 0;

	for (int i = 1; i < A.size(); i++) {
		post += A[i];
	}

	int min = abs(post - pre);

	//cout << "pre = " << pre << ", post = " << post << ", min = " << min << endl;
	for (int i = 1; i < A.size()-1; i++) {
		pre += A[i];
		post -= A[i];
		//cout << "pre = " << pre << ", post = " << post << ", min = " << min << endl;
		if (min > abs(pre - post)) {
			min = abs(pre - post);
		}
	}
	
	return min;
}
int main() {
	vector<int> a;

	a.push_back(-10);
	a.push_back(-20);
	a.push_back(-30);
	a.push_back(-40);
	a.push_back(100);

	cout << solution(a);
	return 0;
}