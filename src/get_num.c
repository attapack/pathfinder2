#include "pathfinder.h"

bool mx_valid_num(int total, int curr_num) {
    return total >= curr_num;
}

int get_num(char *file) {
    char *str = NULL;
    int num = 0, fd = 0;

    fd = open(file, O_RDONLY);
    valid_file(file);

    mx_read_line(&str, 10, '\n', fd);
    check_num(str, 1);
    
    num = mx_atoi(str);

    mx_strdel(&str);
    close(fd);
    return num;
}
