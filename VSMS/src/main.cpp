#include "header.h"

int main()
{
	struct admin c={"cyz","123"};
	SqList *L=NULL;
	SqListb *SL=NULL;
	InitList2(SL);
	InitList(L);
	users g;
	int i,j;
	char d[20],e[20];
	do{
		Menu();
		scanf("%d",&i);
		switch(i)
		{
			case 1:
				system("cls");
				menu1();
				printf("请输入您的选择：");
				scanf("%d",&j);
				while(1)
				{
					if(j==0)
					{
						system("cls");
						break;
					}
					else if(j==1)
					{
						registers(SL,g);
						system("cls");
						printf("注册成功！\n");
						menu11(L,SL,g);
						break;
					}
					else if(j==2)
					{
						signin(SL,g);
						menu11(L,SL,g);
						break;
					}
					else
						printf("输入错误！请重新输入！\n");
				} 
				break;
			case 2:
				system("cls");
				while(1)
				{
					printf("管理员账号:");
					scanf("%s",d);
					if(strcmp(c.idd,d)!=0)
						printf("账号错误！请重新输入！\n");
					else
						break;
				}
				while(1)
				{
					printf("密码：");
					scanf("%s",e);
					if(strcmp(c.password,e)!=0)
						printf("密码错误！请重新输入！\n");
					else
						break;
				}
				system("cls");
				printf("登录成功！\n");
				menu12(L,SL);
				break;
			case 0:
				exit(0);
			default:
				printf("输入错误！请重新输入！\n");
				break;		
		}
	}while(1);	
	return 0;
}

