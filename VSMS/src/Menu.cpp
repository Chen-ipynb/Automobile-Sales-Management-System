#include "header.h"

int menu11(SqList *&L,SqListb *&SL,users &g) //用户菜单 
{
	system("color 5E");
	int i;
	do{	
		printf("                   用户菜单                     \n");
		printf("================================================\n");
		printf("                 (1)查询车辆信息                    \n");
		printf("                 (2)购买车辆                    \n");
		printf("                 (3)查询个人信息及购买记录                \n");
		printf("                 (4)修改密码                    \n");
		printf("                 (0)返回主界面                  \n");
		printf("================================================\n");
		printf("请输入您的选择：");
		scanf("%d",&i);
		switch(i)
		{
		case 1:
			system("cls");
			printf("编号\t品牌\t配置\t价格\t折扣\t剩余\t\n");
			printf("================================================\n");
			CSV(L); 
			system("pause");
			system("cls");
			break;
		case 2:
			system("cls");
			buy(L,SL);
			system("pause");
			system("cls");
			break;
		case 3:
			system("cls");
			query(g);
			shuchu5(SL);
			system("pause");
			system("cls");
			break;
		case 4:
			system("cls");
			modifypasd(SL,g);
			system("pause");
			system("cls");
			break;
		case 0:
			system("cls");
			return 1;
		default:
			printf("输入有误！请重新输入！\n");
			break;		
		}
	}while(1);				
}
int menu12(SqList *&L,SqListb *&SL)//管理员菜单 
{
	system("color 5E");
	int i;
	do{	
		printf("                 管理员菜单                    \n");
		printf("===============================================\n");
		printf("              (1)查看所有用户信息                \n");
		printf("              (2)查询某个用户信息                 \n");
		printf("              (3)查询某个用户购买记录                  \n");
		printf("              (4)查看所有用户购买记录             \n");
		printf("              (5)删除某个会员                    \n");
		printf("              (0)返回主界面                     \n");
		printf("===============================================\n");
		printf("请输入您的选择：");
		scanf("%d",&i);
		switch(i)
		{
			case 1:
				system("cls");
				shuchu(SL);
				system("pause");
				system("cls");
				break;
			case 2:
				system("cls");
				shuchu4(SL);
				system("pause");
				system("cls");
				break;
			case 3:
				system("cls");
				shuchu3(SL);
				system("pause");
				system("cls");
				break;
			case 4:
				system("cls");
				shuchu2(SL);
				system("pause");
				system("cls");
				break;
			case 5:
				system("cls");
				Delete(SL);
				system("cls");
				break;
			case 0:
				system("cls");
				return 1;
			default:
				printf("输入有误！请重新输入！\n");
				break;		
		}
	}while(1);
}

void Menu()//主菜单 
{
	system("color 5E");
	printf("                 车辆销售管理系统                     \n");
	printf("================================================\n");
	printf("                 (1) 用户入口                   \n");
	printf("                 (2) 管理员入口                     \n");
	printf("                 (0) 退出系统                       \n");
	printf("================================================\n");
	printf("请输入您的选择：");
}

void menu1()//用户入口菜单 
{
	system("color 5E");
	printf("                    用户入口                      \n");
	printf("================================================\n");
	printf("                 (1) 注册                    \n");
	printf("                 (2) 登录                    \n");
	printf("                 (0) 返回上一层              \n");
	printf("================================================\n");
}



