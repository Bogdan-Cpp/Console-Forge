#include <iostream>

void main_lin(){
    std::string command;
    
    do{
      std::cout << '\n';
      std::cout << "Console Forge ";

      std::cout << " - Linux \n";

      std::cout << "-> ";

      std::getline(std::cin, command);
    }while(command != "exit");
}