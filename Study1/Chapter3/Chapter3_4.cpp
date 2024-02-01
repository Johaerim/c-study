//
//  Chapter3_4.cpp
//  Study1
//
//  Created by 조해림 on 1/30/24.
//

#include <iostream>

int main()
{
    using namespace std;
    
   // 쉼표 연산자(comma operator)
    
//    int x = 3;
//    int y = 10;
//    //int z = (++x, ++y);
//    
//    ++x;
//    ++y;
//    int z = y;
//
//    cout << x << " "<< y << " " << z << endl;
    
    
    int a =1, b = 10;
    int z;
    
   // z = a, b; //연산자의 우선순위에서 =(대입연산자)가 ,(comma operator)보다 먼저
//    
    z = (++a, a+b);
    
    cout << z << endl;
    
    
    //조건부 연산자(conditional operator) (arithmetric if), 삼항연산자
    
    bool onSale = true;
    
    const int price = (onSale == true)? 10 : 100;
    
    // if문은 const 사용 X
//    if(onSale)
//    {
//        price = 10;
//    }
//    else
//    {
//        price = 100;
//    }
    cout << price << endl;
    
    
    
    
    
    return 0;
}
