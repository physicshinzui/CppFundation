#include <iostream> 
int main() {
    switch (1)
    {
        int a; // okay: declaration is allowed before the case labels
        int b{ 5 }; // illegal: initialization is not allowed before the case labels
    
        case 1:
            int y; // okay but bad practice: declaration is allowed within a case
            y = 4; // okay: assignment is allowed
            break;
    
        case 2:
            y = 5; // okay: y was declared above, so we can use it here too
            break;
    
        case 3:
            int z{ 4 }; // illegal: initialization is not allowed within a case
            break;
    } 
}
