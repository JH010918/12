#include <stdio.h>

/*int main(void)
{
    int a=10,b=20,res;

    res=(a-b==-10)?1:2;
    printf("big : %d\n",res);

    return 0;
}*/

/*int main(void)
{
    int a=10,b=12;

    printf("a&b:%d\n",a&b); //두 수를 2진수로 비교했을 때 둘 다 참(1000=8)
    printf("a^b:%d\n",a^b); //xor : 둘 중 하나만 참일 때 참(0110=6)
    printf("a|b\n");   //or : 둘 중 하나만 참이어도 참
    printf("~a\n");   //부정연산자 : 참과 거짓을 바꿔서 표현
    printf("a<<1\n");    //비트이동연산자 : 비트를 한칸 민다(00001010 -> 00010100)
    pritnf("a>>2\n");     //비트를 오른쪽으로 두칸 민다(00001010->00000010)

    return 0;
}*/

/*int main(void){
    int a=8, b=0;

    if(a>10){
        b=a;
    }
    else{
        b=1;
    }

    printf("a : %d, b : %d\n",a,b);

    return 0;
}*/

//플로우차트 : 마름모(조건), 네모(실행), 동그라미(시작/끝)

/*int main(void){
    int a=20,b=-1;

    if(a>10){
        if(b>=0){
            b=1;
        }
        else{
            b=-1;
        }
    }

    printf("a:%d,b:%d\n",a,b);

    return 0;
}*/

/*int main(void){
    int rank=4,m=0;

    switch(rank){
        case 1:
            m=300;
            break;
        case 2:
            m=200;
            break;
        case 3:
            m=100;
            break;
        default:
            m=10;
            break;
    }

    printf("m:%d\n",m);

    return 0;
}*/

/*int main(void){
    int wheel;
    double mess,sc,margin,tor,rate,rad,min,mortor;
    double c=0.018, g=9.81, W;

    printf("-----이동로못 설계 사양-----\n");
    printf("구동 바퀴 수 : ");
    scanf("%d",&wheel);
    printf("총 하중 (kg) : ");
    scanf("%lf",&mess);
    printf("안전계수 : ");
    scanf("%lf",&sc);
    printf("설계마진 : ");
    scanf("%lf",&margin);
    printf("\n-----모터 및 바퀴 사양-----\n");
    printf("모터 정격 토크 (N.m) : ");
    scanf("%lf",&tor);
    printf("감속비 : ");
    scanf("%lf",&rate);
    printf("바퀴 반지름 (m) : ");
    scanf("%lf",&rad);
    printf("------------------\n");

    W=mess*g;
    min=c*W*sc*margin;
    mortor=(tor*rate)/rad*wheel;

    printf("필요한 최소 견인력 : %.2lf [N]\n",min);
    printf("모터가 낼 수 있는 견인력 : %.2lf [N]\n",mortor);
    if(min<=mortor){
        printf("판정 : 만족\n");
    }
    else{
        printf("판정 : 불만족 (더큰 모터나 감속비가 필요합니다)\n");
    }

    return 0;
}*/

/*int main(void){
    double i_load,vel,R,V,C,eta;

    printf("-----사전 선정 정보-----\n");
    printf("평균전류 [A] : ");
    scanf("%lf",&i_load);
    printf("평균속도 [km/h] : ");
    scanf("%lf",&vel);
    printf("예비율 [0~1] : ");
    scanf("%lf",&R);
    printf("\n-----배터리 정보-----\n");
    printf("공칭 전압 V [V] : ");
    scanf("%lf",&V);
    printf("용량 [Ah] : ");
    scanf("%lf",&C);
    printf("시스템 효율 [0~1] : ");
    scanf("%lf",&eta);
    printf("\n-----결과-----\n");

    double E_usable=V*C*eta*(1-R),P=V*i_load/eta;

    printf("사용 가능 에너지(Wh) : %.2lf\n",E_usable);
    printf("소비전력(W) : %.2lf\n",P);

    double t=E_usable/P,d=vel*t;

    printf("런타임(h) : %.2lf\n",t);
    printf("주행거리(km) : %.2lf\n",d);
    int a=t/1;
    double b=(t-a)*60;
    printf("%d시간 %.0lf분\n",a,b);

    return 0;
}*/

#include <math.h>

int main(void){
    double x,y;

    printf("실수 x 입력 : ");
    scanf("%lf",&x);
    printf("실수 y 입력 : ");
    scanf("%lf",&y);

    printf("\n[math.h 함수 예제]\n");
    printf("sqrt(x)  = %.4f\n",sqrt(x));
    printf("pow(x,y) = %.4f\n",pow(x,y));
    printf("sin(x)   = %.4f\n",sin(x));
    printf("cos(x)   = %.4f\n",cos(x));
    printf("log(x)   = %.4f\n",log(x));
    printf("fabs(x)  = %.4f\n",fabs(x));
    

    return 0;
}