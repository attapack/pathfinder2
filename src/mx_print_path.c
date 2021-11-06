#include "pathfinder.h"

void mx_print_path(t_finder *path, t_out *step) {
    int sum = 0, tmp = 0;
    mx_printstr("========================================\n");
    mx_printstr("Path: ");
    mx_printstr(path->islands[step->route[1]]);
    mx_printstr(" -> ");
    mx_printstr(path->islands[step->route[0]]);
    mx_printstr("\nRoute: ");

    for (int i = 1; i < step->length + 1;) {
        mx_printstr(path->islands[step->route[i]]);
        if (++i < step->length +1)
            mx_printstr(" -> ");
    }

    mx_printstr("\nDistance: ");
    for (int i = 1; i < step->length; i++) {
        tmp = path->primary[step->route[i]][step->route[i+1]];
        mx_printint(tmp);
        sum += tmp;
        
        if (i < step->length - 1)
            mx_printstr(" + ");
        else if (i > 1) {
            mx_printstr(" = ");
            mx_printint(sum);
        }
    }
    mx_printstr("\n========================================\n");
}
