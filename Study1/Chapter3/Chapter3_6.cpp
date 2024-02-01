//
//  Chapter3_6.cpp
//  Study1
//
//  Created by 조해림 on 2/1/24.
//

#include <iostream>

int main()
{
    using namespace std;
    
    // logical NOT
//    bool x = true;
//    
//    cout << !x << endl;
//    
    // logical AND
    
//    bool x = true;
//    bool y = false;
//    
//    cout << (x && y) << endl;
    
    // logical OR
    
//    bool x = true;
//    bool y = false;
//    
//    cout << (x || y) << endl;
   
    // short circuit evaluation
//    int x = 2;
//    int y = 2;
//    
//    if(x == 1 && y++ == 2) // AND operator는 왼쪽이 false로 나오면 그냥 오른쪽 계산 안 하고 false로 처리
//    {
//        //do something
//    }
//    cout << y << endl;
    
//    bool x = true;
//    bool y = false;
//    
//    //De Morgan's LAW
//    !(x && y);
//    !x || !y;
    
    //XOR
    // false false false
    //false true true
    // true false true
    //true ture false
    
    cout << ((true && true) || false) << endl;
    cout << ((false && true) || true) << endl;
    cout << ((false && true)|| false || false) << endl;
    cout << ((14 > 13) || (2 > 1) && (9 > 1)) << endl;
    cout <<(!(2314123 > 2) || 123123 > 2387) << endl;
        
    
    
    
    return 0;
}
