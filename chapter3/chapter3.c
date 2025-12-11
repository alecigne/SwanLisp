#include <stdio.h>

struct point {
  int x;
  int y;
};

int add_together(int x, int y) {
  return x + y;
}

int main(int argc, char** argv) {
  struct point p;
  p.x = 2;
  p.y = 3;
  int addition = add_together(p.x, p.y);
  if (addition > 0 && addition < 10) {
    int i = 0;
    while (i < 3) {
      puts("Result is greater than 0 and less than 10.");
      i++;
    }
  } else {
    for (int i = 0; i < 3; i++) {
      puts("Result is less than 1 or greater than 9.");
    }
  }
}
