# DepthFirstSearchDemo
A demonstration of the depth first search algorithm on a graph represented as an adjacency matrix.

make the project with:

```
make dfs
```
Then run the program with

```
./dfs
```

First input is the size of the graph. Then integers are inputed in pairs of 2 that represent where the edges are. When you are done, input
a pair of -1.

Example input:

```
10
0 1 0 2 1 2 1 3 2 3 2 7 3 6 4 5 6 7 6 8
7 8 7 9 8 9
-1 -1
0
```

Output for the above example: 

```
Test case 1:
1 visited
2 visited
3 visited
6 visited
7 visited
8 visited
9 visited
Reachable from 0:
1 2 3 6 7 8 9 
Not reachable from 0:
4 5 
```
