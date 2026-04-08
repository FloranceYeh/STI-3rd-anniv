# Description

Florance 的 Blog 里有 $ n $ 个文件,

她想知道自己的 Blog 总共有多大

# Format

## Input

第一行有一个整数 $n$ ,表示有 $n$ 个文件 $n \le 1000$

接下来有 $n$ 行,每行是一个整数 $i$ 表示文件大小(单位byte)

$ i \le  10^8$

## Output

输出文件总大小,要进单位,保留2位小数

答案单位仅有 `B` , `KiB` , `MiB` , `GiB`

# Samples

```input1
5
1024
1024
1024
2048
512
```

```output1
5.50MiB
```

# Tips

> 拷Florance的Blog是检验U盘速度的最佳途径

信息学入门知识:

$KB \not= KiB$
$MB \not= MiB$
$GB \not= GiB$

# Limitation

1s, 1024KiB for each test case.
