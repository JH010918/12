#include <stdio.h>
#define PI 3.1415926535897932

void wheel_vel();

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
        wheel_vel();
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

void wheel_vel(){
    printf("");
    double r,W,err_l,err_r,L;
    printf("바퀴 반지름[m] : ");
    scanf("%lf",&r);
    printf("트랙폭[m] : ");
    scanf("%lf",&W);
    printf("좌/우 바퀴 오차율(%%) : ");
    scanf("%lf %lf",&err_l,&err_r);
    printf("목표 주행 거리(m) : ");
    scanf("%lf",&L);
    if(r<=0||W<=0||err_l<0||err_r<0||err_l==err_r||L<=0) return;

    double rad_l=r*(1+err_l/100),rad_r=r*(1+err_r/100);
    double Rc=(W/2)*(rad_l+rad_r)/(rad_r-rad_l);
    double angle_drift=L/Rc*180/PI;

    printf("좌/우 바퀴 반경 : %lf m / %lf m\n",rad_l,rad_r);
    printf("곡률반경 : %lf m\n",Rc);
    printf("편류각 : %lf deg\n",angle_drift);
}