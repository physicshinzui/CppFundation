#include <iostream> 
using namespace std;
bool isLowerVowel(char c, bool yIsVowel)
{
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        return true;
    case 'y':
        return yIsVowel;
    default:
        return false;
    }
}

int test() {
    // There are three branches in the function. 
    // so I try testing these three, which is comprehensive. 
    if (isLowerVowel('a', true)  != true)  return 1; 
    if (isLowerVowel('y', true)  != true)  return 2;
    if (isLowerVowel('y', false) != false) return 3;
    if (isLowerVowel('z', true)  != false) return 4;
    return 0;
}

int main() {
    cout << test() << endl;
}