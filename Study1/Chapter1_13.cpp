//
//  Chapter1_13.cpp
//  Study1
//
//  Created by 조해림 on 1/18/24.
//

#include <iostream>

namespace MySpace1
{

  namespace InnerSpace
{
int my_function()
{
    return 0;
}
}
int doSomething(int a, int b)
{
    return a+b;
}

}

namespace MySpace2
{
   int doSomething(int a, int b)
   {
    return a * b;
   }
}





using namespace std;

int main()
{
    using namespace MySpace1::InnerSpace;
    
    my_function();
//    cout << MySpacce1:: doSomething(3, 4) << endl;
//    cout << doSomething(3,4) <<endl;
    
    return 0;
}
