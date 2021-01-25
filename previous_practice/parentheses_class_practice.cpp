#include <iostream> 
 using namespace std;
 
 class Dog {
 	private:
		 	int _age;
 	public:
        //Dog() {;}
 		Dog(int age) {_age = age;}
 		int GetAge() {return _age;}
 
 };
 
 int main() {
 	Dog pochi{1};
 	Dog hachi(10);
    Dog wanko(); // causes errors. 
 	cout << pochi.GetAge() << endl; 
 	cout << hachi.GetAge() << endl;
 }