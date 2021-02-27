#include <iostream> 

class IntPair {
    //This causes an error when initializing the class object like IntPair {1, 2}
    private:
        int m1;
        int m2;

    public:
        // int m1;
        // int m2;

        void set(int x, int y) {
            m1 = x;
            m2 = y;
        }

        void print() {
            std::cout << "Pair(" << m1 << ',' << m2 << ')' << std::endl;
        }

};

int main()
{
	IntPair p1;
	p1.set(1, 1); // set p1 values to (1, 1)
	
	IntPair p2{ 2, 2 }; // initialize p2 values to (2, 2)
 
	p1.print();
	p2.print();
 
	return 0;
}