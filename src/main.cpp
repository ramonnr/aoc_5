#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include "boarding.h"


auto max_id(const std::string& file_path) {

    std::fstream ifs(file_path);
    std::string line;
    auto maxid = 0;
    while(std::getline(ifs, line)){
        auto id = boarding::id(line);
        if( id > maxid) { maxid = id; }
    }

    return maxid;

}

auto missing_seat(const std::string& file_path){
    
    std::vector<int> seats;

    std::fstream ifs(file_path);
    std::string line;
    while(std::getline(ifs, line)){
        seats.push_back(boarding::id(line));
    }

    std::sort(seats.begin(), seats.end());
   
    for(auto i = 1; i < seats.size() -1; i++){
        if(seats[i] != seats[i -1] + 1){
            return seats[i] - 1;
        }
    }

    return -1;
}

int main(int argc, char** argv){
    
    if(argc != 2){
        std::cout << "expexted path to input as arg" << std::endl;
    }

    std::cout << "max          -> " << max_id(argv[1]) << std::endl;
    std::cout << "missing seat -> " << missing_seat(argv[1]) << std::endl;
}
