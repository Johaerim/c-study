//
//  Chapter2_2.cpp
//  Study1
//
//  Created by 조해림 on 1/21/24.
//

#include <iostream>
#include <cmath>
#include <limits>

int main()
{
    using namespace std;
    
    unsigned short s = 1; // 2 bytes = 2 * 8 bits = 16 bits
    //signed, unsigned 둘 다 연습 해보기
    
    
//    cout << std::pow(2, sizeof(short) * 8 - 1 ) -  1 << endl; // 괄호 안 -1은 +냐 -냐를 판단하는 비트를 빼준 것이고
//    // 괄호 밖 -1은 0 표현하는 부분을 빼준 것.
//    cout << std:: numeric_limits<short>::max() << endl;
//    cout << std:: numeric_limits<short>::min() << endl;
//    cout << std:: numeric_limits<short>::lowest() << endl;
    
    s = std:: numeric_limits<short>::max();
    cout << "max() " << s << endl;
    
    s = s + 1;
    
    cout << " "<< s << endl; // overflow
    
    //최대값에서 +1을 하면 최소값이 나오고, 최소값에서 -1을 하면 최대값이 나옴
    
    //int i = 22 / 4;
    
    cout << (float)22 / 4 << endl;
    
    return 0 ;
    
    
    
}
