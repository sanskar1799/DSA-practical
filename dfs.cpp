#include <stdio.h>

void DFS(int i);

int G[20][20], visited[20], n;

int main()
{
    int i, j;

    printf("\n Enter the number of virtice: ");
    scanf("%d", &n);

    printf("\n Enter adjacency matrix of the graph:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &G[i][j]);

    for (i = 0; i < n; i++)
        visited[i] = 0;

    DFS(0);

    return 0;
}

void DFS(int i)
{
    int j;
    printf("\n %d", i);
    visited[i] = 1;

    for (j = 0; j < n; j++)
        if (!visited[j] && G[i][j] == 1)
            DFS(j);
}
PS D:\sanskar150> gcc dfs.c
PS D:\sanskar150> ./a.exe

 enter the number of vertice:4

 enter adjacency matrix of the graph:
0 1 1 0
1 0 0 1
1 0 0 1
0 1 1 0

0
1
3
2
