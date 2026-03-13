#include <stdio.h>
int queue[20], front = -1, rear = -1;
int visited[10];
void enqueue(int v) {
    if(rear == -1)
        front = 0;
    queue[++rear] = v;
}
int dequeue() {
    return queue[front++];
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
    enqueue(start);
    visited[start] = 1;
    printf("BFS Traversal: ");
    while(front <= rear) {
        int v = dequeue();
        printf("%d ", v);
        for(i = 0; i < n; i++) {
            if(graph[v][i] == 1 && !visited[i]) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }

    return 0;
