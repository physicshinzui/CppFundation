//Dangerous opeartion of an array 
#include <iostream> 

class MyArray {
    public:
        int _array[3];
};

class MyArrayBetter {
    private:
        int _array[3];
        int _length = 3;

    public: 
        void set(int index, int value) {
            if (index < 3) { //i.e., 0, 1, 2 pass through.
                _array[index] = value;
            } else {
                std::cout << "Out of bounds. Index = " << index << std::endl;
                std::exit(EXIT_FAILURE);
            }
        }
        void print() {
            for (int i{0}; i < _length; ++i) {
                std::cout << _array[i] << std::endl;
            }
        }

};

int main() {
    // MyArray arr{1,2,3};
    // //Disaster may occour when doing the following: 
    // arr._array[2] = 10; //out of bounds! This generates undefined behaviour. 
    // std::cout << arr._array[0] << std::endl;
    // std::cout << arr._array[1] << std::endl;
    // std::cout << arr._array[2] << std::endl;    

    MyArrayBetter arrBetter;
    //arrBetter._array[1] = 1; //not alllowed
    arrBetter.set(0, 11);
    arrBetter.set(1, 12);
    arrBetter.set(2, 13);
    arrBetter.print();
    arrBetter.set(3, 13);

}