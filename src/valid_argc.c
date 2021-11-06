#include "pathfinder.h"

void valid_argc(int argc) {
    if (argc != 2) {
        mx_printerr("usage: ./pathfinder [filename]\n");
        exit(errno);
    }
}
