#include <iostream> 
using namespace std;



int main() {
    int array[5] {1,2,3,4,5};
    cout << "First element's address                       : " << &array[0] << endl; //returns the first element's address.
    
    //an array decays into the first element's address. So I expect it returns 1.
    cout << "array decays into the first element's address : " << array << endl; 

    cout << array[0] << endl; 
    return 0;
}