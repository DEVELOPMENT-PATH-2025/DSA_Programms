#include <stdio.h>
#include <limits.h>

 
#define N 8
#define INF INT_MAX
 

int shortestDist(int graph[N][N]) {
 
    
    int cost[N],d[N];
    cost[N-1] = 0;
 
    
    
for (int i = N-2 ; i >= 0 ; i--)
       {
        int min = INF;
        for(int j = i+1 ; j < N ; j++)
        {
            if(graph[i][j] != INF && graph[i][j] + cost[j] < min)
            {
                min = graph[i][j] + cost[j];
            }
        }
        cost[i] = min;
       }    
 
    return cost[0];
}
 
int main()
{

    int graph[N][N] ={{INF, INF, INF, INF, 4, 11, INF, INF},
       {INF, INF, INF, INF, 9, 5, 16, INF},
       {INF, INF, INF, INF, INF, INF, 2, INF},
       {INF, INF, INF, INF, INF, INF, INF, 18},
       {INF, INF, INF, INF, INF, INF, INF, 13},
       {INF, INF, INF, INF, INF, INF, INF, 2},
      {INF, INF, INF, INF, INF, INF, INF, INF}};
 
    printf("%d", shortestDist(graph));
    return 0; 
    }
