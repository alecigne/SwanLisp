#include <stdio.h>

static char input[2048];

int main(int argc, char** argv) {
  puts("Lisp v0.0.1");
  puts("Press Ctrl+C to exit\n");
  while (1) {
    fputs("lispy> ", stdout);
    fgets(input, 2048, stdin);
    printf("No, you're a %s", input);
  }
}
