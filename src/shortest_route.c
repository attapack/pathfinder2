void shortest_route(t_finder *path, t_out *step) {
    int i = step->route[step->length];
    int j = step->route[0];

    for (int k = 0; k < path->num; k++) {
        if (step->route[step->length] == step->route[0] && k > 0) break;
        else if (k != step->route[step->length] && 
        (path->primary[i][k] == path->cost[i][j] - path->cost[k][j])) {
            step->length++;
            step->route[step->length] = k;
            shortest_route(path, step);
            step->length--;
        }
    }

    if (step->route[step->length] != step->route[0]) return;

    mx_print_path(path, step);
}
