#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>=100&&a<=999)printf("yes");
    else              printf("no");
    return 0;
}

/*输入一个正整数，若其为3位数，则输出yes，否则输出no。

输入格式:
直接输入1个正整数，没有其他任何附加字符。

输出格式:
直接输出yes或no，没有其他任何附加字符。

输入样例:
132



输出样例:
yes



输入样例:
1234



输出样例:
no*/
