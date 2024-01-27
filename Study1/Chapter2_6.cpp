//
//  Chapter2_6.cpp
//  Study1
//
//  Created by 조해림 on 1/26/24.
//

#include <iostream>

bool isEqual(int a, int b)
{
    bool result = (a == b);
    
    return result;
}


int main()
{
    using namespace std;
    
//    bool b1 = true; //copy initialization
//    bool b2(false); // direct initialization
//    bool b3{true}; //uniform initialization
//    b3 = false;
    
//    cout << std::noboolalpha;
//    cout << (true || true) << endl;
//    cout << (true || false) << endl;
//    cout << (false || true) << endl;
//    cout << (false || false) << endl;
    
//    if(3>1)
//    {
//        cout << "This is true" << endl;
//        cout << "True second Line" << endl;
//    }
//    else
//    {
//        cout << "This is false" << endl;
//    }
//    cout << std::boolalpha;
//    cout << isEqual(1, 1) << endl;
//    cout << isEqual(0, 3) << endl;
    
//   if(5) // if는 0이 아니면 true라고 생각함
//   {
//       cout << "True" << endl;
//   }
//   else
//   {
//       cout << "False" << endl;
//   }
    
//    bool b; //boolean은 0, 1만
//
//    cin >> b;
//    cout << std::boolalpha;
//    cout << "Your input: " << b << endl;
//    
    //과제(정수 하나 입력 받고 그 숫자가 홀수인지 짝수인지 출력하는 프로그램)
    int a(05);
    
    cout << "정수를 입력하시오: ";
    cin >> a;
    
    if(a%2==0)
    {
        cout << "짝수" << endl;
    }
    else
    {
        cout << "홀수" << endl;
    }
    
    return 0;
}
