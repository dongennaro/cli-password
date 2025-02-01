#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <ctime>
#include <algorithm>

std::string misc(std::string& input){
    std::string misc = input;
    std::random_device rd;
    std::mt19937 generator(rd());
    std::shuffle(misc.begin(), misc.end(), generator);
    return misc;
}

std::string generator(std::vector<std::string> keys, size_t size){
    std::string Password;

    for(std::string key:keys){
        Password += key;
    }

    for(char& ch : Password){
        switch(ch){
            case 'a' : ch='@'; break;
            case 'e' : ch='3'; break;
            case 'i' : ch='!'; break;
            case 'o' : ch='0'; break;
            case 's' : ch='$'; break;
            case 'l' : ch='1'; break;
        }
    }

    srand(std::time(nullptr));
    
    for(size_t i{}; i<2; ++i){  
        Password += rand() %100;
    }
    std::string password = misc(Password);

    return password;
}

