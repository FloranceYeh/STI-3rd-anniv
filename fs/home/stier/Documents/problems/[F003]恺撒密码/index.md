# Background

**Qianmo**([](/user/399))最近沉迷于高精度算法，并且在探寻高精度的秘密

于是**Florance**([](/user/1040))决定帮他把数据加密，阻碍他探寻

但一身反骨的你非要把数据解密了，你打听到**Florance**用的加密技术是`恺撒密码`

# Description

在密码学中，恺撒密码（英语：Caesar cipher）是一种最简单的加密技术

明文中的所有字母都在字母表上向后（或向前）按照一个固定数目进行偏移后被替换成密文

但**Florance**是将字符在`ASCII`上偏移的

# Format

## Input

第一行一个整数 $ n $ ，表示偏移量

第二行一串字符，表示加密后的字符

## Output

输出解密后的字符串

# Samples

```input1
6
Wogtsu
```

```output1
Qianmo
```

# Tips

Florance曾说过，$ 127 + 1 = 0 $

# Limitation

1s, 1024KiB for each test case.
