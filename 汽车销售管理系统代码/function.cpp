#include "header.h"

void InitList(SqList *&L)	//车辆初始化 
{
	L=(SqList *)malloc(sizeof(SqList));	
	L->length=0;
}

void InitList2(SqListb *&SL)	//用户初始化
{
	SL=(SqListb *)malloc(sizeof(SqListb));
	SL->lengthb=0;
}


int registers(SqListb *&SL,users &g)//注册
{
	system("color 5E");
	users f,e;
	int i,j;
	system("cls");
	printf("账号：");
	scanf("%s",&e.id);
	for(j=0;j<SL->lengthb;j++)
	{	
		f=SL->datab[j];
		if(strcmp(e.id,f.id)==0)
		{
			printf("这个账号已有！\n");
			return 1;
		}
	}
	i=SL->lengthb+1;
	SL->lengthb=SL->lengthb+1;
	e.no=SL->lengthb;
	printf("密码：");
	scanf("%s",&e.pwd);
	printf("生日：");
	scanf("%s",&e.birthday);
	printf("邮箱：");
	scanf("%s",&e.email);
	SL->datab[i-1]=e;
	g=SL->datab[i-1];
	system("pause");
	return 1;
}

int signin(SqListb *&SL,users g)//登录
{
	system("cls");
	system("color 5E");
	users e,f;
	char x[20];
	int j,k=0;
	while(1)
	{
		printf("请输入账号：");
		scanf("%s",&e.id);
		for(j=0;j<SL->lengthb;j++)
		{	
			f=SL->datab[j];
			if(strcmp(e.id,f.id)==0)
			{
				k=k+1;
				e=SL->datab[j];
			}
		}
		if(k==0)
		{
			printf("该帐号不存在！请重新输入！\n");
			continue;
		}
		else
		{
			printf("密码：");
			scanf("%s",x);
			if(strcmp(g.pwd,x)!=0)
				printf("密码错误！登录失败！\n");
			else
			{
				system("cls");
				printf("登陆成功！\n");
				return 1;
			}
		}			
	}
	printf("登录成功！\n");
	return 1;
}

void shuchucar(SqList *L)//查看所有车辆信息
{
	system("color 5E");
	int i;
	vehicle e;
	for(i=0;i<L->length;i++)
	{
		e=L->data[i];
		printf("编号：%d\n",e.number);
		printf("==============================\n");
		printf("品牌：%s\n",e.brand);
		printf("配置：%s\n",e.configure);
		printf("价格：%d\n",e.money);
		printf("折扣：%d\n",e.discount);
		printf("剩余：%d\n",e.inventory);
		printf("==============================\n");
		printf("\n");
	}
}

void shuchu(SqListb *SL)//查看所有用户信息 
{
	system("color 5E");
	int i;
	users e;
	for(i=0;i<SL->lengthb;i++)
	{
		e=SL->datab[i];
		printf("             %s的个人信息           \n",e.id);
		printf("====================================\n");
		printf("编号：%d\n",e.no);
		printf("账号：%s\n",e.id);
		printf("邮箱：%s\n",e.email);
		printf("生日： %s\n",e.birthday);
		printf("====================================\n");
		printf("\n");
	}
}

void buy(SqList *&L,SqListb *&SL)//购买车辆
{
	system("color 5E");
	int i,j=-1;
	vehicle r;
	int f;
	while(1)
	{
		printf("输入要买的车辆编号：");
		scanf("%d",&f);
		for(i=0;i<L->length;i++)
		{
			r=L->data[i];
			if(r.number==f&&r.inventory!=0)
				j=i;
		}
		if(j!=-1)
		{
			r=L->data[j];
			r.inventory=r.inventory-1;
			L->data[j]=r;
			printf("购买成功！\n");
			SL->datab[j].purchase[j]=L->data[j];
			break;
		}
		else
			printf("购买失败！重新输入车辆编号！\n");
			system("pause");
			system("cls");
	}
}

void query(users g)//用户端查看用户个人信息
{
	system("color 5E");
	int i=0;
	printf("            个人信息\n");
	printf("===================================================\n");
	printf("编号：%d\n",g.no); 
	printf("账号：%s\n",g.id);
	printf("密码：%s\n",g.pwd);
	printf("生日：%s\n",g.birthday);
	printf("邮箱：%s\n",g.email); 
	printf("===================================================\n");
}

void modifypasd(SqListb *&SL,users &g)//修改密码
{
	system("color 5E");
	users e;
	e=SL->datab[g.no-1];
	printf("输入修改后的密码：");
	scanf("%s",&e.pwd);
	SL->datab[g.no-1]=e;
	g=SL->datab[g.no-1];
}
void Delete(SqListb *&SL)//删除用户
{
	system("color 5E");
	int i,j=-1,x;
	users e;
	printf("输入要删除的用户编号：\n");
	scanf("%d",&x);
	for(i=0;i<SL->lengthb;i++)
	{
		e=SL->datab[i];
		if(e.no==x)
			j=i;
	};
	if(j!=-1)
		for(j;j<SL->lengthb-1;j++)
		{
			SL->datab[j].no=SL->datab[j+1].no;
			SL->datab[j]=SL->datab[j+1];
		}
	else
		printf("不存在该用户！\n");
	SL->lengthb=SL->lengthb-1;
}

void shuchu2(SqListb *SL)//查看所有用户购买记录
{
	system("color 5E");
	int i;
	users e;
	for(i=0;i<SL->lengthb;i++)
	{
		e=SL->datab[i];
		printf("         %s的购买记录\n",e.id);
		printf("\n");
		printf("编号\t品牌\t配置\t价格\t折扣\t剩余\t\n"); 
		printf("-------------------------------------------------------\n");
		for(int i=0;i<SL->lengthb;i++)
		{
			printf("%d\t%s\t%s\t%d\t%d\t%d\t\n",e.purchase[i].number,e.purchase[i].brand,e.purchase[i].configure,e.purchase[i].money,e.purchase[i].discount,e.purchase[i].inventory);
		}
	}
}
void shuchu3(SqListb *SL)//查找某个用户购买记录
{
	system("color 5E");
	int i,n;
	users e;
	system("color 5E");
	printf("输入要查询的用户编号：");
	scanf("%d",&n);
	for(i=0;i<SL->lengthb;i++)
	{
		e=SL->datab[i];
		if(e.no==n)
		{
			printf("         %s的购买记录\n",e.id);
			printf("===============================\n");
			printf("编号：%d\n",e.purchase[i].number);
			printf("品牌：%s\n",e.purchase[i].brand);
			printf("配置：%s\n",e.purchase[i].configure);
			printf("价格：%d\n",e.purchase[i].money);
			printf("折扣：%d\n",e.purchase[i].discount);
			printf("剩余：%d\n",e.purchase[i].inventory);
			printf("===============================\n");
			printf("\n");
		}
		else
			printf("没有该用户！\n");
	}
}

void shuchu4(SqListb *SL)//查找某个用户信息 
{
	system("color 5E");
	int i,n;
	users e;
	printf("输入要查询的用户编号：");
	scanf("%d",&n);
	for(i=0;i<SL->lengthb;i++)
	{
		e=SL->datab[i];
		if(e.no==n)
		{
			printf("            编号为%d的个人信息\n",e.no);
			printf("==================================\n");
			printf("账号：%s\n",e.id);
			printf("生日：%s\n",e.birthday);
			printf("邮箱：%s\n",e.email);
			printf("====================================\n");
		}
		else
			printf("没有该用户！\n");
	}
}

void shuchu5(SqListb *SL)//用户端查看购买记录 
{
	system("color 5E");
	users e;
	printf("                  购买记录\n");
	printf("\n");
	printf("编号\t品牌\t配置\t价格\t折扣\t剩余\t\n"); 
	printf("----------------------------------------------------------------\n");
	for(int i=0;i<SL->lengthb;i++)
	{
		e=SL->datab[i];
		printf("%d\t%s\t%s\t%d\t%d\t%d\t\n",e.purchase[i].number,e.purchase[i].brand,e.purchase[i].configure,e.purchase[i].money,e.purchase[i].discount,e.purchase[i].inventory);
	}
}

void CSV(SqList *L)
{
	system("color 5E");
	int x,i;
	vehicle ve;
	char file_name[] = "车辆信息.csv";
	FILE *fp;
	fp = fopen(file_name,"r");
	if(!fp)
	{
		fprintf(stderr,"failed to open file for reading\n");
	}
	char line[MAX_LINE_SIZE];
	char *result = NULL;
	while(fgets(line,MAX_LINE_SIZE,fp)!=NULL)
	{
		result = strtok(line,",");
		while(result != NULL)
		{
			//编号 
			ve.number=atoi(result);
			printf("%d\t",ve.number);
			
			//品牌 
			result = strtok(NULL,",");
			x=strlen(result);
			for(i=0;i<x;i++)
				ve.brand[i]=result[i];
			ve.brand[i]='\0';
			printf("%s\t",ve.brand);	
			
			//配置 
			result = strtok(NULL,",");
			x=strlen(result);
			for(i=0;i<x;i++)
				ve.configure[i]=result[i];
			ve.configure[i]='\0';
			printf("%s\t",ve.configure);
			
			//价格 
			result = strtok(NULL,",");
			ve.money=atoi(result);
			printf("%d\t",ve.money);

			//折扣 
			result = strtok(NULL,",");
			ve.discount=atoi(result);
			printf("%d%%\t",ve.discount);

			//剩余 
			result = strtok(NULL,",");
			ve.inventory=atoi(result);
			printf("%d\t",ve.inventory);
			
			result = strtok(NULL,",");
		}
		L->data[L->length]=ve;
		L->length++;
		printf("\n");
	}
	fclose(fp);
}
