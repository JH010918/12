#include <stdio.h>
#include <math.h>

int clip(int x, int min, int max){
    if(x<min) return min;
    if(x>max) return max;
    return x;
}

/*int main(void){

    int N_m;
    double mess,T_m,G,eff,rad,c,sf;
    const double g=9.81;

    printf("총 질량 [kg] : ");  if(scanf("%lf",&mess)!=1) return 1;
    printf("모터 정격토크 [N.m] : ");   if(scanf("%lf",&T_m)!=1) return 1;
    printf("구동 모터 수 : ");  if(scanf("%d",&N_m)!=1) return 1;
    printf("감속비 : ");    if(scanf("%lf",&G)!=1) return 1;
    printf("구동 효율 [0~1] : ");   if(scanf("%lf",&eff)!=1) return 1;
    printf("바퀴 반지름 [m] : ");   if(scanf("%lf",&rad)!=1) return 1;
    printf("구름계수 : ");  if(scanf("%lf",&c)!=1) return 1;
    printf("안전계수 : "); if(scanf("%lf",&sf)!=1) return 1;

    if (mess<=0||T_m<=0||N_m<=0||G<=0||eff<=0||eff>1||rad<=0||c<0||sf<1){
        printf("입력값 범위를 확인하세요\n");
        return 1;
    }

    double T_tot=N_m*T_m*G*eff;
    double F_avail=T_tot/rad;
    double sin_theta=((F_avail/sf)-c*mess*g)/(mess*g);
    double theta_rad=asin(sin_theta);
    double theta_deg=theta_rad*180/3.14;
    double grade=tan(theta_rad)*100;

    printf("총 구동 토크 : %.2lf N.m\n",T_tot);
    printf("총 가용 견인력 : %.2lf N\n",F_avail);
    printf("등판 가능 최대각 [deg] : %.2lf\n",theta_deg);
    printf("등판율 : %.2lf %%n",grade);

    return 0;
}*/

/*int main(void){
    double rad,W,e_l,e_r,L;
    double pi=3.14;

    printf("바퀴 반지름 [m] : "); if(scanf("%lf",&rad)!=1) return 1;
    printf("트랙폭 [m] : "); if(scanf("%lf",&W)!=1) return 1;
    printf("좌측 바퀴 오차율 [%%] : "); if(scanf("%lf",&e_l)!=1) return 1;
    printf("우측 바퀴 오차율 [%%] : "); if(scanf("%lf",&e_r)!=1) return 1;
    printf("목표 주행 거리 [m] : "); if(scanf("%lf",&L)!=1) return 1;

    double e_le=e_l/100,e_ri=e_r/100;
    double D_l=rad*(1+e_le),D_r=rad*(1+e_ri);
    double R_c=(W/2)*(D_l+D_r)/(D_r-D_l);
    double del_rad=L/R_c;
    double del_deg=del_rad*180/pi;
    double d_drift=R_c*(1-cos(del_rad));

    printf("좌/우 바퀴 반경 : %lf m / %lf m\n",D_l,D_r);
    printf("곡률반경 : %.2lf m\n",R_c);
    printf("편류각 : %.2lf deg\n",del_deg);
    printf("편류거리 : %.2lf m\n",d_drift);

    return 0;
}*/

/*int main(void){
    int a=1;
    while (a<10){
        a*=2;
    }
    printf("a:%d\n",a);

    return 0;
}*/

/*int main(void){
    int a=1;
    int i;

    for(i=0;i<3;i++){
        a*=2;
    }
    printf("%d\n",a);

    return 0;
}*/

/*int main(void){
    int a=1;

    do{
        a*=2;
    }while(a<10);
    printf("%d\n",a);

    return 0;
}*/

/*int main(void){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

/*int main(void){
    int i,j;
    printf("--------------\n");
    for(i=1;i<10;i++){
        printf("%d단\n",i);
        for(j=1;j<10;j++){
            printf("%d * %d = %d\n",i,j,i*j);
        }
        printf("--------------\n");
    }
    return 0;
}*/

/*int main(void){
    int i;
    int sum=0;

    for(i=1;i<=10;i++){
        sum+=i; //i=1,sum=1/i=2,sum=3/i=3,sum=6/i=4,sum=10/i=5,sum=15/
        if(sum>30)break;
    }
    printf("누적 값 : %d\n",sum);
    printf("더한 값 : %d\n",i);

    return 0;
}*/

/*int main(void){
    int i,sum=0;

    for(i=1;i<=10;i++){
        if((i%3)==0){
            continue;
        }
        sum+=i;
    }
    printf("%d\n",sum);

    return 0;
}*/

/*int main(void){
    int count=0;
    while(1){//for문도 되지만 while을 그냥 쓴다.
        printf("happy\n");
        count++;
        if(count==3)break;
    }
    return 0;
}*/

/*int main(void){
    int i,j;
    for(i=1;i<6;i++){
        for(j=1;j<6;j++){
            if((i==j)||i+j==6){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

//int sum(int x,int y);
/*int sum(int x,int y){
    int temp;
    temp=x+y;
    return temp;
}*/   //int sum(int x,int y); 선언 후 메인 함수 정의하고 sum 함수 정의도 가능함

/*int main(void){
    int a=10,b=20;
    int result;

    result=sum(a,b);
    printf("%d\n",result);

    return 0;
}*/

int avg(int x,int y){
    int temp;
    temp=(x+y)/2;
    return temp;
}

/*int main(void){
    double a,b;
    double result;

    printf("1 : "); if(scanf("%lf",&a)!=1)return 1;
    printf("2 : "); if(scanf("%lf",&b)!=1)return 1;

    result=avg(a,b);
    printf("입력 : %.2lf, %.2lf\n",a,b);
    printf("평균 : %.2lf\n",result);

    return 0;
}*/

#define PI 3.14159265358979323846

double degree(double x){
    double temp;
    temp=x*180/PI;
    return temp;
}

double radian(double x){
    double temp;
    temp=x*PI/180;
    return temp;
}

/*int main(void){
    int sel;
    double rad,deg;
    double res;
    printf("1. radian->degree   2. degree->radian\n");
    scanf("%d",&sel);
    if(sel==1){
        printf("radian : ");
        scanf("%lf",&rad);
        res=degree(rad);
        printf("degree : %.2lf\n",res);
    }
    else if(sel==2){
        printf("degree : ");
        scanf("%lf",&deg);
        res=radian(deg);
        printf("radian : %.2lf\n",res);
    }
    else{
        printf("1번과 2번 중 고르시오\n");
    }

    return 0;
}*/

int get_num(){
    int num;

    printf("양수입력 : "); if(scanf("%d",&num)!=1)return 1;

    return num;
}

void print_char(char ch, int count){
    int i;

    for(i=0;i<count;i++){
        printf("%c",ch);
    }
    printf("\n");
    return;
}

/*int main(){
    print_char('@',5);

    return 0;
}*/

void print_line(void){
    int i;

    for(i=0;i<50;i++){
        printf("-");
    }
    printf("\n");
}

/*int main(){
    print_line();
    printf("ss\n");
    print_line();

    return 0;
}*/

void fruit(){
    printf("apple\n");
    fruit();
}

/*int main(){
    int ary[5];

    ary[0]=10,ary[1]=20;
    ary[2]=ary[0]+ary[1];
    scanf("%d",&ary[3]);

    printf("%d\n",ary[2]);
    printf("%d\n",ary[3]);
    printf("%d\n",ary[4]);
}*/

int main(void){
    int res;
    int i;
    int ary[10];

    for(i=0;i<10;i++){
        res=get_num();
        ary[i]=res;
    }
    printf("반환값 : ");
    for(i=0;i<10;i++){
    printf("%d, ",ary[i]);
    }
    printf("?\n");
    return 0;
}