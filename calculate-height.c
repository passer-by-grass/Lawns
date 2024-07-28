#include <stdio.h>

int main()
{
	int foot;
	int inch;
	
	printf("请分别输入身高为几英寸几英寸（如：输入5 7则为五英寸7英尺）：");
	scanf("%d %d",&foot,&inch);
	
	printf("您的身高为（米）：%f",(foot+inch/12)*0.3048); 
	return 0;
}
//在c语言中，两个整数运算的结果只能是整数 
//即小数点后面的数会被扔掉
//10和10.0在c语言中是不同的两个数，10.0是浮点数 

//该程序改进方法一：将inch/12改为inch/12.0
//当浮点数和整数放到一起运算时，c语言会将整数转换成浮点数，进行浮点数运算 
//改法二：改int 
//在定义变量时用的是int，int是整数。如果把int换成double，它就变成浮点数了 
//double是“双精度浮点数”的“双”
//但是如果变量类型是double，那么输入变量时用的就不是%d，是%lf

//数据类型：
//整数：int  printf("%d",...)  scanf("%d",...)
//带小数点的数：double  printf("%f",...)  scanf("%lf",...) 
