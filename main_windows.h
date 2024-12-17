#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
#include <vector>
#include <cstdlib>

void main_win(){
    SetConsoleTitle("Console Forge");
    std::string command;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    std::vector<std::string> srh1 = { "g", "g ", "gl", "gl ", "gog", "gog ", "google", "google ", "google search", "google search "};
    std::vector<std::string> srh2 = { "gp", "gp ", "gop", "gop ", "google photo", "google photo "};
    std::vector<std::string> srh3 = { "yts", "yts ", "youtube search", "youtube search " };
    std::vector<std::string> gogOption = {"Google Docs", "Google Sheets", "Google Slides", "Search on Google",
                                       "YouTube", "Google Gemini", "Google Email", "Google Meet", "Google Drive", "Exit"};
    bool isGogSearch = false;
    bool isGogPhoto = false;
    bool isYt = false;
    int selectie = 0;
    bool isSelected = false;

    do {
      std::cout << '\n';
      SetConsoleTextAttribute(h, 3);
      std::cout << "Console Forge ";

      SetConsoleTextAttribute(h, 6);
      std::cout << " - Windows \n";

      SetConsoleTextAttribute(h, 8);
      std::cout << "-> ";

      SetConsoleTextAttribute(h, 7);
      std::getline(std::cin, command);

      //command function
        if (command.length() >= 1) {
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

            for (int q = 0; q < srh1.size(); q++) {
                if (cm == srh1[q]) {
                    isGogSearch = true;
                }
            }

            for (int w = 0; w < srh2.size(); w++) {
                if (cm == srh2[w]) {
                    isGogPhoto = true;
                }
            }

            for (int e = 0; e < srh3.size(); e++) {
                if (cm == srh3[e]) {
                    isYt = true;
                }
            }

            if (isGogSearch) {
                std::wstring url10 = L"https://www.google.com/search?q=";
                url10 += std::wstring(input.begin(), input.end());

                ShellExecuteW(0, L"open", url10.c_str(), NULL, NULL, SW_SHOW);
            }

            else if (isGogPhoto) {
                std::wstring url12 = L"https://www.google.com/search?q=";
                url12 += std::wstring(input.begin(), input.end());
                url12 += L"&tbm=isch";

                ShellExecuteW(0, L"open", url12.c_str(), NULL, NULL, SW_SHOW);
            }

            else if (isYt) {
                std::wstring url11 = L"https://www.youtube.com/results?search_query=";
                url11 += std::wstring(input.begin(), input.end());

                ShellExecuteW(0, L"open", url11.c_str(), NULL, NULL, SW_SHOW);
           }
           //descarcare video yt
            else if(command == "dyt"){
                std::cout << "Function in working....\n" ;
            }
            //yt
            else if (command == "yt" || command == "youtube") {ShellExecute(0, "open", "https://www.youtube.com", NULL, NULL, SW_SHOW);}

            //google suite
            else if (command == "mail" || command == "gmail") {ShellExecute(0, "open", "https://mail.google.com/mail/u/0/#inbox", NULL, NULL, SW_SHOW);}
            else if (command == "mp") {ShellExecute(0, "open", "https://www.google.com/maps/", NULL, NULL, SW_SHOW);}
            else if (command == "gem" || command == "gemini" || command == "gm") {ShellExecute(0, "open", "https://gemini.google.com/", NULL, NULL, SW_SHOW);}
            else if (command == "d" || command == "dr" || command == "drive" || command == "drv") {ShellExecute(0, "open", "https://drive.google.com/drive/home", NULL, NULL, SW_SHOW);}
            else if (command == "tr" || command == "trans" || command == "translate") {ShellExecute(0, "open", "https://translate.google.com/", NULL, NULL, SW_SHOW);}

            //google office
            else if (command == "docs" || command == "gd") {ShellExecute(0, "open", "https://docs.google.com/", NULL, NULL, SW_SHOW);}
            else if (command == "sh" || command == "sheets") {ShellExecute(0, "open", "https://docs.google.com/", NULL, NULL, SW_SHOW);}
            else if (command == "pt" || command == "presentation") {ShellExecute(0, "open", "https://docs.google.com/", NULL, NULL, SW_SHOW);}

            //others
            else if (command == "ws" || command == "whatsapp") {ShellExecute(0, "open", "https://web.whatsapp.com/", NULL, NULL, SW_SHOW);}
            else if (command == "nt" || command == "notion" || command == "not") {ShellExecute(0, "open", "https://www.notion.so/", NULL, NULL, SW_SHOW);}
            else if (command == "gh" || command == "github") {ShellExecute(0, "open", "https://github.com/", NULL, NULL, SW_SHOW);}
            else if (command == "lt" || command == "leetcode") {ShellExecute(0, "open", "https://leetcode.com/", NULL, NULL, SW_SHOW);}
            else if (command == "ai" || command == "chatgpt") {ShellExecute(0, "open", "https://www.chatgpt.com", NULL, NULL, SW_SHOW);}

            else {
                std::cout << "'" << command << "'";
                SetConsoleTextAttribute(h, 8);
                std::cout << " is not a Console Forge command";
                SetConsoleTextAttribute(h, 7);
                std::cout << std::endl;
            }
       }
    } while(command != "exit");
}