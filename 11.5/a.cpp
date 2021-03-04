#include <iostream>
using namespace std;

int add(int x = 1, int y = 2) {
	return x + y;
}

double add(double x, double y) {
    return x + y;
}

int main() {
	int ans1 = add(3, 5);
	int ans2 = add(3);
	int ans3 = add();
    double ans4 = add(1.1, 3.0);
    cout << ans1 << endl;
    cout << ans2 << endl;
    cout << ans3 << endl;
    cout << ans4 << endl;
	return 0;
}