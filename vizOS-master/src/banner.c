// Basic ASCII art banner display control

#include <banner.h>

#include <vga.h>

// Banner lines definitions
// Default banner generated with: https://www.asciiart.eu/text-to-ascii-art
const char* banner_line_1 = "         _      ___  ____         \n";
const char* banner_line_2 = "  __   _(_)____/ _ \/ ___|        \n";
const char* banner_line_3 = "  \ \ / / |_  / | | \___ \        \n";
const char* banner_line_4 = "   \ V /| |/ /| |_| |___) |       \n";
const char* banner_line_5 = "    \_/ |_/___|\___/|____/        \n";


// Print all-white banner
void print_banner_white(void) {
    print_string(banner_line_1, VGA_COLOR_WHITE);
    print_string(banner_line_2, VGA_COLOR_WHITE);
    print_string(banner_line_3, VGA_COLOR_WHITE);
    print_string(banner_line_4, VGA_COLOR_WHITE);
    print_string(banner_line_5, VGA_COLOR_WHITE);
}

// Print rainbow banner
void print_banner_rainbow(void) {
    print_string(banner_line_1, VGA_COLOR_RED);
    print_string(banner_line_2, VGA_COLOR_LIGHT_RED);
    print_string(banner_line_3, VGA_COLOR_GREEN);
    print_string(banner_line_4, VGA_COLOR_BLUE);
    print_string(banner_line_5, VGA_COLOR_MAGENTA);
}


/* Please feel free to request other options or color patterns

