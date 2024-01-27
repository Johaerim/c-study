//
//  Chapter1_5.cpp
//  Study1
//
//  Created by 조해림 on 12/26/23.
//

#include <iostream> // iostream : c++에 있는 입출력을 위한 헤더 파일

using namespace std;

//int multiplyTwoNumbers(int num_a, int num_b) // int num_a,_b -> 매개변수(Parameter)
//{
//    int sum = num_a * num_b;
//    
//    return sum;
//}

//int main()
//{
//    cout << multiplyTwoNumbers(1,2) << endl; // 1,2 -> 인수(Argument)
//    cout << multiplyTwoNumbers(3,4) << endl;
//    cout << multiplyTwoNumbers(8,13) << endl;
//    
//    return 0;
//}

//void printHelloWorld() //void를 쓰는 경우는 리턴해줄 값이 없는 경우에 씀
//{
//    cout << "Hello World" << endl;
//    
//    return;
//    
//
//}

//void addTwoNumbers(int a, int b)
//{
////    return a+b;
//}
//
//
//int main()
//{
////    int sum = addTwoNumbers(1, 2);
//    addTwoNumbers(1, 2);
//    
//    return 0;
//}


// 함수가 함수를 부르는 예제


//void addTwoNumbers(int a, int b)
//{
////    void print()
////    {
////        cout << "Hello" << endl;    --> 함수 안에서 함수 선언 X
////    }
//    
////    return a+b;
//    
//    
//}
//
//
//int main()
//{
////    int sum = addTwoNumbers(1, 2);
//    addTwoNumbers(1, 2);
//
//   return 0;
//}


// 숫자 두 개를 입력 받아서 더하기를 출력하는 프로그램,
// 그 프로그램을 함수 두개로 쪼개서 사용자로부터 여러번 입력받고 여러번 더하기를 출력하는 프로그램 예제

int addTwoNumbers(int num_a, int num_b)
{
    int sum = num_a + num_b;
    
    return sum;
}


int main()
{
    
    int num_a, num_b;
    
    cin >> num_a;
    
    cout << "숫자 1: " << num_a << endl;
    
    cin >> num_b;
    
    cout << "숫자 2: " << num_b << endl;
    
    
    
    cout << addTwoNumbers(num_a, num_b) << endl;
    
    return 0;
}
