#include <iostream>
#include <vector>
using namespace std;

vector<int> addOne1(vector<int> A) {
    for (int i = 0; i<(int)A.size(); i++) {
        A.at(i) = A.at(i) + 1;
    }
    return A; 
}

void addOne2(vector<int> &A) {
    for (int i = 0; i<(int)A.size(); i++) {
        A.at(i) = A.at(i) + 1;
    }
}

int main() {
    vector<int> A(1000000,0);

    clock_t begin_time = clock();
    vector<int> B = addOne1(A);
    cout << float( clock () - begin_time ) /  CLOCKS_PER_SEC << endl;
    
    begin_time = clock();
    addOne2(A);
    cout << float( clock () - begin_time ) /  CLOCKS_PER_SEC << endl;

}