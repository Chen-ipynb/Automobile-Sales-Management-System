#include "header.h"

int menu11(SqList *&L,SqListb *&SL,users &g) //�û��˵� 
{
	system("color 5E");
	int i;
	do{	
		printf("                   �û��˵�                     \n");
		printf("================================================\n");
		printf("                 (1)��ѯ������Ϣ                    \n");
		printf("                 (2)������                    \n");
		printf("                 (3)��ѯ������Ϣ�������¼                \n");
		printf("                 (4)�޸�����                    \n");
		printf("                 (0)����������                  \n");
		printf("================================================\n");
		printf("����������ѡ��");
		scanf("%d",&i);
		switch(i)
		{
		case 1:
			system("cls");
			printf("���\tƷ��\t����\t�۸�\t�ۿ�\tʣ��\t\n");
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
			printf("�����������������룡\n");
			break;		
		}
	}while(1);				
}
int menu12(SqList *&L,SqListb *&SL)//����Ա�˵� 
{
	system("color 5E");
	int i;
	do{	
		printf("                 ����Ա�˵�                    \n");
		printf("===============================================\n");
		printf("              (1)�鿴�����û���Ϣ                \n");
		printf("              (2)��ѯĳ���û���Ϣ                 \n");
		printf("              (3)��ѯĳ���û������¼                  \n");
		printf("              (4)�鿴�����û������¼             \n");
		printf("              (5)ɾ��ĳ����Ա                    \n");
		printf("              (0)����������                     \n");
		printf("===============================================\n");
		printf("����������ѡ��");
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
				printf("�����������������룡\n");
				break;		
		}
	}while(1);
}

void Menu()//���˵� 
{
	system("color 5E");
	printf("                 �������۹���ϵͳ                     \n");
	printf("================================================\n");
	printf("                 (1) �û����                   \n");
	printf("                 (2) ����Ա���                     \n");
	printf("                 (0) �˳�ϵͳ                       \n");
	printf("================================================\n");
	printf("����������ѡ��");
}

void menu1()//�û���ڲ˵� 
{
	system("color 5E");
	printf("                    �û����                      \n");
	printf("================================================\n");
	printf("                 (1) ע��                    \n");
	printf("                 (2) ��¼                    \n");
	printf("                 (0) ������һ��              \n");
	printf("================================================\n");
}



