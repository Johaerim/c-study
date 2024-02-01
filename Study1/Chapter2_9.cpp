//
//  Chapter2_9.cpp
//  Study1
//
//  Created by 조해림 on 1/28/24.
//

#include <iostream>
#include "MY_CONSTANTS.h"




int main()
{
    using namespace std;
    
//    constexpr int my_const(123);
//    
//    int number;
//    cin >> number;
//    
//    const int special_number(number);
    
    double radius;
    cin >> radius;
    
    double circumference = 3.0 * radius * constants::pi;
    
    
    
    return 0;
    
}
