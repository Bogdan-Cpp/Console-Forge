#include <iostream>

#if defined(_WIN32)
#include "main_windows.h"

#elif defined(__linux__)
#include "main_linux.h"

#elif defined(__apple__)
#include "main_makOS.h"

#endif
int main(){
  #ifdef _WIN32
  main_win();

  #elif __linux__
  main_lin();

  #elif __apple__
  main_mac();

  #endif
  return 0;
}