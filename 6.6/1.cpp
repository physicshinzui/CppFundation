#include <iostream> 
using namespace std;

//global variables 
static int g_var; //by default, non-costant global variables involves external linkage, but 'static' keyword makes them internal linkage. 
const int g_var2{10};    //by default, internal linkage
constexpr int g_var3{20};//same as above

int main() {

}