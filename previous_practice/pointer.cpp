#include <bits/stdc++.h>
using namespace std;

void fun(int* &p) {
    p = 1;
}

int main() {
    int* p = 0;
    fun(&p);
    cout << *p << endl;
}