#include "pathfinder.h"

void invalid_num() {
    mx_printerr("error: invalid number of islands\n");
    exit(errno);
}

void check_num(char *str, int line) {
    for (int i = 0; str[i]; i++) {
        if (!mx_isdigit(str[i])) {
            mx_printerr("error: line ");
            mx_printerr(mx_itoa(line));
            mx_printerr(" is not valid\n");
            exit(errno);
        }
    }
}
