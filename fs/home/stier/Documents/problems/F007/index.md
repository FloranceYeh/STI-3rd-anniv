# Background

大小姐Florance再次开着$\color{78dd91}{FPS\phi}$($Florance's\ Personal\ Spaceship\ \phi$)，准备返航

由于害怕被再次卷入**Milky Way**星系的纷争，她决定绕道走

# Description

给出一张 $ x \times y $ 的图 $ P $ ，表示前方空间的扫描结果

已知在扫描图内，$\color{78dd91}{FPS\phi}$只能向右或向下移动

图中 $ P[0][0] $ 表示现在Florance的位置，$ P[x][y]$ 表示目的地

每个点表示单位空间内是否有敌机

请求出到达终点的路径数

# Format

## Input

第一行有2个整数 $ x, y $ ，表示扫描图的大小

接下来有 $ n $ 行，每行有 $ m $ 个数据

`0`表示这个单位空间无状况，`1`表示有敌机

## Output

输出到达终点的路径数，若无法到达输出`NO!!!`

# Samples

```input1
2 2
0 0
1 0
```

```output1
1
```

```input2
4 4
0 0 0 0
0 1 0 0
0 0 1 0
0 0 0 1
```

```output2
NO!!!
```

# Limitation

保证 $ P[0][0] = 0$

保证 $ unsigned\ long\ long $ 能过

对于 $ 50\% $ 的数据，$ 1 \le n,m \le 10 $

对于 $ 100\% $ 的数据，$ 1 \le n,m \le 30 $

<small>~~由于我不想写高精，所以数据范围很小~~</small>

<small>~~这也是为了降低难度~~</small>

1s, 256MiB for each test case.
