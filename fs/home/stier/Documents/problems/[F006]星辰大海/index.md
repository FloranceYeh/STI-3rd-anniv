# Background

大小姐Florance开着私人飞船，她叫它$\color{78dd91}{FPS\phi}$($Florance's\ Personal\ Spaceship\ \phi$)

$\color{78dd91}{FPS\phi}$是Florance最中意的数艘飞船之一，但它仅安装了`曲率驱动引擎`

Florance的目标是 $ 2 \times 10^{6} $ 光年外的**Milky Way**星系中的**Sol**系

但由于**Sol**系太偏僻，一路上有不少太空海盗

好在$\color{78dd91}{FPS\phi}$上配备了一些中子弹，可弹药数量有限，幸好一路上有一些自家公司的弹药商，可以补给弹药

但这些弹药商所出售的弹药有限，只有一定数量

# Description

已知一路上可能遭遇 $ n $ 个事件

要么是遇到太空海盗，损失一些中子弹，要么是遇到弹药商，补给一些中子弹

请问，Florance出发前，至少要带上多少中子弹，才能打爆一路上所有的海盗

# Format

## Input

第一行有一个整数 $ n $ ，表示会遭遇的事件数

接下来有 $ n $ 行，每行有一个字符和一个整数 $ a_i $

`D`表示遇到弹药商，$ a_i $ 表示可购买的中子弹数量

`R`表示遇到太空海盗，$ a_i $ 表示要消耗的中子弹数量

## Output

输出出发前最少需要带的中子弹数

# Samples

```input1
3
R 10
R 20
R 30
```

```output1
60
```

```input2
6
R 10
R 20
D 100
R 20
R 10
```

```output2
30
```

# Limitation

对于 $ 30\% $ 的数据，$ 1 \le n \le 10^2 $，$ 0 \le a_i \le 10^3 $

对于 $ 60\% $ 的数据，$ 1 \le n \le 10^4 $，$ 0 \le a_i \le 10^6 $

对于 $ 100\% $ 的数据，$1 \le  n \le 10^6 $，$ 0 \le a_i \le 10^9 $

<small>~~出完数据才发现我可能卷入了什么星系战争~~</small>

1s, 256MiB for each test case.
