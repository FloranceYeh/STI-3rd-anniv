# Description

斐波那契数列（Fibonacci sequence）又称黄金分割数列，

斐波那契数列的定义如下:

$$
F(0) = 1, F(1) = 1, F(n) = F(n - 1) + F(n - 2) (n \geq 2, n \in N^*)
$$

# Format

## Input

一个整数 $ n $，$0 \leq n \leq 10^3$

## Output

斐波那契数列前 $ n $ 项的和

## Tips

`C`选手请使用高精度算法

`Py`选手请随意

请不要使用`递归`

<small>~~(因为n=1000时答案就有200多位了，所以上限才设100)~~</small>

# Samples

```input1
5
```

```output1
12
```

# Limitation

1s, 1024KiB for each test case.
