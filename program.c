#include <stdio.h>

int main(){
    int sel;

    printf("== 이동로봇 종합 계산기 ===\n");
    printf("1. 바퀴별 속도 계산\n");
    printf("2. 배터리 사용시간 계산\n");
    printf("3. 모터 토크 계산\n");
    printf("4. 센서 정규화 계산\n");
    printf("5. 오차율 계산\n");
    printf("0. 종료\n");
    printf("메뉴 선택 : ");
    scanf("%d",&sel);

    if(sel==1){
        printf("1");
    }
    else if(sel==2){
        printf("1");
    }
    else if(sel==3){
        printf("1");
    }
    else if(sel==4){
        printf("1");
    }
    else if(sel==5){
        printf("1");
    }
    else if(sel==0){
        printf("종료합니다.\n");
    }
    else{
        printf("잘못된 선택입니다.\n");
    }

    return 0;
}