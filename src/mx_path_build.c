#include "pathfinder.h"

void mx_path_build(t_finder *path) {
    t_out *step = (t_out*) malloc (sizeof(t_out));
    step->route = (int *) malloc(sizeof(int) * (path->num + 1));

    for (int i = 0; i < path->num; i++) {
        for (int j = i + 1; j < path->num; j++) {
            step->length = 1;
            step->route[0] = j;
            step->route[1] = i;
            shortest_route(path, step);
        }
    }
    free(step->route);
    free(step);
}
