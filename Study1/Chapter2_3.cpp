//
//  Chapter2_3.cpp
//  Study1
//
//  Created by 조해림 on 1/22/24.
//

#include <cstdint>

int main()
{
    using namespace std;
    
    std::int16_t i(5);
    std::int8_t myint = 65;
    
    
    
    std::int_fast8_t fi(5); //8비트 사이즈 중에 제일 빠른 데이터 타입
    std::int_least64_t fl(5); // 적어도 64비트
    
    return 0;
}
