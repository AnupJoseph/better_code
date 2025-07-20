#include <getopt.h>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int opt;
  while ((opt = getopt(argc, argv, "clwm")) != -1) {
    switch (opt) {
    case 'l':
      std::cout << "Option l selected\n";
      break;
    case 'c':
      std::cout << "Option c selected with value";
      break;
    case 'w':
      std::cout << "Option w selected\n";
      break;
    case 'm':
      std::cout << "Option m selected\n";
      break;
    case '?':
      printf("unknown option : %c\n", optopt);
      break;
    }
  }
  for (; optind < argc; optind++) {
    printf("extra arguments: %s\n", argv[optind]);
  }
  return 0;
}
