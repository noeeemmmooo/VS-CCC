#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//(1) ��n�׳�
//int main()
//{
//	int i, n,sum;
//	i = 1;
//	scanf("%d", &n);
//	int ret = 1;
//	//��׳˺�
//	for (i = 1; 1 <= n; i++)
//	{
//		ret = 1; //ÿ��doѭ��������½�ret�Ƴ�1�ٴ������׳�
//		         //��ret=1�Ļ����ϲ��ܽ��׳˼�����ȷ������������һ�ν׳�ֵ����
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

////  �Ľ�  
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

////���ֲ���
////Ѱ������������ĳȷ������n
////��7
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//��������
//	int a = 7; //���ҵ���
//	int sz = sizeof(arr) / sizeof(arr[0]);//��ȡ������Ԫ�ظ���
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
//		else   //���ʱ
//		{
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	
//	return 0;
//}


////���������м���δ�ӡ�ַ���
////welcome to bit !!!!!!!
//
//#include <string.h> //����strlen����
//#include <windows.h>//����Sleep����
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
//		Sleep(1000); //��ͣ����Ϣ����λΪ����,��˯��1s
//		system("cls"); //�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

////����һ���������û���¼ҳ���������룬���Σ��������˳�����
////��������Ϊ1234567
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
//		printf("����������:>");
//		scanf("%s", password);
//		//if (password == "1234567")  �����ַ����Ƚϲ����� == ����strcmp
//		if(strcmp(password,"1234567") == 0)
//		{
//			printf("������ȷ,��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������!\n");
//			Sleep(1000);
//			system("cls");
//		}
//	}
//	if (i == 3)
//	{
//		printf("��������������󣬳����˳�\n");
//	}
//	return 0;
//}

//������С��Ϸ��
//1.�������1��1��100����
//2.������
//a.�¶��ˣ���ϲ�㣡��Ϸ����
//b.�´��ˣ���������˻���С�ˣ������£�֪���¶�
//3.��Ϸ����һֱ�꣬�����˳���Ϸ

//#include <stdlib.h>
//#include <time.h>
//void game()
//{
//	//��������Ϸ
//	int guess;
//	int ret = rand() % 100 + 1;//����������ֺ���,��������
//	//���ɷ�ΧΪ 0��32767 ������ %100��������Χһ����0��99���ټ�1��0��100���������
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�\n");
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
//	      //ʹ��srand������Ϊrand��������һ�������������������ʹrand����ʹ��
//	      //Ϊ��ʹsrand��Ҳ�������ֵ��ʹ��ʱ���������ʱ��仯�������ڿ�ʼ��ʹÿ����Ϸ��ʼ��ʱ��������ٸı䣬������ÿ���������ֲ����ر����
//	srand((unsigned int) time(NULL));//time()��������ʱ�����NULLΪ��ֵ����ʹ����ԭ����
//	                  //srandʹ��unsigned int���ͣ���timeʹ��int��������Ҫǿ��ת��
//	do
//	{
//		menu();//��ӡ�˵�
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			printf("������Ϸ\n");
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

////�ҳ�����ӡ����100��200
//#include <math.h>
//int main()
//{
//	int i;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2) //ֻ�����������������
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0; //��������
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
//	goto flag;//��ֱ������flag��ִ��
//	//goto������̫��ʹ����̫�ң�������ʹ��
//	return 0;
//}


//���Թػ�
//���Կ�ʼ��cmd��������ʾ��
//shutdown -s -t 60 ����һ���Ӻ�ػ�
//shutdown -a  ȡ���ػ�ָ��

 #include <string.h>
 #include <stdlib.h>
int main()
{
	//�ػ�
	//c�����ṩsystem����-ִ��ϵͳ����d
	char input[20] = {0};//���������Ϣ
	system("shutdown -s -t 60");

//again:

	while (1)
	{
		printf("��ע�⣬��ĵ�����1�����ڹػ����������: exit ����ȡ���ػ�\n");
		scanf("%s", input);
		if (strcmp(input, "exit") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	//else
	//{
	//	goto again; //��ѭ����� goto
	//}

	return 0;
}


