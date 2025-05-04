#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>

#define LENcar 100
#define LENuser 100
#define LENpurchase 100
#define MAX_LINE_SIZE 100

struct admin //�û���¼��Ϣ 
{
	char idd[20]; //�˺� 
	char password[20]; //���� 
};

struct vehicle//������Ϣ
{
	int number;         //��� 
	char brand[20];       //Ʒ�� 
	char configure[20];    //���� 
	int money;          //�۸� 
	int discount;        //�ۿ� 
	int inventory;        //ʣ�� 
};

struct users //�û�ע����Ϣ 
{
	int no;            //��� 
    char id[20];      //�˺� 
    char pwd[20];      //���� 
	char birthday[20];      //���� 
	char email[20];      //���� 
	struct vehicle purchase[LENpurchase];         //�����¼ 
};

typedef struct    //����˳���  
{
	vehicle data[LENcar];
	int length;       
}SqList;

struct SqListb //�û�˳��� 
{
	users datab[LENuser];
	int lengthb;
};

void InitList(SqList *&L);   //������ʼ�� 
void InitList2(SqListb *&SL);   //�û���ʼ�� 
int registers(SqListb *&SL,users &g);   //ע�� 
int signin(SqListb *&SL,users g);   //��¼ 
void shuchucar(SqList *L);   //�鿴���г�����Ϣ 
void shuchu(SqListb *SL);   //�鿴�����û���Ϣ 
void buy(SqList *&L,SqListb *&SL);   //������ 
void query(users g);   //�û��˲鿴�û�������Ϣ
void modifypasd(SqListb *&SL,users &g);  //�޸�����
void Delete(SqListb *&SL);  //ɾ���û�
void shuchu2(SqListb *SL);  //�鿴�����û������¼
void shuchu3(SqListb *SL);  //����ĳ���û������¼
void shuchu4(SqListb *SL);  //����ĳ���û���Ϣ
void shuchu5(SqListb *SL);  //�û��˲鿴�����¼
int menu11(SqList *&L,SqListb *&SL,users &g); //�û��˵�
int menu12(SqList *&L,SqListb *&SL);//����Ա�˵� 
void Menu();//���˵� 
void menu1();//�û���ڲ˵� 
void CSV(SqList*L);//�ļ���ȡ 

