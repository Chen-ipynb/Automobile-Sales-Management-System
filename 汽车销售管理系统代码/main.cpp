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
				printf("����������ѡ��");
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
						printf("ע��ɹ���\n");
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
						printf("����������������룡\n");
				} 
				break;
			case 2:
				system("cls");
				while(1)
				{
					printf("����Ա�˺�:");
					scanf("%s",d);
					if(strcmp(c.idd,d)!=0)
						printf("�˺Ŵ������������룡\n");
					else
						break;
				}
				while(1)
				{
					printf("���룺");
					scanf("%s",e);
					if(strcmp(c.password,e)!=0)
						printf("����������������룡\n");
					else
						break;
				}
				system("cls");
				printf("��¼�ɹ���\n");
				menu12(L,SL);
				break;
			case 0:
				exit(0);
			default:
				printf("����������������룡\n");
				break;		
		}
	}while(1);	
	return 0;
}

