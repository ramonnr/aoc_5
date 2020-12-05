#pragma once

#include <vector>
#include <string>
#include <stdint.h>
#include <iostream>
namespace boarding{


auto row(const std::string& seating) -> int {
    
    constexpr auto row_letters = 7;
    auto hi = 127;
    auto lo = 0;
    auto mid = 0;
    for( auto i = 0; i < row_letters; i++ ){
        mid = (lo + hi) / 2;
        if (seating[i] == "F"[0]){
            hi = mid;
        }
        else{
            lo = mid + 1; 
        }
    }

    return seating[6] == "F"[0] ? lo : hi;

}

auto col(const std::string& seating) -> int {
    
    std::string coldir = seating.substr(7,10);
    
    auto hi = 7;
    auto lo = 0;
    auto mid = 0;

    for(auto c : coldir){
        mid = (lo + hi) / 2;
        if( c == "L"[0]){
            hi = mid;
        }
        else{
            lo = mid + 1;
        }
    }

    return seating[9] == "L"[0] ? lo : hi;

}

auto id(const std::string& seating) -> int {
    auto rowval = 8 * row(seating);
    auto colval = col(seating);
    return rowval + colval;
}

}
