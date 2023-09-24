#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>


int main(int argc, char *argv[]) {
  setlocale(LC_ALL, "C.UTF-8");

  wprintf( L"こんにちは日本!\n");
  
  return EXIT_SUCCESS;
}
