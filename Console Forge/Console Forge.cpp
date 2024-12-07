#include <iostream>
#include <windows.h>
#include <string>
#include "GoogleSeartch.h"
#include "yt.h";
#include <vector>
#include <conio.h>

int main() {
    SetConsoleTitle(L"Console Forge");
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
    std::cout << "\n";

    do {
        SetConsoleTextAttribute(h, 3);
        std::cout << "Console Forge ";

        SetConsoleTextAttribute(h, 6);
        std::cout << "- 1.1v \n";

        SetConsoleTextAttribute(h, 7);
        std::cout << "-> ";

        std::getline(std::cin, command);
        //one line mode
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

                ShellExecute(0, L"open", url10.c_str(), NULL, NULL, SW_SHOW);
            }
            else if (isGogPhoto) {
                std::wstring url12 = L"https://www.google.com/search?q=";
                url12 += std::wstring(input.begin(), input.end());
                url12 += L"&tbm=isch";

                ShellExecute(0, L"open", url12.c_str(), NULL, NULL, SW_SHOW);
            }
            else if (isYt) {
                std::wstring url11 = L"https://www.youtube.com/results?search_query=";
                url11 += std::wstring(input.begin(), input.end());

                ShellExecute(0, L"open", url11.c_str(), NULL, NULL, SW_SHOW);
            }
            //yt
            else if (command == "yt" || command == "youtube") {
                ShellExecute(0, L"open", L"https://www.youtube.com", NULL, NULL, SW_SHOW);
            }

            //google suite
            else if (command == "mail" || command == "gmail") {
                ShellExecute(0, L"open", L"https://mail.google.com/mail/u/0/#inbox", NULL, NULL, SW_SHOW);
            }
            else if (command == "mp") {
                ShellExecute(0, L"open", L"https://www.google.com/maps/", NULL, NULL, SW_SHOW);
            }
            else if (command == "gem" || command == "gemini" || command == "gm") {
                ShellExecute(0, L"open", L"https://gemini.google.com/", NULL, NULL, SW_SHOW);
            }
            else if (command == "d" || command == "dr" || command == "drive" || command == "drv") {
                ShellExecute(0, L"open", L"https://drive.google.com/drive/home", NULL, NULL, SW_SHOW);
            }
            else if (command == "tr" || command == "trans" || command == "translate") {
                ShellExecute(0, L"open", L"https://translate.google.com/", NULL, NULL, SW_SHOW);
            }
            //google office
            else if (command == "docs" || command == "gd") {
                ShellExecute(0, L"open", L"https://docs.google.com/", NULL, NULL, SW_SHOW);
            }
            else if (command == "sh" || command == "sheets") {
                ShellExecute(0, L"open", L"https://docs.google.com/", NULL, NULL, SW_SHOW);
            }
            else if (command == "pt" || command == "presentation") {
                ShellExecute(0, L"open", L"https://docs.google.com/", NULL, NULL, SW_SHOW);
            }
            //others
            else if (command == "ws" || command == "whatsapp") {
                ShellExecute(0, L"open", L"https://web.whatsapp.com/", NULL, NULL, SW_SHOW);
            }
            else if (command == "nt" || command == "notion" || command == "not") {
                ShellExecute(0, L"open", L"https://www.notion.so/", NULL, NULL, SW_SHOW);
            }
            else if (command == "gh" || command == "github") {
                ShellExecute(0, L"open", L"https://github.com/", NULL, NULL, SW_SHOW);
            }

            else if (command == "lt" || command == "leetcode") {
                ShellExecute(0, L"open", L"https://leetcode.com/", NULL, NULL, SW_SHOW);
            }

            else if (command == "ai" || command == "chatgpt") {
                ShellExecute(0, L"open", L"https://www.chatgpt.com", NULL, NULL, SW_SHOW);
            }
            //mod2
            else if (command == "cgos") {
                Google gog;
                gog.Seartch();
            }
            else if (command == "cgop") {
                Google gog2;
                gog2.pozeSearch();
            }
            else if (command == "cyts") {
                yt youtube;
                youtube.searchYt();
            }
            //meniu
            else if (command == "gmeniu") {
                isSelected = true;
                while (isSelected) {
                    system("cls");
                    SetConsoleTextAttribute(h, 3);
                    std::cout << "Console Forge ";

                    SetConsoleTextAttribute(h, 6);
                    std::cout << "- 1.1v \n";
                    std::cout << "\n";

                    SetConsoleTextAttribute(h, 16);
                    std::cout << "Google meniu selection" << "\n";
                    SetConsoleTextAttribute(h, 7);

                    for (int r = 0; r < gogOption.size(); r++) {
                        if (r == selectie) {
                            SetConsoleTextAttribute(h, 94);
                            std::cout << "->" << gogOption[r] << "\n";
                            SetConsoleTextAttribute(h, 7);
                        }
                        else {
                            std::cout << " " << gogOption[r] << "\n";
                        }
                    }
                    int tasta = _getch();

                    switch (tasta) {
                       case 72:
                           selectie = (selectie - 1 + gogOption.size()) % gogOption.size();
                           break;
                       case 80:
                           selectie = (selectie + 1) % gogOption.size();
                           break;
                       case 13:
                           if (gogOption[selectie] == "Google Docs") {
                               ShellExecute(0, L"open", L"https://docs.google.com/", NULL, NULL, SW_SHOW);
                               break;
                           }
                           else if (gogOption[selectie] == "Exit") {
                               isSelected = false;
                           }
                           else if (gogOption[selectie] == "Google Sheets") {
                               ShellExecute(0, L"open", L"https://docs.google.com/", NULL, NULL, SW_SHOW);
                           }
                           else if (gogOption[selectie] == "Google Slides") {
                               ShellExecute(0, L"open", L"https://docs.google.com/", NULL, NULL, SW_SHOW);
                           }
                           else if (gogOption[selectie] == "YouTube") {
                               ShellExecute(0, L"open", L"https://www.youtube.com", NULL, NULL, SW_SHOW);
                           }
                           else if (gogOption[selectie] == "Google Gemini") {
                               ShellExecute(0, L"open", L"https://gemini.google.com/", NULL, NULL, SW_SHOW);
                           }
                    }
                }
            }
            else {
                std::cout << "'" << command << "'";
                SetConsoleTextAttribute(h, 8);
                std::cout << " is not a Console Forge command";
                SetConsoleTextAttribute(h, 7);
                std::cout << std::endl;
            }
        }
        std::cout << std::endl;
    } while (command != "exit");

    system("pause");
    return 0;
}