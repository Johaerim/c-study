//
//  Chapter2_1.cpp
//  Study1
//
//  Created by 조해림 on 1/21/24.
//

#include <iostream>

int main()
{
    using namespace std;
    
    bool bValue = true;
    char chValue = 'A';
    float fValue = 3.14567234f; //float는 뒤에 f 붙여줘야함.
    double dValue = 3.14556788;
    
    auto aValue = 3.145567;
    auto aValue2 = 3.145567f;
    
    int i = (int)3.14566; // copy initialization
    int a(123); // direct initialization
    int b{123}; // uniform initialization
    
    int k = 0, l = 456, m = 123; // 같은 데이터 타입만 ',' 쓸 수 있음.
    //각자 초기화 int = k, l, m = 123; -> 이런식 X
    
    // 변수는 사용 직전에 선언이 좋음 / 디버깅이 편해지기 때문, 리팩토링이 편해짐
    
    
//    cout << sizeof(float) << endl;
//    cout << sizeof(fValue) << endl;
    
    //cout << (bValue ? 1: 0)<< endl;
    
    return 0;
}
