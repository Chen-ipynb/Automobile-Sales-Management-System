#include "header.h"

void InitList(SqList *&L)	//������ʼ�� 
{
	L=(SqList *)malloc(sizeof(SqList));	
	L->length=0;
}

void InitList2(SqListb *&SL)	//�û���ʼ��
{
	SL=(SqListb *)malloc(sizeof(SqListb));
	SL->lengthb=0;
}


int registers(SqListb *&SL,users &g)//ע��
{
	system("color 5E");
	users f,e;
	int i,j;
	system("cls");
	printf("�˺ţ�");
	scanf("%s",&e.id);
	for(j=0;j<SL->lengthb;j++)
	{	
		f=SL->datab[j];
		if(strcmp(e.id,f.id)==0)
		{
			printf("����˺����У�\n");
			return 1;
		}
	}
	i=SL->lengthb+1;
	SL->lengthb=SL->lengthb+1;
	e.no=SL->lengthb;
	printf("���룺");
	scanf("%s",&e.pwd);
	printf("���գ�");
	scanf("%s",&e.birthday);
	printf("���䣺");
	scanf("%s",&e.email);
	SL->datab[i-1]=e;
	g=SL->datab[i-1];
	system("pause");
	return 1;
}

int signin(SqListb *&SL,users g)//��¼
{
	system("cls");
	system("color 5E");
	users e,f;
	char x[20];
	int j,k=0;
	while(1)
	{
		printf("�������˺ţ�");
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
			printf("���ʺŲ����ڣ����������룡\n");
			continue;
		}
		else
		{
			printf("���룺");
			scanf("%s",x);
			if(strcmp(g.pwd,x)!=0)
				printf("������󣡵�¼ʧ�ܣ�\n");
			else
			{
				system("cls");
				printf("��½�ɹ���\n");
				return 1;
			}
		}			
	}
	printf("��¼�ɹ���\n");
	return 1;
}

void shuchucar(SqList *L)//�鿴���г�����Ϣ
{
	system("color 5E");
	int i;
	vehicle e;
	for(i=0;i<L->length;i++)
	{
		e=L->data[i];
		printf("��ţ�%d\n",e.number);
		printf("==============================\n");
		printf("Ʒ�ƣ�%s\n",e.brand);
		printf("���ã�%s\n",e.configure);
		printf("�۸�%d\n",e.money);
		printf("�ۿۣ�%d\n",e.discount);
		printf("ʣ�ࣺ%d\n",e.inventory);
		printf("==============================\n");
		printf("\n");
	}
}

void shuchu(SqListb *SL)//�鿴�����û���Ϣ 
{
	system("color 5E");
	int i;
	users e;
	for(i=0;i<SL->lengthb;i++)
	{
		e=SL->datab[i];
		printf("             %s�ĸ�����Ϣ           \n",e.id);
		printf("====================================\n");
		printf("��ţ�%d\n",e.no);
		printf("�˺ţ�%s\n",e.id);
		printf("���䣺%s\n",e.email);
		printf("���գ� %s\n",e.birthday);
		printf("====================================\n");
		printf("\n");
	}
}

void buy(SqList *&L,SqListb *&SL)//������
{
	system("color 5E");
	int i,j=-1;
	vehicle r;
	int f;
	while(1)
	{
		printf("����Ҫ��ĳ�����ţ�");
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
			printf("����ɹ���\n");
			SL->datab[j].purchase[j]=L->data[j];
			break;
		}
		else
			printf("����ʧ�ܣ��������복����ţ�\n");
			system("pause");
			system("cls");
	}
}

void query(users g)//�û��˲鿴�û�������Ϣ
{
	system("color 5E");
	int i=0;
	printf("            ������Ϣ\n");
	printf("===================================================\n");
	printf("��ţ�%d\n",g.no); 
	printf("�˺ţ�%s\n",g.id);
	printf("���룺%s\n",g.pwd);
	printf("���գ�%s\n",g.birthday);
	printf("���䣺%s\n",g.email); 
	printf("===================================================\n");
}

void modifypasd(SqListb *&SL,users &g)//�޸�����
{
	system("color 5E");
	users e;
	e=SL->datab[g.no-1];
	printf("�����޸ĺ�����룺");
	scanf("%s",&e.pwd);
	SL->datab[g.no-1]=e;
	g=SL->datab[g.no-1];
}
void Delete(SqListb *&SL)//ɾ���û�
{
	system("color 5E");
	int i,j=-1,x;
	users e;
	printf("����Ҫɾ�����û���ţ�\n");
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
		printf("�����ڸ��û���\n");
	SL->lengthb=SL->lengthb-1;
}

void shuchu2(SqListb *SL)//�鿴�����û������¼
{
	system("color 5E");
	int i;
	users e;
	for(i=0;i<SL->lengthb;i++)
	{
		e=SL->datab[i];
		printf("         %s�Ĺ����¼\n",e.id);
		printf("\n");
		printf("���\tƷ��\t����\t�۸�\t�ۿ�\tʣ��\t\n"); 
		printf("-------------------------------------------------------\n");
		for(int i=0;i<SL->lengthb;i++)
		{
			printf("%d\t%s\t%s\t%d\t%d\t%d\t\n",e.purchase[i].number,e.purchase[i].brand,e.purchase[i].configure,e.purchase[i].money,e.purchase[i].discount,e.purchase[i].inventory);
		}
	}
}
void shuchu3(SqListb *SL)//����ĳ���û������¼
{
	system("color 5E");
	int i,n;
	users e;
	system("color 5E");
	printf("����Ҫ��ѯ���û���ţ�");
	scanf("%d",&n);
	for(i=0;i<SL->lengthb;i++)
	{
		e=SL->datab[i];
		if(e.no==n)
		{
			printf("         %s�Ĺ����¼\n",e.id);
			printf("===============================\n");
			printf("��ţ�%d\n",e.purchase[i].number);
			printf("Ʒ�ƣ�%s\n",e.purchase[i].brand);
			printf("���ã�%s\n",e.purchase[i].configure);
			printf("�۸�%d\n",e.purchase[i].money);
			printf("�ۿۣ�%d\n",e.purchase[i].discount);
			printf("ʣ�ࣺ%d\n",e.purchase[i].inventory);
			printf("===============================\n");
			printf("\n");
		}
		else
			printf("û�и��û���\n");
	}
}

void shuchu4(SqListb *SL)//����ĳ���û���Ϣ 
{
	system("color 5E");
	int i,n;
	users e;
	printf("����Ҫ��ѯ���û���ţ�");
	scanf("%d",&n);
	for(i=0;i<SL->lengthb;i++)
	{
		e=SL->datab[i];
		if(e.no==n)
		{
			printf("            ���Ϊ%d�ĸ�����Ϣ\n",e.no);
			printf("==================================\n");
			printf("�˺ţ�%s\n",e.id);
			printf("���գ�%s\n",e.birthday);
			printf("���䣺%s\n",e.email);
			printf("====================================\n");
		}
		else
			printf("û�и��û���\n");
	}
}

void shuchu5(SqListb *SL)//�û��˲鿴�����¼ 
{
	system("color 5E");
	users e;
	printf("                  �����¼\n");
	printf("\n");
	printf("���\tƷ��\t����\t�۸�\t�ۿ�\tʣ��\t\n"); 
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
	char file_name[] = "������Ϣ.csv";
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
			//��� 
			ve.number=atoi(result);
			printf("%d\t",ve.number);
			
			//Ʒ�� 
			result = strtok(NULL,",");
			x=strlen(result);
			for(i=0;i<x;i++)
				ve.brand[i]=result[i];
			ve.brand[i]='\0';
			printf("%s\t",ve.brand);	
			
			//���� 
			result = strtok(NULL,",");
			x=strlen(result);
			for(i=0;i<x;i++)
				ve.configure[i]=result[i];
			ve.configure[i]='\0';
			printf("%s\t",ve.configure);
			
			//�۸� 
			result = strtok(NULL,",");
			ve.money=atoi(result);
			printf("%d\t",ve.money);

			//�ۿ� 
			result = strtok(NULL,",");
			ve.discount=atoi(result);
			printf("%d%%\t",ve.discount);

			//ʣ�� 
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
