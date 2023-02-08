def aStarAlgo(start_node, stop_node):
    open_set = set(start_node)
    closed_set = set()
    g = {}
    parents = {}
    g[start_node] = 0
    parents[start_node] = start_node

    while len(open_set) > 0:

        n = None

        for v in open_set:
            if n == None or g[v] + heuristic(v) < g[n] + heuristic(n):
                n = v

        if n == stop_node or Graph_nodes[n] is None:
            pass
        else:
            for (m, weight) in get_neighbors(n):
                if m not in open_set and m not in closed_set:
                    open_set.add(m)
                    parents[m] = n
                    g[m] = g[n] + weight
                else:
                    if g[m] > g[n] + weight:
                        # update g(m)
                        g[m] = g[n] + weight
                        # change parent of m to n
                        parents[m] = n
                        # if m in closed set,remove and add to open
                        if m in closed_set:
                            closed_set.remove(m)
                            open_set.add(m)
        if n is None:
            print('Path does not exist!')
            return None

        if n == stop_node:
            # n is goal node
            path = []
            while parents[n] != n:
                # till it's not the start node run the loop
                path.append(n)
                n = parents[n]

            path.append(start_node)
            # start node was not entered in loop before
            path.reverse()
            print(g[stop_node])
            print('Path found: {}'.format(path))
            return path
        open_set.remove(n)
        closed_set.add(n)
    print('Path does not exist!')
    return None


def get_neighbors(v):
    if v in Graph_nodes:
        return Graph_nodes[v]
    else:
        return None


def heuristic(n):
    H_dist = {
        'A': 16,
        'B': 4,
        'C': 16,
        'D': 2,
        'E': 1,
        'F': 4,
        'G': 0
    }
    return H_dist[n]


# Describe your graph here
Graph_nodes = {
    'A': [('B', 10), ('C', 4)],
    'B': [('A', 10), ('D', 6), ('C', 4)],
    'C': [('A', 4), ('B', 4), ('E', 6)],
    'D': [('B', 6), ('E', 6), ('F', 4)],
    'E': [('C', 6), ('D', 6), ('G', 14)],
    'F': [('D', 4), ('G', 4)],
    'G': [('E', 14), ('F', 4)],
}
aStarAlgo('A', 'B')