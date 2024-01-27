//
//  chapter2_5.cpp
//  Study1
//
//  Created by 조해림 on 1/25/24.
//

#include <iostream>
#include <iomanip> // 입출력을 manipulator가 조작한다는 의미
#include <limits>
#include <cmath>

int main()
{
    using namespace std;
    
//    float f(3.141592f);
    
//    cout << 3.14 <<endl;
//    cout << 31.4e-1 << endl; //31.4 * 10^-1 = 3.14
//    cout << 31.4e1 << endl;
//    cout << 31.4e2 << endl;
//    cout << 31.4e-2 << endl;
    
//    double d(3.141592);
//    long double ld(3.141592);
    
//    cout << numeric_limits<float>::lowest() << endl;
//    cout << numeric_limits<double>::lowest() << endl;
//    cout << numeric_limits<long double>::lowest() << endl;
    
//    double d1(0.1); // 10 significant digits
//    double d2(0.1+0.1+0.1+0.1+0.1+0.1+0.1+ 0.1+0.1);
//    
//    cout << setprecision(17);
//
//    cout << d1 << endl;
//    cout << d2 << endl;
    
    double zero = 0.0;
    double posinf = 5.0 /zero;
    double neginf = -5.0 / zero;
    double nan = zero / zero;
    
    cout << posinf << " " <<std::isinf(posinf) << endl;
    cout << neginf << " " <<std::isinf(neginf) << endl;
    cout << nan << " " << std::isnan(nan) <<endl;
    
    cout << 1.0 << " " << std::isnan(1.0) <<endl;
    
    
    
    //과제
    
//    cout << 3.141592e3 << endl;
//    cout << 31.41e1 << endl;
//    cout << 0.001000e4 << endl;
//    cout << 123.0002e3 <<endl;
//    cout << 0.0000000001e-6 << endl;
//    cout << 234560000.000e-4 << endl;
    
    
    
    return 0;
}
