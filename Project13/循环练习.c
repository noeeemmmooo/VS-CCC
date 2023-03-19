#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//(1) 求n阶乘
//int main()
//{
//	int i, n,sum;
//	i = 1;
//	scanf("%d", &n);
//	int ret = 1;
//	//求阶乘和
//	for (i = 1; 1 <= n; i++)
//	{
//		ret = 1; //每次do循环完后都重新将ret制成1再带入计算阶乘
//		         //在ret=1的基础上才能将阶乘计算正确，否则会带入上一次阶乘值计算
//		do
//		{
//			ret = ret * i;
//			i++;
//		} while (i <= n);
//		sum = sum + ret;
//	}
//	printf("%d",ret);
//
//	return 0;
//}

////  改进  
//int main()
//{
//	int i,n,sum,ret;
//	sum = 0;
//	ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d", sum);
//
//	return 0;
//}

////二分查找
////寻找有序数列中某确定数字n
////找7
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//创建数组
//	int a = 7; //查找的数
//	int sz = sizeof(arr) / sizeof(arr[0]);//获取数组中元素个数
//
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < a)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > a)
//		{
//			right = mid - 1;
//		}
//		else   //相等时
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	
//	return 0;
//}


////由两边向中间逐次打印字符串
////welcome to bit !!!!!!!
//
//#include <string.h> //引入strlen函数
//#include <windows.h>//引入Sleep函数
//int main()
//{
//	char arr1[] = "welcome to bit !!!!!!!";
//	char arr2[] = "######################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000); //表停留休息，单位为毫秒,即睡眠1s
//		system("cls"); //清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

////制作一个类似于用户登录页面输入密码，三次，超过则退出程序
////假设密码为1234567
//
//#include <windows.h>
//#include <string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		//if (password == "1234567")  两个字符串比较不能用 == ，用strcmp
//		if(strcmp(password,"1234567") == 0)
//		{
//			printf("输入正确,登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入!\n");
//			Sleep(1000);
//			system("cls");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码输入错误，程序退出\n");
//	}
//	return 0;
//}

//猜数字小游戏，
//1.随机生成1个1—100数字
//2.猜数字
//a.猜对了，恭喜你！游戏结束
//b.猜错了，告诉你大了还是小了，继续猜，知道猜对
//3.游戏可以一直完，除非退出游戏

//#include <stdlib.h>
//#include <time.h>
//void game()
//{
//	//猜数字游戏
//	int guess;
//	int ret = rand() % 100 + 1;//生成随机数字函数,返回整型
//	//生成范围为 0—32767 ，所以 %100，余数范围一定在0—99，再加1即0—100随机生成数
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//	}
//}
//
//void menu()
//{
//	printf("***************************\n");
//	printf("***************************\n");
//	printf("********* 1. play *********\n");
//	printf("********* 0. exit *********\n");
//	printf("***************************\n");
//	printf("***************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	      //使用srand函数先为rand函数设置一个随机数生成器，才能使rand正常使用
//	      //为了使srand中也设置随机值，使用时间戳（会随时间变化），放在开始，使每次游戏开始后时间戳不会再改变，这样，每次生成数字不会特别相近
//	srand((unsigned int) time(NULL));//time()函数调用时间戳，NULL为空值，不使用其原参数
//	                  //srand使用unsigned int类型，而time使用int，所以需要强制转换
//	do
//	{
//		menu();//打印菜单
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			printf("进入游戏\n");
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

////找出并打印素数100—200
//#include <math.h>
//int main()
//{
//	int i;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2) //只有奇数项可能有素数
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0; //不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d \n", i);
//			count++;
//		}
//	}
//	printf("%d", count);
//
//	return 0;
//}

//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//
//	goto flag;//会直接跳到flag再执行
//	//goto语句会跳太多使代码太乱，不建议使用
//	return 0;
//}


//电脑关机
//电脑开始处cmd，命令提示符
//shutdown -s -t 60 设置一分钟后关机
//shutdown -a  取消关机指令

 #include <string.h>
 #include <stdlib.h>
int main()
{
	//关机
	//c语言提供system（）-执行系统命令d
	char input[20] = {0};//存放输入信息
	system("shutdown -s -t 60");

//again:

	while (1)
	{
		printf("请注意，你的电脑在1分钟内关机，如果输入: exit ，就取消关机\n");
		scanf("%s", input);
		if (strcmp(input, "exit") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	//else
	//{
	//	goto again; //用循环替代 goto
	//}

	return 0;
}


