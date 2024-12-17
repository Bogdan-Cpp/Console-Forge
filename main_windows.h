#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>

void main_win(){
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

    system("pause");
}
