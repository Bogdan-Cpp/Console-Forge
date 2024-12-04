#include <iostream>
#include <windows.h>
#include <string>
#include "GoogleSeartch.h"
#include "yt.h";


int main() {
    SetConsoleTitle(L"Console Forge");
    std::string command;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    std::cout << "\n";

    do {
        SetConsoleTextAttribute(h, 3);
        std::cout << "Console Forge ";

        SetConsoleTextAttribute(h, 6);
        std::cout << "- 1.1v \n";

        SetConsoleTextAttribute(h, 7);
        std::cout << "-> ";

        std::getline(std::cin, command);
        if (command.length() > 5) {
            std::string cm = "";
            std::string input = "";
            bool isInput = false;
            for (char x : command) {
                if (x == '-') {
                    isInput = true;
                    continue;
                }
                if (isInput) {
                    input += x;
                }
                else {
                    cm += x;
                }
            }
            
            if (cm == "g" || cm == "google" || cm == "gos" || cm == "gs") {
                std::wstring url10 = L"https://www.google.com/search?q=";
                url10 += std::wstring(input.begin(), input.end());

                ShellExecute(0, L"open", url10.c_str(), NULL, NULL, SW_SHOW);
            }
        }

        if (command == "?") {
            std::string search;
            std::string search2;
            SetConsoleTextAttribute(h, 8);
            std::cout << "-> ";
            SetConsoleTextAttribute(h, 8);
            std::getline(std::cin, search);
            SetConsoleTextAttribute(h, 7);
            std::cout << "-> ?";
            SetConsoleTextAttribute(h, 7);
            std::getline(std::cin, search2);
          
            if (search2 == "yt") {
                std::wstring url = L"https://www.youtube.com/results?search_query=";
                url += std::wstring(search.begin(), search.end());

                ShellExecute(0, L"open", url.c_str(), NULL, NULL, SW_SHOW);
            }

            else if (search2 == "g" || search2 == "google") {
                std::string word = "";

                for (int i = 0; i < search.length(); i++) {
                    if (search[i] == ' ') {
                        word += "+";
                    }
                    else {
                        word += search[i];
                    }
                }
                std::wstring url = L"https://www.google.com/search?q=";
                url += std::wstring(word.begin(), word.end());

                ShellExecute(0, L"open", url.c_str(), NULL, NULL, SW_SHOW);
            }
            else {
                std::cout << "'" << search2 << "'";
                SetConsoleTextAttribute(h, 8);
                std::cout << " is not a Console Forge command";
                SetConsoleTextAttribute(h, 7);
                std::cout << std::endl;
            }
        }
        else if (command == "yt" || command == "youtube") {
            ShellExecute(0, L"open", L"https://www.youtube.com", NULL, NULL, SW_SHOW);
        }

        else if (command == "ai" || command == "chatgpt") {
            ShellExecute(0, L"open", L"https://www.chatgpt.com", NULL, NULL, SW_SHOW);
        }

        else if (command == "mail" || command == "gmail") {
            ShellExecute(0, L"open", L"https://mail.google.com/mail/u/0/#inbox", NULL, NULL, SW_SHOW);
        }

        else if (command == "ws" || command == "whatsapp") {
            ShellExecute(0, L"open", L"https://web.whatsapp.com/", NULL, NULL, SW_SHOW);
        }

        else if (command == "gh" || command == "github") {
            ShellExecute(0, L"open", L"https://github.com/", NULL, NULL, SW_SHOW);
        }

        else if (command == "lt" || command == "leetcode") {
            ShellExecute(0, L"open", L"https://leetcode.com/", NULL, NULL, SW_SHOW);
        }
        //goggle
        else if (command == "gos" || command == "search on google" || command == "?g") {
            Google srch;
            srch.Seartch();
        }
        else if (command == "gop" || command == "search photo on google" || command == "?gp") {
            Google srchp;
            srchp.pozeSearch();
        }
        //yt
        else if (command == "ytm" || command == "search on youtube" || command == "?y") {
            yt yt1;
            yt1.searchYt();
        }
        else {
            std::cout << "'" << command << "'";
            SetConsoleTextAttribute(h, 8);
            std::cout << " is not a Console Forge command";
            SetConsoleTextAttribute(h, 7);
            std::cout << std::endl;
        }
        std::cout << std::endl;  
    } while(command != "exit");

    system("pause");
    return 0;
}