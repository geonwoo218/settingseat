#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int studentcount;
    int student[100]={0,};
    int seat[100]={0,};
    int startnumber;
	int i,j;
	
    printf("학생 수를 입력하세요: ");
    scanf("%d",&studentcount);

	printf("학번 시작 번호를 입력하세요: ");
	scanf("%d",&startnumber);
	
    if(studentcount>100){
        printf("최대 학생 수는 100명입니다.\n");
        return 1;
    }

    //학번 생성
    for(i = 0 ; i < studentcount ; i++){
        student[i] = startnumber +i;
    }

     //rand 함수를 위한 시드값 설정
     srand(time(NULL));

     //자리 랜덤 배치
     for(i = 0;i<studentcount;i++){
     	seat[i]=rand()%studentcount+1;
     	for(j = 0;j<i;j++){
     		if(seat[i] == seat[j])
     		i--;
		 }
	 }

     printf("자리 배치 결과: \n");
     for(i=0;i<studentcount;i++){
        printf("학번: %d \t자리: %2d번\n",student[i],seat[i]);
     }

     return 0;
}

