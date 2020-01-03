#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,j,len,sum;
    char a[10000];
    scanf("%d",&n);
  //  getchar();
    for(i=0;i<n;i++)
    {
        sum = 0;
        scanf("%s",a);
        len = strlen(a);
        for(j=0;j<len;j++){
            sum += a[j] - '0';
        }
        if(sum%3==0) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
/*如何判断一个数是不是3的倍数呢？

除了直接除以3以外，我们还可以把各数位上的数字求和，如果和是3的倍数，那么该正整数就一定是3的倍数了。

例如 654321：6 + 5 + 4 + 3 + 2 + 1 = 21。21是3的倍数，所以654321就是3的倍数了。

再比如 4321：4 + 3 + 2 + 1 = 10。10不是3的倍数，所以4321不是3的倍数。

本题的要求是给你 n 个正整数，判断它们是否是3的倍数。

对于每个正整数：如果是3的倍数输出Yes，否则，输出No。

输入格式
输入的第一行，包含一个正整数n，表示正整数的个数。

以下n行，每行一个正整数a，表示需要判断的数字。

输入保证数字a的位数不超过1000位，n不超过55.

输出格式
输出共n行，每行输出一个Yes或No，表示第i个数是不是3的倍数。

注意：每行的输出只能是Yes或No，注意大小写，不要有多余的其它字符（包括空格）。

输入样例:
在这里给出一组输入。例如：

3
13
120
228



输出样例:
在这里给出相应的输出。例如：

No
Yes
Yes*/
