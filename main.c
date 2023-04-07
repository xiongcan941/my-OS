#include "monitor.h"
#include "gdt.h"
#include "interrupt.h"
#include "page.h"
char* welcome = " welcome to scroll kernel\n";

static void print_welcome() {
  monitor_print_with_color("#", COLOR_GREEN);
  monitor_printf(welcome);
}

int main() {
  init_gdt();
  monitor_clear();
  init_idt();
  register_interrupt_handler(14, page_fault_handler);
    
  int* ptr = (int*)0xD0000000;
  *ptr = 5;

  while (1) {}
}
