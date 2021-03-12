 #include <cassert>
 #include <iostream> 
 using namespace std;
 
 int main() {
 	int a = 1;
 	int b = 1;
     assert(a==b); //programmers assume a to be b
     cout << 'a' << endl;
     a++;
     assert(a==b);//programmers still assume a to be b.
     cout << 'b' << endl;
 }