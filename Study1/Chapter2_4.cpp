//
//  Chapter2_4.cpp
//  Study1
//
//  Created by 조해림 on 1/25/24.
//

#include <iostream>

void my_function(void)
{
    
}

int main()
{
    int i = 123;
    float f = 123.456f;
    
    void *my_void;
    
    my_void = (void*)&i;
    my_void = (void*)&f;
    
    return 0;
}
