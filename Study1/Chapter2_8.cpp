//
//  Chapter2_8.cpp
//  Study1
//
//  Created by 조해림 on 1/28/24.
//

#include <iostream>

int main()
{
    using namespace std;
    
    
//    float pi = 3.14l; // literal - 글자를 적어서 표현하는 상수, symbolic constant
//    int i = (usigned int) 1234;
    
    // 0 1 2 3 4 5 6 7 8 9 10 - Decimal (10진수)
    // 0 1 2 3 4 5 6 7 10 11 12 13 - Octal (8진수)
    // 0 1 2 3 4 5 6 7 8 9 A B C D E F 10 - Hexa(16진수)
    
    // 0011 1010 1111
    // 3A7F
    
    int x = 0b1010'1111'1010; // 2진수 숫자 사이에 ' 넣으면 컴파일러는 그냥 무시 작업자는 읽기 편해짐
    //숫자 앞에 0 붙이면 8진수 / 실수 조심, 0xF 이런식은 16진수 표기 == 15
    cout << x << endl;
    
    const int price_per_item = 10;
    
    int num_items = 123;
    int price = num_items * price_per_item; // 매직넘버 사용X, 가급적 상수로
    
    return 0;
}
