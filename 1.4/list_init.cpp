#include <iostream> 
using namespace std;

int main() {
    int x {};
    cout << x << endl;
    
    string s {};
    cout << s << endl;
    
    bool b {};
    cout << b << endl;
    
    float f{};
    cout << f << endl;
    
    double d{};
    cout << d << endl;

    int arr[10] {};
    cout << "arr ";
    for (int i = 0; i<10; i++) {
        cout << arr[i];
    }
    cout << endl;
}