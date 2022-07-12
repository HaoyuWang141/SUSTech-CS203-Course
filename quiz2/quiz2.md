# quiz 2

## A - 不值一提

## B - dijk变式

### Information

| Time Limit | Memory Limit | Data Amount | Problem Type |
| :--------: | :----------: | :---------: | :----------: |
|   5000ms   |    512MiB    |     10      |  Tradition   |

### Description

给出一个有向图和*k*个点的编号，求出这*k*个点两两之间最短路的最小值。

本题放宽了时间和空间限制。

### Input

第一行包含三个正整数 *n*, *m*, *k*，分别表示点数，边数和*k*。

接下来*m*行，每行包括三个正整数*x*, *y*, *z*，表示一条有向边$x\rightarrow y$，权值为*z*。

接下来*k*个正整数，表示点的编号。

### Output

一个正整数，表示答案。

### Sample Test Data

**Input #1**

```
6 7 3
1 5 3
2 3 5
1 4 3
5 3 2
4 6 5
4 3 7
5 6 4
1 3 6
```

**Output #1**

```
5
```

### Data Limit

For 40% cases: $1\leq n \leq 500, 1\leq m\leq 1000$.

For 100% cases: $1\leq n\leq 50000, 1\leq m \leq 100000, 1\leq z\leq10^9,2\leq k \leq n$.

图中没有重边或自环。



---

<div STYLE="page-break-after: always;"></div>

## C - Mex Problem

### Information

| Time Limit | Memory Limit | Data Amount | Problem Type |
| :--------: | :----------: | :---------: | :----------: |
|   2000ms   |    128MiB    |     10      |  Tradition   |

### Description

给*t*次询问，每次给出两个**非负**整数*a*,*b*，你需要计算集合$\{a\oplus 0,a\oplus 1,\dots,a\oplus b\}$的Mex值，其中符号$\oplus$为异或操作符。

一个整数集合的Mex值定义为没有在集合中出现过的最小非负整数。例如，$Mex\{1,2,3\}=0,Mex\{0,1,2,4,5\}=3$.

### Input

第一行，一个正整数*t*；

接下来t*t*行，每行两个非负整数*a*, *b*.

### Output

*t*行，表示询问的答案。

### Sample Test Data

**Input #1**

```
3
0 9
8 6
9 9
```

**Output #1**

```
10
0
2
```

### Data Limit

For 40% cases: $t=10$.

For 100% cases: $1\leq t\leq 100000, 1\leq a,b\leq10^9$.



---

<div STYLE="page-break-after: always;"></div>

## #D - railway

### Description

一个城镇的地铁线路图包括*N*个站点和*M*个地铁线。 *N*个站点记为1到*N*，每条线路被一个公司所拥有，并且每个公司用彼此不同的整数来表示。

第i*i*条线路是直接连接*p*与*q*的双向铁路，中间不存在其他站点，且这条铁路是由*c*公司所拥有。

如果乘客只乘坐同一公司的铁路，他/她只需要花费一元，但如果更换其他公司的铁路需要再花一元。当然，如果你要再换回原来的公司，你还是要花一元。

你从1号站的位置出发，通过地铁去N站，请求出最少需要多少钱。如果无法到达，输出-1.

### Input

*N* *M*

*M* 行，每行*p* *q* *c*.

### Output

输出最少需要的钱数，如果无法到达，输出-1.

### Sample Test Data

**Input #1**

```
3 3
1 2 1
2 3 1
3 1 2
```

**Output #1**

```
1
```

**Input #2**

```
8 11
1 3 1
1 4 2
2 3 1
2 5 1
3 4 3
3 6 3
3 7 3
4 8 4
5 6 1
6 7 5
7 8 5
```

**Output #2**

```
2
```

**Input #3**

```
2 0
```

**Output #3**

```
-1
```

#### Data Limit

$2 \le N \le 10^5$

$0 \le M \le 2 \times 10^5$

$1 \le c \le 10^6$



---

<div STYLE="page-break-after: always;"></div>

## #E - Math

### Description

给一个数列$a_1, a_2, a_3, ..., a_n$

求 $\Sigma_{l=1}^n \Sigma_{r=l}^n min(a_l,a_{l+1}, ..., a_r)$

### Input

*n*

$a_1, a_2, a_3, ..., a_n$

### Output

如题

### Sample Test Data

**Input #1**

```
3
2 1 3
```

**Output #1**

```
9
```

**Input #2**

```
4
1 3 2 4
```

**Output #2**

```
19
```

**Input #3**

```
8
5 4 8 1 2 6 7 3
```

**Output #3**

```
85
```



#### Data Limit

$2 \le N \le 2 \times 10^5$

$(a_1, a_2, ..., a_n)$ is a permutation of $(1,2, ..., N)$.