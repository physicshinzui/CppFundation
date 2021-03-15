#include <typeinfo>
#include <iostream> 
#include <vector> 
#include <array>
using namespace std;

void exec(){
    cout << "function" << endl;
};


int main() {
    cout << "int                   -> " << typeid(int).name() << endl;    
    cout << "float                 -> " << typeid(float).name() << endl;
    cout << "double                ->" << typeid(double).name() << endl;    
    cout << "long                  ->" << typeid(long).name() << endl;    
    cout << "unsigned              -> " << typeid(unsigned).name() << endl;    
    
    int* ptr{};   
    cout << "pointer               ->" << typeid(ptr).name() << endl;    

    int x{10};   
    cout << "Reference             ->" << typeid(&x).name() << endl;    

    int arr{3};   
    cout << "Array(int)            ->" << typeid(arr).name() << endl;    
    double arr2{3};   
    cout << "Array(double)         ->" << typeid(arr2).name() << endl;    
   
    vector<int> vec1(3);   
    cout << "vector(int)           ->" << typeid(vec1).name() << endl;    
    vector<double> vec2(3);   
    cout << "vector(double)        ->" << typeid(vec2).name() << endl;    
   
    array<int, 3> st_array1;   
    cout << "std::array<int, 3>    ->" << typeid(st_array1).name() << endl;    
    array<int, 5> st_array2;   
    cout << "std::array<int, 5>    ->" << typeid(st_array2).name() << endl;    
    array<double, 5> st_array3;
    cout << "std::array<double, 5> ->" << typeid(st_array3).name() << endl;    

    cout << "void exec()           ->" << typeid(exec()).name() << endl;    
    cout << "void exec             ->" << typeid(exec).name() << endl;    
}
