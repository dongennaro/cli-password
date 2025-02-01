#include <iostream>
#include "prg_hdrs/genr.h"
#include <string>
#include <vector>

int main(){
    std::cout<<"##################################"<<std::endl;
    std::cout<<"#                                #"<<std::endl;
    std::cout<<"#          CLI_PASSWORD          #"<<std::endl;
    std::cout<<"#                                #"<<std::endl;
    std::cout<<"##################################"<<std::endl;
    std::cout<<std::endl<<std::endl;

    std::vector<std::string> keys_passWrd;
    size_t size = sizeof(keys_passWrd)/sizeof(keys_passWrd[0]);
    std::cout<<"insert your keys for the password (max 5), you can exit entering q or cancel the operation with !q: \n";
    std::string temp;
    size_t i{};
    do{
        std::getline(std::cin,temp);
        if(temp == "!q" || temp == " !q" || temp == "!q " || temp == " !q "){
            std::cout<< "bye, :("<< std::endl;
            return 0;
        }else if(temp == "q"){
            break;
        }
         else {
            keys_passWrd.push_back(temp);
        }
        ++i;
    }while(i < 5);

    std::string defPassword = generator(keys_passWrd, size);
    std::endl(std::cout);
    std::cout<< "your password is: "<<defPassword<< " thank me later :)"<<std::endl;




    return 0;
}
