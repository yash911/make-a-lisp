#include <stdio.h>

static char input[2048];

int main(){
  puts("     __  __  ____  ____  ___  __  __");
  puts("     \\ \\/ / /  _/ / __/ / _ \\ \\ \\/ /");
  puts("      \\  / _/ /  _\\ \\  / ___/  \\  / ");
  puts("      /_/ /___/ /___/ /_/      /_/  ");
  puts("");
  puts("yispy Version 0.0.0.0.1");
  puts("Our friendly neighbourhood Lisp implementation");
  puts("Press Ctrl+c to Exit\n");

  while(1) {

    fputs("yispy> ", stdout);

    fgets(input, 2048, stdin);

    printf("Hello there, %s", input);
  }

  return 0;
}
