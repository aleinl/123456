//202510303129
//19150945470@163.com
//陶磊
#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+a>a&&b+c>a&&c+b>a)
{
    printf("可组成三角形");

}
   else
   printf("不能组成三角形");

    return 0;
}
