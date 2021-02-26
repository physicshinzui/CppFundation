#include <iostream> 
using namespace std;

int main() {
    int array[3] {0,1,2};     //array[0], array[1], array[2] are made. 
    array[3] = 10;            //undefined behavior occurs
    cout << "array[0] " << array[0] << endl;
    cout << "array[1] " << array[1] << endl;
    cout << "array[2] " << array[2] << endl;

    //this seems to print the correct value, But it is not assured it's always so.  
    cout << "array[3] " << array[-1] << endl; 
    
    //once substituting 20 into array[1000], you could get segmentation error.
    //array[1000] = 20;

    //a negative number seems to be accepted, but it causes undefined behaviour! Careful!
    array[-1] = -1;
    array[-10] = -10;
    cout << "array[0] " << array[0] << endl;
    cout << "array[1] " << array[1] << endl;
    cout << "array[2] " << array[2] << endl;
    cout << "array[3] " << array[-1] << endl; 
    cout << "array[4] " << array[-10] << endl; 
}