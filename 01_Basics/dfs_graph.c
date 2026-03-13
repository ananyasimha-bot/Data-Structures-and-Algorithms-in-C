#include <stdio.h>
int visited[10];
void dfs(int v, int graph[10][10], int n) {
    printf("%d ", v);
    visited[v] = 1;
    for(int i = 0; i < n; i++) {
        if(graph[v][i] == 1 && !visited[i]) {
            dfs(i, graph, n);
        }
    }
}
int main() {
    int graph[10][10], n, i, j, start;
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter adjacency matrix:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);
    printf("Enter starting vertex: ");
    scanf("%d", &start);
    printf("DFS Traversal: ");
    dfs(start, graph, n);

    return 0;
}
