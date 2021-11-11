   
#include <vector>
#include <iostream>
#include <algorithm>
int main(){
   int anno;
    std::cin >> anno;
    if (anno == 1918) { // transition
        std::cout << "26.09.1918\n";
    } else { // gregorian and/or julian
        if ((anno < 1918 && anno % 4 == 0) || (anno % 4 == 0 && anno % 100 != 0) || anno % 400 == 0) {
            std::cout << "12.09." << anno << '\n';
        } else {
            std::cout << "13.09." << anno << '\n';
        }
    }

    return 0;
    
    }
