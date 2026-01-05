#include <stdio.h>
#include <math.h>

/*int main(){
    int i;
    int ary1[5];
    double total;
    double avg;

    for(i=0;i<5;i++){
        scanf("%d",&ary1[i]);
    }
    
    for(i=0;i<5;i++){
        total+=ary1[i];
    }
    
    avg=total/5;
    
    for(i=0;i<5;i++){
        printf("%5d",ary1[i]);
    }
    printf("\n");
    printf("%lf",total);
    printf("avg : %lf\n",avg);

    return 0;
}*/

/*int main(){
    int score[5];
    int i, total=0;
    double avg;
    int count;

    count=sizeof(score)/sizeof(score[0]);

    for(i=0;i<count;i++){
        scanf("%d",&score[i]);
    }

    for(i=0;i<count;i++){
        total+=score[i];
    }
    
    avg=total/(double)count; 
    
    for(i=0;i<count;i++){
        printf("%5d",score[i]);
    }
    printf("\n");
    printf("%5d",total);
    printf("avg : %lf\n",avg);

    return 0;
}*/

/*int main(){
    char str[80]="applejam";
    
    printf("최초 : %s\n",str);
    printf("입력 : ");
    scanf("%s",str);
    printf("%s\n",str);
    printf("%c\n",str[6]);  //배열에서 문자 하나만 출력할 때에는 %c
    printf("%d\n",str[8]);  //배열에서 문자 하나를 아스키 코드로 출력할 때에는 %d

    return 0;
}*/

/*int main(){
    char str[80]={'a','p','p'};

    printf("%d\n",str[4]);

    return 0;
}*/


#include <string.h>

/*int main(){
    char str1[80]="cat";
    char str2[80];

    strcpy(str1,"tiger");
    strcpy(str2,str1);
    printf("%s,%s\n",str1,str2);

    return 0;
}*/

/*int main(){
     char str[80];

    printf("입력 ㅣ ");
    //scanf("%s",str);
    //gets(str); //string 범위를 넘어서 다 집어넣음. 자제력이 없음.오버플로우 발생-> 잘사용하지 않음
    //puts(str);
    fgets(str,sizeof(str),stdin); //gets의 단점 개선
    printf("문자열 ㅣ %s\n",str);


    return 0;
}*/

/*int main(){
    char str[5];
    
    str[0]='O';
    str[1]='K';
    printf("%s\n",str);

    return 0;
}*/

#include <stdlib.h>
#include <time.h>

/*int main(){
    srand(time(NULL));

    int r1=rand()%10;    //0~9
    int r2=rand()%100+1; //1~100
    int r3=rand()%21-10; //-10~10

    printf("%d\n",r1);
    printf("%d\n",r2);
    printf("%d\n",r3);

    return 0;
}*/

/*int main(){
    srand(time(NULL));
    int i,N;
    
    printf("데이터의 개수 : ");
    scanf("%d",&N);

    int data[N];
    
    //printf("데이터 : ");

    for(i=0;i<N;i++){
        data[i]=rand()%100;
        //scanf("%d",&data[i]);
    }

    int delta;
    int v_start=0,v_stop=0, v_sat=0;

    for(i=1;i<N;i++){
        delta=data[i]-data[i-1];
        if(delta>=10){
            printf("%3d km/h 급가속++\n",delta);
            v_start++;
        }
        else if(delta<=-10){
            printf("%3d km/h 급제동++\n",delta);
            v_stop++;
        }
        else{
            printf("%3d km/h 정속\n",delta);
            v_sat++;
        }
    }
    printf("급가속 : %d, 급제동 : %d, 정속 : %d\n",v_start,v_stop,v_sat);

    return 0;
}*/

/*int main(){
    srand(time(NULL));
    int i,N;
    
    printf("데이터의 개수 : ");
    scanf("%d",&N);

    int data[N];
    data[0]=0;
    int count=1;
    int mode=1;
    int vel_diff;
    int vel_lim=20;
   
    for(i=1;i<N;i++){
        if(count<=10&&mode==1){
            data[i]=data[i-1]+(rand()%vel_lim+1);
            count++;
        }
        else if(count>10&&mode==1){
            data[i]=data[i-1]+(rand()%(vel_lim+1)-vel_lim);
            vel_diff=data[i]-data[i-1];
            if(vel_diff>=0){
                count++;
            }           
            else{
                mode=2;
                count=1;
            } 
        }
        else if(count<=10&&mode==2){
            data[i]=data[i-1]-(rand()%vel_lim+1);
            vel_diff=data[i]-data[i-1];
            count++;
        }
        else if(count>10&&mode==2){
            data[i]=data[i-1]+(rand()%(vel_lim+1)-vel_lim);
            vel_diff=data[i]-data[i-1];
            if(vel_diff<0){
                count++;
            }
            else{
                mode=1;
                count=1;
            }
        }
    }

    int delta;
    int v_start=0,v_stop=0, v_sat=0;

    for(i=1;i<N;i++){
        delta=data[i]-data[i-1];
        if(delta>=5){
            printf("%d. %3d -> %3d, %3d km/h 급가속++\n",i,data[i-1],data[i],delta);
            v_start++;
        }
        else if(delta<=-5){
            printf("%d. %3d -> %3d, %3d km/h 급제동++\n",i,data[i-1],data[i],delta);
            v_stop++;
        }
        else{
            printf("%d. %3d -> %3d, %3d km/h 정속\n",i,data[i-1],data[i],delta);
            v_sat++;
        }
    }
    printf("급가속 : %d, 급제동 : %d, 정속 : %d\n",v_start,v_stop,v_sat);

    return 0;
}*/

int main(){
    int i,N;
    int warming=0;

    printf("데이터의 개수 : ");
    scanf("%d",&N);

    int data[N];
    printf("데이터 : ");

    for(i=0;i<N;i++){
        scanf("%d",&data[i]);
    }

    for(i=0;i<10;i++){
        if(warming==0&&data[i]<=30){
            warming=1;
        }
        else if(warming==1&&data[i]>=35){
            warming=0;
        }

        if(warming==1){
            printf("배터리 잔량 : %d, warming\n",data[i]);
        }
        else{
            printf("배터리 잔량 : %d, safe\n",data[i]);
        }
        
    }
    return 0;    
}

// int main() {
//     srand(time(NULL));

//     int vel = 0;
//     int prev_vel = 0;

//     int mode = 1;       // 1: 가속, 2: 감속
//     int count = 0;
//     int vel_lim = 20;

//     int step = 1;

//     while (1) {

//         prev_vel = vel;

//         if (mode == 1) {
//             vel += rand() % vel_lim + 1;
//             count++;

//             if (count >= 10 && rand() % 2 == 0) {
//                 mode = 2;
//                 count = 0;
//             }
//         }
//         else {
//             vel -= rand() % vel_lim + 1;
//             count++;

//             if (vel <= 0) {
//                 vel = 0;
//             }
//             else if (count >= 10 && rand() % 2 == 0) {
//                 mode = 1;
//                 count = 0;
//             }
//         }

//         int delta = vel - prev_vel;

//         if (delta >= 5) {
//             printf("%2d. %3d -> %3d (%3d) 급가속\n", step, prev_vel, vel, delta);
//         }
//         else if (delta <= -5) {
//             printf("%2d. %3d -> %3d (%3d) 급제동\n", step, prev_vel, vel, delta);
//         }
//         else {
//             printf("%2d. %3d -> %3d (%3d) 정속\n", step, prev_vel, vel, delta);
//         }

//         step++;

//         if (vel == 0) {
//             printf("\n 차량 정지 \n");
//             break;
//         }
//     }

//     return 0;
// }