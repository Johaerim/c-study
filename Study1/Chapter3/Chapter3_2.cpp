//
//  Chapter3_2.cpp
//  Study1
//
//  Created by 조해림 on 1/30/24.
//

#include <iostream>

int main()
{
    using namespace std;
    
    int x = 7;
    int y = 4;
   
    
//    cout << x / y <<  endl;  // 1
//    cout << float(x) / y << endl; // 1.75
//    cout << x / float(y) << endl; // 1.75
//    cout << float(x) / float (y) << endl; //1.75
    
//    cout << -5 % 2 << endl; // 나머지 연산은 왼쪽 숫자가 음수면 나머지도 음수, 양수면 나머지도 양수로 규정
    
    
    int z = x; // =는 대입연산자, x연산자의 메모리를 z연산자에 넣는 것
    z += y; // z = z + y
     
    
    return 0;
}
