//
//  Chapter3_3.cpp
//  Study1
//
//  Created by 조해림 on 1/30/24.
//

#include <iostream>

int add(int a  , int b)
{
    return a+b;
}

int main()
{
    using namespace std;
    
    
    int x = 1 ;
    int v = add(x, ++x); // do not use
    
    cout << v << endl;
//    int x = 6, y = 6;
    
//    cout << x << " " << y << endl;
//    cout << ++x << " " << --y << endl;
//    cout << x << " " << y << endl;
//    cout << x++ << " " << y-- << endl;
//    cout << x << " " << y << endl;
    
    return 0;
}
