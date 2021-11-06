#include "pathfinder.h"

void valid_line(int line, char *num, char *first_isle, char *second_isle) {
    bool invalid = false;

    check_num(num, line);

    for (int i = 0; first_isle[i]; i++) {
        if (!mx_isalpha(first_isle[i])) {
            invalid = true;
            break;
        }
    }

    for (int i = 0; second_isle[i]; i++) {
        if (!mx_isalpha(second_isle[i])) {
            invalid = true;
            break;
        }
    }

    if (invalid || mx_strcmp(first_isle, second_isle) == 0) {
        mx_printerr("error: line ");
        mx_printerr(mx_itoa(line));
        mx_printerr(" is not valid\n");
        exit(errno);
    }
}
