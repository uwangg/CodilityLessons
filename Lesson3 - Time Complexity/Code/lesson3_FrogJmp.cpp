#include <iostream>
#include <cmath>
using namespace std;

int solution(int X, int Y, int D) {
	return ceil((double)(Y - X) / D);
}

int main() {
	cout << solution(10,85,30);
	return 0;
}