/* an example within Probability and mathematical statistics by simple dictation program */
/* Author: Knighthana @ https://github.com/Knighthana */
/* Open Source following the license GPL*/
/* Create Date: 2023 Feb. 23rd */
/* Last Edited: 2023 Mar. 07th */
/* 作为CS领域的一员，掌握概率论与数理统计是很重要的，尽管可能之前学得不好，没关系，什么时候开始学习都不晚，慢慢来 */
/* TODOList: 1.逐步给出提示（但这是CLI我该怎么显示公式呢？） */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DEFAULTSKIPTIMES 3

int main(int argc, char* argv[])
{
    int skiptimes = DEFAULTSKIPTIMES; /* 同样问题做对skiptimes次后就不再出现，由score控制 */
    if(argc > 1){ /* 在这里处理命令行参数 */
        skiptimes = argv[1][0];
        skiptimes -= '0';
    }
    int totalnum = 18;
    int randnum;
    int temp_i;
    int tmp_flag;
    int lastrandnum = -1;
    int score[totalnum]; /* 记录得分 */
    char ch;
    char flag_fin[totalnum];
    char* totalstring[totalnum];
    /* situations */
    char* a1 = "请写出二项分布B(n, p)的分布律、EX与DX\0";
    char* a2 = "请写出泊松分布P(λ)的分布律、EX与DX\0";
    char* a3 = "请写出几何分布Ge(p)的分布律、EX与DX\0";
    char* a4 = "请写出均匀分布U(a, b)的概率密度函数、EX与DX\0";
    char* a5 = "请写出指数分布E(λ)的概率密度函数、EX与DX\0";
    char* a6 = "请写出正态分布N(μ, σ²)的概率密度函数、EX与DX\0";
    char* b1 = "请写出置信度为1-α、σ²已知时，μ的置信区间\0";
    char* b2 = "请写出置信度为1-α、σ²未知时，μ的置信区间\0";
    char* b3 = "请写出置信度为1-α、μ未知时，σ²的置信区间\0";
    char* c1 = "请写出显著性水平为α，总体σ²已知时，原假设H₀为μ≤μ₀时对应的检验统计量，其表达式，及对应的接受域\0";
    char* c2 = "请写出显著性水平为α，总体σ²已知时，原假设H₀为μ≥μ₀时对应的检验统计量，其表达式，及对应的接受域\0";
    char* c3 = "请写出显著性水平为α，总体σ²已知时，原假设H₀为μ=μ₀时对应的检验统计量，其表达式，及对应的接受域\0";
    char* c4 = "请写出显著性水平为α，总体σ²未知时，原假设H₀为μ≤μ₀时对应的检验统计量，其表达式，及对应的接受域\0";
    char* c5 = "请写出显著性水平为α，总体σ²未知时，原假设H₀为μ≥μ₀时对应的检验统计量，其表达式，及对应的接受域\0";
    char* c6 = "请写出显著性水平为α，总体σ²未知时，原假设H₀为μ=μ₀时对应的检验统计量，其表达式，及对应的接受域\0";
    char* c7 = "请写出显著性水平为α时，原假设σ²≤σ₀²对应的检验统计量，其表达式，及对应的接受域\0";
    char* c8 = "请写出显著性水平为α时，原假设σ²≥σ₀²对应的检验统计量，其表达式，及对应的接受域\0";
    char* c9 = "请写出显著性水平为α时，原假设σ²=σ₀²对应的检验统计量，其表达式，及对应的接受域\0";
    /* assignments */
    totalstring[0] = a1;
    totalstring[1] = a2;
    totalstring[2] = a3;
    totalstring[3] = a4;
    totalstring[4] = a5;
    totalstring[5] = a6;
    totalstring[6] = b1;
    totalstring[7] = b2;
    totalstring[8] = b3;
    totalstring[9] = c1;
    totalstring[10] = c2;
    totalstring[11] = c3;
    totalstring[12] = c4;
    totalstring[13] = c5;
    totalstring[14] = c6;
    totalstring[15] = c7;
    totalstring[16] = c8;
    totalstring[17] = c9;
    for(temp_i = 0; temp_i < totalnum; temp_i++){
        flag_fin[temp_i] = 0;
        score[temp_i] = 0;
    }
    srand((unsigned)time(NULL));
    printf("目前设定达成目标需要做对的次数为%d，请自行备好纸笔与核对的答案；如果做对请输入y，如果做错请输入n，若不想改变分数可以不输入，随后敲击回车以继续下一项听写；输入q并回车以退出，回车前请勿超过一个字符\n\n", skiptimes);
    do{
        for(tmp_flag = 1, temp_i = 0; temp_i < totalnum; temp_i++){
            if(score[temp_i] < skiptimes){ /* 此处若设置成'<'则只要所有分数大于等于skiptimes即可，若设置成'<='则需要所有分数大于skiptimes */
                tmp_flag = 0;
                break; /* 如果发现还有没考完的，就继续 */
            }
        }
        if(tmp_flag == 1){
            break;
        }
        do{
            randnum = rand();
		    randnum = randnum % totalnum;
            /*
            可以引入以下代码，让错得多的题更容易频繁出现
            这样处理之后，某道题出现的概率符合什么分布？
            randnum2 = rand();
            randnum2 = randnum2 % totalnum;
            if(score[randnum2] < score[randnum]){
                randnum = randnum2;
            }
            */
	    }
        while(randnum == lastrandnum || score[randnum] >= skiptimes); /* 这里写筛选的条件，例如不符合的出题：1.与上一个相同 2.没有再考核的必要 */
        lastrandnum = randnum;
        printf("%s \n", totalstring[randnum]);
        flag_fin[randnum] = 1;
        ch = getchar();
        if(ch == 'y' || ch == 'Y'){
            score[randnum]++;
        }
        else if(ch == 'n' || ch == 'N'){
            score[randnum]--;
        }
        if(ch != '\n'){
            getchar(); /* 处理一下stdin缓冲区里面的回车 */
        }
    }
    while((ch != 'q') && (ch != 'Q'));
    /* 最终检查 */
    printf("问题序号|");
    for(temp_i = 0; temp_i < totalnum; temp_i++){
        printf("%4d", temp_i);
        printf("|");
    }
    printf("\n");
    /* 随机数有效性 */
    printf("是否出现|");
    for(temp_i = 0; temp_i < totalnum; temp_i++){
        if(flag_fin[temp_i] == 1){
            printf("%4c", 'Y');
            printf("|");
        }
        else{
            printf("%4c", 'N');
            printf("|");
        }
    }
    printf("\n");
    /* 分数 */
    printf("最终分数|");
    for(temp_i = 0; temp_i < totalnum; temp_i++){
        printf("%4d", score[temp_i]);
        printf("|");
    }
    return 0;
}
