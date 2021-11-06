#include "pathfinder.h"

void valid_file(char *file) {
    char *str = NULL, fd = open(file, O_RDONLY);

    if (fd == -1) {
        mx_printerr("error: file ");
        mx_printerr(file);
        mx_printerr(" does not exist\n");
        close(fd);
        exit(errno);
    }

    else if (mx_read_line(&str, 1,'\n', fd) == -1) {
        mx_strdel(&str);
        mx_printerr("error: file ");
        mx_printerr(file);
        mx_printerr(" is empty\n");
        close(fd);
        exit(errno);
    }
}
