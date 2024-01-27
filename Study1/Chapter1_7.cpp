//
//  Chapter1_7.cpp
//  Study1
//
//  Created by 조해림 on 1/10/24.
//

//지역범위

// 지역변수는 영역을 벗어나면 사용할 수 없게 됨. 지역변수가 차지하고 있던 메모리는 그 지역변수가 영역을 벗어날 때
// 스택메모리로 반납됨. 반납된 메모리는 다음 지역변수가 사용할 수 있도록 대기.
#include<iostream>

using namespace std;

//int main()
//{
//   int x(0); // int x = 0; 이라는 뜻
//    cout << x << " " << &x << endl; // &는 데이터의 주소를 나타낼 때 씀.
//   
//
//    
//    {
//        x = 1; //위의 x와 다른 범위
//        cout << x << " " << &x << endl;
//       
//    }
//    
//    cout << x << " " << &x << endl;
//    
//    {
//        int x = 2;
//    }
//    
//    
//    return 0;
//}

void doSomething(int x)
{
    x = 123;
    cout << x << endl;
}

int main()
{
    int x(0);
    
    doSomething(x);
    
    cout << x << endl;
    
    cout << x << endl;
    
    return 0;
}
