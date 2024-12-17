#include <iostream>

#ifdef _WIN32
#include <windows.h>
#include <conio.h>

#endif
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
    std::string command;
    
    do{
      std::cout << '\n';
      std::cout << "Console Forge ";

      std::cout << " - Linux \n";

      std::cout << "-> ";

      std::getline(std::cin, command);
    }while(command != "exit");

    #elif __APPLE__
     std::cout << '\n';
     std::cout << "Console Forge ";

     std::cout << " - MackOS \n";

     std::cout << "-> ";

     std::getline(std::cin, command);
    #endif
    system("pause");
    return 0;
}