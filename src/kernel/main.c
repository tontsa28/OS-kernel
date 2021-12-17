#include "include/print.h"

void kernel_main() {

    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("Welcome to this 64-bit kernel!\n");
    print_str("This is version 1.0 of the kernel!");
    
}