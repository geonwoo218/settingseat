#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int studentcount;
    int student[100]={0,};
    int seat[100]={0,};
    int startnumber;
	int i,j;
	
    printf("�л� ���� �Է��ϼ���: ");
    scanf("%d",&studentcount);

	printf("�й� ���� ��ȣ�� �Է��ϼ���: ");
	scanf("%d",&startnumber);
	
    if(studentcount>100){
        printf("�ִ� �л� ���� 100���Դϴ�.\n");
        return 1;
    }

    //�й� ����
    for(i = 0 ; i < studentcount ; i++){
        student[i] = startnumber +i;
    }

     //rand �Լ��� ���� �õ尪 ����
     srand(time(NULL));

     //�ڸ� ���� ��ġ
     for(i = 0;i<studentcount;i++){
     	seat[i]=rand()%studentcount+1;
     	for(j = 0;j<i;j++){
     		if(seat[i] == seat[j])
     		i--;
		 }
	 }

     printf("�ڸ� ��ġ ���: \n");
     for(i=0;i<studentcount;i++){
        printf("�й�: %d \t�ڸ�: %2d��\n",student[i],seat[i]);
     }

     return 0;
}

