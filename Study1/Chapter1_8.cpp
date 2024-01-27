//
//  Chapter1_8.cpp
//  Study1
//
//  Created by 조해림 on 1/10/24.
//

#include<iostream>

using namespace std;

int main()
{
    int x = 2 ; // x is variable = 메모리 주소 , 2 is a literal / =는 대입연산자(Assignment)
    
    cout << -x << endl; // 단항연산자
    
    cout << x + 2 << endl; // 여기서 +가 연산자 / x와 2 같은 것들이 피연산자(Operand) / 이항 연산자
    
    int y = (x > 0) ? 1 : 2;   // 삼항연산자
    
    cout << y << endl;
    
    cout << "Hello World" <<endl;
    
    return 0;
}
