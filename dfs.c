#include <stdio.h>
#include "stack.h"
int main() {
  int size;
  int testCase = 1;
  
  while(1 == scanf("%d", &size) && size != 0) {
    int adj[size][size];
    int nodes[size];
    int visited[size];
    int i, j, b, a;

    //zero out the adjacency matrix
    for (i = 0; i < size; i++) {
      for (j = 0; j < size; j++) {
        adj[i][j] = 0;
      }
    }

    //Read the edges part of the graph description
    while((2 == scanf("%d %d", &i, &j)) && i != -1 && j != -1) {
      adj[i][j] = 1;
    }

    //create the nodes array and zero out the visited array
    for(i = 0; i < size; i++) {
      nodes[i] = i;
      visited[i] = 0;
    }

    //start the DFS algorithm
    push(nodes[0]);

    while(!is_empty()) {
      a = pop();
      visited[a] = 2;
      for (b = 0; b < size; b++) {
        if (adj[a][b] == 1 && visited[b] == 0) {
          push(nodes[b]);
          visited[b] = 1;
        }
      }
    }

    //Print test case number and the visited nodes
    printf("Test case %d:\n", testCase);
    for (i = 1; i < size; i++) {
      if (visited[i] == 2)
        printf("%d visited\n", i);
    }

    //Print the reachable nodes
    printf("Reachable from 0:\n");
    for (i = 1; i < size; i++) {
      if (visited[i] == 2)
        printf("%d ", i);
    }
    
    //Print the unreachable nodes
    printf("\nNot reachable from 0:\n");
    for (i = 1; i < size; i++) {
      if (visited[i] == 0)
        printf("%d ", i);
    }

    printf("\n");

    testCase++;
  }
  
  return 0;
} 