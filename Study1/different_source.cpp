//
//  different_source.cpp
//  Study1
//
//  Created by 조해림 on 1/20/24.
//

#include <iostream>




#define LIKE_APPLE

void doSomthing()
{
    using namespace std;
    
#ifdef LIKE_APLLE
    cout << "Apple" << endl;
#else
    cout << "Orage" << endl;
#endif
}
