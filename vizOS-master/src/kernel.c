// --- FELTIX KERNEL ---

#include <vga.h>
#include <banner.h>
#include <shell.h>
#include <panic.h>

// Kernel main function
void kernel_main() {

    // Clear the screen
    clear_screen();

    // Print white ASCII art banner
    print_banner_white();

    // Print credits
    print_string("\n    By ", VGA_COLOR_WHITE);
    print_string("viztini", VGA_COLOR_LIGHT_GREY);

    // Print welcome message
    print_string("\n\n Welcome to ", VGA_COLOR_WHITE);
    print_string("vizOS!\n", VGA_COLOR_LIGHT_GREEN);

    print_string(" Type ", VGA_COLOR_WHITE);
    print_string("help", VGA_COLOR_CYAN);
    print_string(" for a list of commands!\n\n", VGA_COLOR_WHITE);

    // Hand off control to the shell
    shell_start("vizOS> ", VGA_COLOR_LIGHT_GREEN);

    // Trigger a kernel panic when there's nothing to do
    kernel_panic("KernelHasReturned");
}

