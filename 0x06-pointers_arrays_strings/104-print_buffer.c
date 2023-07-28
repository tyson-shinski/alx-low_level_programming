#include <stdio.h>
#include <ctype.h>

void print_buffer(char *b, int size) {
    if (size <= 0) {
        printf("\n");
        return;
    }

    int i, j;
    for (i = 0; i < size; i += 10) {
        // Print the address in hexadecimal
        printf("%08x: ", i);

        // Print the hexadecimal content and character representation
        for (j = 0; j < 10; j++) {
            if (i + j < size) {
                unsigned char current_byte = b[i + j];
                printf("%02x", current_byte);
            } else {
                printf("  "); // Print two spaces if there's no more content
            }

            // Separate each byte pair with a space
            if (j % 2 != 0) {
                printf(" ");
            }
        }

        // Print the characters representation
        for (j = 0; j < 10; j++) {
            if (i + j < size) {
                unsigned char current_byte = b[i + j];
                printf("%c", isprint(current_byte) ? current_byte : '.');
            } else {
                printf(" "); // Print a space if there's no more content
            }
        }

        printf("\n");
    }
}
