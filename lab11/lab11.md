# Lab11 - Advanced Graph

## #A - Dijkstra

### 总结：

有向有权图，从一个vertex到各个vertex的最短距离（最短路径），该题是dijk裸题。dijk强调每一步都寻找距离初始点距离最短的点（而不涉及集合）。本质上与prim相同，都是bfs+二叉堆，复杂度为$O((|V|+|E|)log|V|)$。

### Information

| Time Limit | Memory Limit | Data Amount | Problem Type |
| :--------: | :----------: | :---------: | :----------: |
|   2000ms   |    128MiB    |     10      |  Tradition   |

### Description

This is a model of Dijkstra algorithm.

Given a **directed weighted** graph, where the starting point is 1. please print the values of shortest path from 1 to each vertex.

### Input

The first line contains two integers *n*,*m*: number of vertexes, number of edges.

For the next *m* lines, each line contains 3 integers: *x*, *y*, *z*, representing an edge $x\rightarrow y$ with weight *z*.

### Output

*n* integers.

The *i*-th integer is the value of shortest path from 1 to *i*.

If *i* is unreachable from 1, please print -1.

### Sample Test Data

**Input #1**

```
4 6
1 3 1 
2 1 2
4 2 3
3 3 4
1 2 5
3 4 6
```

**Output #1**

```
0 5 1 7
```

#### Tips

For 100% cases: $1<=n<=10000, 0<=m<=100000, 1<=z<=100$.

It's guaranteed that there are no duplicate edges in the graph.



---

<div STYLE="page-break-after: always;"></div>

## #B - Prim

### Information

| Time Limit | Memory Limit | Data Amount | Problem Type |
| :--------: | :----------: | :---------: | :----------: |
|   2000ms   |    128MiB    |     10      |  Tradition   |

### 总结：

无向有权图，从一个点到其它点的最短距离（最短路径），该题是prim算法裸题。prim强调，每一步都寻找距离集合最短的点（而不是初始点）。本质上与dijk相同，都是bfs+二叉堆，复杂度为$O((|V|+|E|)log|V|)$

### Description

This is a model of prim algorithm.

Given an **weighted undirected** graph, please calculate the value of the minimum spanning tree.

### Input

The first line contains two integers n*,*m*: number of vertexes, number of edges.

For the next *m* lines, each line contains 3 integers: *x*, *y*, *z*, representing an edge $x \rightarrow y$ with weight z.

### Output

The answer.

### Sample Test Data

**Input #1**

```
5 5
1 2 1
2 3 2
3 4 3
4 5 4
2 5 1
```

**Output #1**

```
7
```

### Data Limit

For 100% cases: $1<=n<=5000, 0<=m<=100000, 1<=z<=100$.

It's guaranteed that there are no duplicate edges in the graph.



---

<div STYLE="page-break-after: always;"></div>

## #C - Kosaraju

### 总结：

Kosaraju用来求SCC(Strongly connected Component)。思路是先求反图拓扑序，再根据反图拓扑序在原图中跑dfs

### Information

| Time Limit | Memory Limit | Data Amount | Problem Type |
| :--------: | :----------: | :---------: | :----------: |
|   2000ms   |    128MiB    |      4      |  Tradition   |

### Description

This is a model of Kosaraju algorithm.

Given an **directed** graph, please determine if the whole graph is a SCC.

### Input

The first line contains two integers *n*, *m*: number of vertexes, number of edges.

For the next m*m* lines, each line contains two integers: *x*, *y*, representing an edge $x\rightarrow y$.

### Output

If yes, print "Yes"; otherwise print "No".

### Sample Test Data

**Input #1**

```
4 6
1 3
2 1
4 2
3 3
1 2
3 4
```

**Output #1**

```
Yes
```

### Data Limit

For 100% cases: $1<=n<=10000, 0<=m<=100000$.

It's guaranteed that there are no duplicate edges in the graph.



---

<div STYLE="page-break-after: always;"></div>

## #D 被砍了

## #E - Shortest path counting

### Information

| Time Limit | Memory Limit | Data Amount | Problem Type |
| :--------: | :----------: | :---------: | :----------: |
|   2000ms   |    128MiB    |     10      |  Tradition   |

### Description

Given a **undirected unweighted** graph, where the starting point is 1. please print the **total number** of shortest path from 1 to each vertex.

### Input

The first line contains two integers *n*, *m*: number of vertexes, number of edges.

For the next *m* lines, each line contains 2 integers: *x*, *y*, representing an edge $x−y$.

### Output

*n* integers.

The *i*-th integer is the number of shortest path from 1 to *i*.

The answer is modulo 100003.

If *i* is unreachable from 1, please print 0.

Note that 1 is always reachable from 1.

### Sample Test Data

**Input #1**

```
4 5
1 3
2 1
4 2
1 2
3 4
```

**Output #1**

```
1
2
1
3
```

### Data Limit

For 100% cases: $1<=n<=10000, 0<=m<=100000, 0<z<101$.



---

