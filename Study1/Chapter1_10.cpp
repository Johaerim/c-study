//
//  Chapter1_10.cpp
//  Study1
//
//  Created by 조해림 on 1/12/24.
//

#include <iostream>
//#include "MyHeaders/add.h" // 헤더파일, 아니 비주얼스튜디오에선 되던데 여긴 안되냐 시벌거
#include "add.h" //클래스를 시작하면 헤더로 쪼개게됨

using namespace std;

 //forward declaration(선언)
int multiply(int a , int b);
int subtract(int a, int b);

int main()
{
    cout << add(1,2) << endl;
    cout << subtract(1, 2) << endl;
    
    return 0;
}


//definition(정의)
int add(int a , int b)
{
    return a+b;
    
}

int multiply(int a , int b)
{
    return a*b;
}

int subtract(int a, int b)
{
    return a-b;
}



