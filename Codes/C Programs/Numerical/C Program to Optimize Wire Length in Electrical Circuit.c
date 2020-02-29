#include <stdio.h>
#include <limits.h>

#define V 9

int minDistance(int dist[], int sptSet[])
{
    int min = INT_MAX, min_index;
    int v;
    for (v = 0; v < V; v++)
        if (sptSet[v] == 0 && dist[v] <= min)
            min = dist[v], min_index = v;
    return min_index;
}

int printSolution(int dist[], int n)
{
    printf("Vertex   Distance from Source\n");
    int i;
    for (i = 0; i < V; i++)
        printf("%d \t\t %d\n", i, dist[i]);
}

void shortestLength(int graph[V][V], int src)
{
    int dist[V];
    int i, count;
    int sptSet[V];
    for (i = 0; i < V; i++)
        {
            dist[i] = INT_MAX;
            sptSet[i] = 0;
        }
    dist[src] = 0;
    for (count = 0; count < V - 1; count++)
        {
            int u = minDistance(dist, sptSet);
            sptSet[u] = 1;
            int v;
            for (v = 0; v < V; v++)
                if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u]
                        + graph[u][v] < dist[v])
                    dist[v] = dist[u] + graph[u][v];
        }
    printSolution(dist, V);
}

int main()
{
    printf(
        "An electric circuit can be represented as Graph where components are nodes and wires are edges between them.");
    int graph[V][V] =
    {
        { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
        { 0, 0, 4, 0, 10, 0, 2, 0, 0 },
        { 0, 0, 0, 14, 0, 2, 0, 1, 6 },
        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
        { 0, 0, 2, 0, 0, 0, 6, 7, 0 }
    };
    int c;
    printf("Enter the component number from which you want to optimize wire lengths: ");
    scanf("%d", &c);
    printf("Optimized Lengths are: ");
    shortestLength(graph, c);
    return 0;
}

/*
An electric circuit can be represented as Graph where components are nodes and wires are edges between them.
Enter the component number from which you want to optimize wire lengths: 3
Optimized Lengths are:
Vertex   Distance from Source
0        19
1        15
2        7
3        0
4        9
5        11
6        13
7        14
8        9