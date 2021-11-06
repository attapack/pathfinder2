#include "pathfinder.h"

void valid_bridges_len(int sign, int sum) {
    if (sign > 0 && sum < 0) {
        mx_printerr("error: sum of bridges lengths is too big\n");
        exit(errno);
    }
}
