#include "monitor.h"
char* welcome = " welcome to scroll kernel\n";

static void print_welcome() {
  monitor_print_with_color("#", COLOR_GREEN);
  monitor_printf(welcome);
}

int main() {
  print_welcome();
}
