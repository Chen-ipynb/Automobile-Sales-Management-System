#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>

#define LENcar 100
#define LENuser 100
#define LENpurchase 100
#define MAX_LINE_SIZE 100

struct admin //用户登录信息 
{
	char idd[20]; //账号 
	char password[20]; //密码 
};

struct vehicle//车辆信息
{
	int number;         //编号 
	char brand[20];       //品牌 
	char configure[20];    //配置 
	int money;          //价格 
	int discount;        //折扣 
	int inventory;        //剩余 
};

struct users //用户注册信息 
{
	int no;            //编号 
    char id[20];      //账号 
    char pwd[20];      //密码 
	char birthday[20];      //生日 
	char email[20];      //邮箱 
	struct vehicle purchase[LENpurchase];         //购买记录 
};

typedef struct    //车辆顺序表  
{
	vehicle data[LENcar];
	int length;       
}SqList;

struct SqListb //用户顺序表 
{
	users datab[LENuser];
	int lengthb;
};

void InitList(SqList *&L);   //车辆初始化 
void InitList2(SqListb *&SL);   //用户初始化 
int registers(SqListb *&SL,users &g);   //注册 
int signin(SqListb *&SL,users g);   //登录 
void shuchucar(SqList *L);   //查看所有车辆信息 
void shuchu(SqListb *SL);   //查看所有用户信息 
void buy(SqList *&L,SqListb *&SL);   //购买车辆 
void query(users g);   //用户端查看用户个人信息
void modifypasd(SqListb *&SL,users &g);  //修改密码
void Delete(SqListb *&SL);  //删除用户
void shuchu2(SqListb *SL);  //查看所有用户购买记录
void shuchu3(SqListb *SL);  //查找某个用户购买记录
void shuchu4(SqListb *SL);  //查找某个用户信息
void shuchu5(SqListb *SL);  //用户端查看购买记录
int menu11(SqList *&L,SqListb *&SL,users &g); //用户菜单
int menu12(SqList *&L,SqListb *&SL);//管理员菜单 
void Menu();//主菜单 
void menu1();//用户入口菜单 
void CSV(SqList*L);//文件读取 

