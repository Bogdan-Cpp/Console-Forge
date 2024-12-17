#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>

int main(){
    #ifdef _WIN32
    SetConsoleTitle("Console Forge");
    std::string command;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    
    do{
      std::cout << '\n';
      SetConsoleTextAttribute(h, 3);
      std::cout << "Console Forge ";

      SetConsoleTextAttribute(h, 6);
      std::cout << " - Windows \n";

      SetConsoleTextAttribute(h, 7);
      std::cout << "-> ";

      std::getline(std::cin, command);
    }while(command != "exit");
    
    #elif __linux__
    SetConsoleTitle("Console Forge");
    std::string command;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    
    do{
      std::cout << '\n';
      SetConsoleTextAttribute(h, 3);
      std::cout << "Console Forge ";

      SetConsoleTextAttribute(h, 6);
      std::cout << " - Linux \n";

      SetConsoleTextAttribute(h, 7);
      std::cout << "-> ";

      std::getline(std::cin, command);
    }while(command != "exit");
    
    #endif
    system("pause");
    return 0;
}