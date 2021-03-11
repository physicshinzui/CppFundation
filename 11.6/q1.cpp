#include <iostream> 
using namespace std;

class RGBA {
    private:   
        using dt = uint_fast8_t;
        dt m_red, m_green, m_blue, m_alpha;
    public:
        RGBA(dt red = 0, dt green = 0, dt blue = 0, dt alpha = 255) : m_red{red}, m_green{green}, m_blue{blue}, m_alpha{alpha} { }
///        RGBA(dt m_red, dt m_green, dt m_blue, dt m_alpha) : m_red{0}, m_green{0}, m_blue{0}, m_alpha{255} { }

        void print() {
            cout << "r=" << (int)m_red << endl;
            cout << "g=" << (int)m_green << endl;
            cout << "b=" << (int)m_blue << endl;
            cout << "a=" << (int)m_alpha << endl;
        }
};

int main() {
	RGBA teal{ 0, 127, 127 };
	teal.print();
 
	return 0;
}