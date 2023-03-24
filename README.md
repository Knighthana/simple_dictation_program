# 关于这个项目

## 概率论与数理统计的参考公式

**注意：请先和自己的课本核对一下，我不保证这里的公式都是正确的，所以最好使用自己的资料进行听写**

**注意：请先和自己的课本核对一下，我不保证这里的公式都是正确的，所以最好使用自己的资料进行听写**

**注意：请先和自己的课本核对一下，我不保证这里的公式都是正确的，所以最好使用自己的资料进行听写**

如果你发现了错误，欢迎与我联系指出

### 常见随机变量，及其分布律、概率密度函数，其期望，其方差

|R.V.|写法|分布律或概率密度函数|EX|DX|
|---|---|---|---|---|
|0-1分布|$X\sim B(1,p)$|$P(X=k)=p^k (1-p)^{1-k}$|$p$|$p(1-p)$|
|二项分布|$X\sim B(n,p)$|$P(X=k)=C^k_n p^k (1-p)^{n-k}$|$np$|$np(1-p)$|
|泊松分布|$X\sim P(\lambda)$|$P(X=k)=\frac{\lambda ^k}{k!}e^{-\lambda}, \lambda >0$|$\lambda$|$\lambda$|
|几何分布|$X\sim Ge(p)$|$P(X=k)=(1-p)^{k-1}p$|$\frac{1}{p}$|$\frac{1-p}{p^2}$
|超几何分布| |$P(X=k)=\frac{C^k_m C^{n-k}_{n-m}}{C^m_n}$| | |
|均匀分布|$X\sim U[a,b]$|$f(x)=\frac{1}{b-a},a<x<b$|$\frac{a+b}{2}$|$\frac{(b-a)^2}{12}$|
|指数分布|$X\sim E(\lambda)$|$f(x)=\lambda e^{-\lambda x},x>0$|$\frac{1}{\lambda}$|$\frac{1}{\lambda ^2}$|
|正态分布|$X\sim N(\mu ,\sigma ^2)$|$f(x)=\frac{1}{\sqrt{2\pi}\sigma} e^{-\frac{(x-\mu)^2}{2\sigma ^2}}$|$\mu$|$\sigma ^2$|
|标准正态分布|$X\sim N(0,1)$|$\varphi(x)=\frac{1}{\sqrt{2\pi}}e^{-\frac{x^2}{2}}$|0|1|

注：正态分布的标准化：设
$X\sim N(\mu , \sigma ^2)$
，则
$Z=\frac{X-\mu}{\sigma}\sim N(0,1)$

另外，上面表格内均匀分布的概率密度函数与指数分布的概率密度函数的写法是为了方便记忆，
    
均匀分布的概率密度函数实际上是
$f(x)=\left \{ \begin{matrix}\frac{1}{b-a},&a<x<b \\ 0,&其他\end{matrix}\right.$

指数分布的概率密度函数实际上是
$f(x)=\left \{ \begin{matrix} \lambda e^{-\lambda x},&x>0\\ 0,&x\le 0 \end{matrix}\right.$
，且
$\lambda>0$

### 区间估计

|待估参数|条件|置信区间|
|----|----|----|
|$\mu$|$\sigma ^2$已知|$\bar{X}\pm Z_{\frac{\alpha}{2}}\cdot\frac{\sigma}{\sqrt{n}}$|
|$\mu$|$\sigma ^2$未知|$\bar{X}\pm t_{\frac{\alpha}{2}}(n-1)\cdot\frac{S}{\sqrt{n}}$|
|$\sigma ^2$|$\mu$未知|$\left ( \frac{(n-1)\cdot S^2}{\chi ^2 _{\frac{\alpha}{2}} (n-1)} ,\frac{(n-1)\cdot S^2}{\chi ^2 _{1-\frac{\alpha}{2}} (n-1)}\right )$|

请注意
$t_{\frac{\alpha}{2}}(n-1)$
是单独的**一个数值**，
同理
$\chi ^2 _{\frac{\alpha}{2}}(n-1)$
和
$\chi ^2 _{1-\frac{\alpha}{2}}(n-1)$
也是单独的**一个数值** *（而且题目中一般都会给出）*，切勿望而生畏

### 假设检验

$\sigma$
已知，对
$\mu$
进行假设检验

|原假设 $H_0$|备择假设 $H_1$|检验统计量|接受域|
|-----------|------------|---------|-----|
|$\mu \le \mu _0$|$\mu > \mu _0$| |$(-\infty,Z_\alpha)$|
|$\mu \ge \mu _0$|$\mu < \mu _0$|$U=\frac{\bar{X}-\mu _0}{\frac{\sigma}{\sqrt{n}}}\sim N(0,1)$|$(-Z_\alpha, +\infty)$|
|$\mu = \mu _0$|$\mu \ne \mu _0$| |$(-Z_\frac{\alpha}{2}, Z_\frac{\alpha}{2})$

$\sigma$
未知，
$S$
已知，对
$\mu$
进行假设检验

|原假设 $H_0$|备择假设 $H_1$|检验统计量|接受域|
|-----------|------------|---------|-----|
|$\mu \le \mu _0$|$\mu > \mu _0$| |$(-\infty, t_\alpha (n-1))$|
|$\mu \ge \mu _0$|$\mu < \mu _0$|$t=\frac{\bar{X}-\mu_0}{\frac{S}{\sqrt{n}}}\sim t(n-1)$|$(-t_\alpha(n-1),+\infty)$|
|$\mu = \mu _0$|$\mu \ne \mu _0$| |$(-t_{\frac{\alpha}{2}}(n-1),t_{\frac{\alpha}{2}}(n-1))$|

$\sigma$
未知，
$S$
已知，对
$\sigma ^2$
进行假设检验

|原假设 $H_0$|备择假设 $H_1$|检验统计量|接受域|
|-----------|------------|---------|-----|
|$\sigma ^2 \le \sigma _0 ^2$|$\sigma ^2 > \sigma ^2 _0$||$(0,\chi ^2 _{\alpha} (n-1))$|
|$\sigma ^2 \ge \sigma _0 ^2$|$\sigma ^2 < \sigma ^2 _0$|$\chi ^2 = \frac{(n-1)\cdot S^2}{\sigma ^2 _0}\sim \chi^2 (n-1)$|$(\chi ^2 _{1-\alpha}(n-1),+\infty)$|
|$\sigma ^2 = \sigma ^2 _0$|$\sigma ^2 \ne \sigma ^2 _0$| |$(\chi ^2 _{1-\frac{\alpha}{2}}(n-1),\chi ^2 _{\frac{\alpha}{2}}(n-1))$|

## 关于概率论与数理统计的听写

首先坚定信念，概率论与数理统计的几个公式没什么难背的

不要死记硬背，更不要光背字母不理解含义，要搞清楚一个公式有几个部分，分子分母有几项，都是什么含义，有无指数，指数是多少

做到这些，半个小时到一个小时的反复练习就足以记住了（说这个不是表示可以松懈状态拖到考前再背

如果你面临考试但还没有记住这些公式，看到这行之后就应该下载编译，找出你的笔记，开始背公式了

相信自己能通过考试的

![概率论与数理统计听写示例](./about/概率论与数理统计示例.PNG)

Knighthana @ https://github.com/Knighthana

2023/03/08
