# Lab10 - Graph2

## #A - pond

### Description

There is an $n \times m$ plane. `.` represents land and `W` represents water. `W` is connected to the `W` of the surrounding 8 positions. Many connected `W` form a pond. You need to count how many ponds there are.

### Input

*n*,*m*

The plane formed by `.` and `W`

### Output

The number of ponds.

### Sample Test Data

**Input #1**

```
10 12
....W....WW.
WWWW.....WWW
....WW...WW.
...W.....WW.
.........W..
..W......W..
.W.W.....WW.
W.W.W...W.W.
.W.W....W.W.
..W....W..W.
```

**Output #1**

```
3
```

### Data Limit

$2 \le n,m \le 100$



---

<div STYLE="page-break-after: always;"></div>

## #B - traffic

### Description

The traffic in city A is underdeveloped, and it can be represented by a directed graph. If there is a directed edge from vertex 1 to vertex 2, then you can go from area 1 to area 2, and you plan to have dinner with friends. Each area has a restaurant. There are *k* people in total, there are *n* areas in the city, you need to find how many restaurants that everyone can reach.

### Input

*k* *n* *m*

*k* lines, representing which area these people are in respectively.

*m* lines, each line is: *a* *b*, representing a direct edge from area *a* to area *b*.

### Sample Test Data

**Input #1**

```
2 4 4
2
3
1 2
1 4
2 3
3 4
```

**Output #1**

```
2
```

### Data Limit

$2 \le k \le 100$

$1 \le n \le 1000$

$1 \le m \le 10000$



---

<div STYLE="page-break-after: always;"></div>

## #C - wormholes

### Description

There are *n* wormholes in a 2D plane. Two wormholes will be paired. *n* wormholes will form $n/2$ connected pairs. For example, if wormholes *A* and *B* are connected as a pair, then someone enters *A* in some direction will exit *B* in the same direction.

You need to count the number of distinct pairings of the wormholes such that there exists a position in the 2D plane so that someone starting from it always walking in the +x direction will get trapped in an infinite cycle.

### Input

*n*

*n* lines, each line: $(x,y)$ representing the coordinate of a wormhole.

### Output

The number of distinct pairing that meets the condition.

### Sample Test Data

**Input #1**

```
4
0 0
1 0
1 1
0 1
```

**Output #1**

```
2
```

**Tips**:

2 pairings:

1. (1,2), (3,4), you can start from anywhere between (0,0) and (1,0) to get trapped.
2. (1,3), (2,4), you can start from anywhere between (0,0) and (1,0) to get trapped.

### Data Limit

$2 \le N \le 12$

The coordinate is in the range $(0, 10^9)$



---

<div STYLE="page-break-after: always;"></div>

## #D - Topological Sorting

### Description

Among the sequences *P* that are permutations of $(1,2,…,N)$ and satisfy the condition below, find the lexicographically smallest sequence.

For each $i=1,…,M$, $A_i$ appears earlier than $B_i$ in *P*.

If there is no such *P*, print −1.

### Input

*N* *M*

$A_1~B_1$

.

.

.

$A_M~B_M$

### Output

*P* or −1.

### Sample Test Data

**Input #1**

```
4 3
2 1
3 4
2 4
```

**Output #1**

```
2 1 3 4
```

**Input #2**

```
2 3
1 2
1 2
2 1
```

**Output #2**

```
-1
```

### Data Limit

$2 \le N \le 2 \times 10^5$

$1 \le M \le 2 \times 10^5$

### Hint

A heap may help you for lexicographical requirement.



---

<div STYLE="page-break-after: always;"></div>

## #E - Topological Sorting

### Description

We have a simple directed graph *G* with *N* vertices and *M* edges. The vertices are labeled as Vertex 1, Vertex 2, …, Vertex *N*. The *i*-th edge $(1≤i≤M)$ goes from Vertex $U_i$ to Vertex $V_i$.

You will start at a vertex and repeatedly travel on *G* from one vertex to another along a directed edge. How many vertices of *G* have the following condition: you can start at that vertex and continue traveling indefinitely by carefully choosing the path?

### Input

*N* *M*

*M* lines, each line: *U* *V*, representing there is a direct edge from *U* to *V*.

### Output

The answer.

### Sample Test Data

**Input #1**

```
5 5
1 2
2 3
3 4
4 2
4 5
```

**Output #1**

```
4
```

### Data Limit

$2 \le N \le 2 \times 10^5$



---