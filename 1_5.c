#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

/*int main(){
    int i,N,thr,count=0;
    double sum_index,avg;
    
    printf("센서 개수 : ");
    scanf("%d",&N);

    int value[N],label[N];
    printf("data value : ");
    for (i=0;i<N;i++){
        scanf("%d",&value[i]);
    }
    printf("threshold : ");
    scanf("%d",&thr);
    
    for(i=0;i<N;i++){
        if(value[i]<thr){
            label[i]=1;
            count++;
        }
        else{
            label[i]=0;
        }
    }
    if(count==0){
        printf("라인 없음\n");
    }
    else{
        for(i=1;i<=N;i++){
            sum_index+=i*label[i-1];
        }
        avg=sum_index/(double)count;

        printf("label = ");
        for(i=0;i<N;i++){
            printf("%d ",label[i]);
        }
        printf("\n");
        printf("black_count = %d\n",count);
        printf("index_avg = %.2lf\n",avg);
    }   

    return 0;
}*/

/*int main(){
    int a;
    double b;
    char c;

    printf("%u\n",&a);
    printf("%u\n",&b);
    printf("%u\n",&c);

    return 0;
}*/

// int main(){
//     int a;
//     int *pa;    //포인터에는 주소만들어감, 값 X

//     pa=&a;      //a의 주소를 pa에 저장
//     *pa=120;    //*pa를 120으로 저장하는게 아니라 *pa에 들어있는 주소값에 저장

//     printf("%d\n",*pa);
//     printf("%d\n",a);

//     return 0;
// }

// int main(){
//     int a=10,b=15,total;
//     double avg;
//     int *pa,*pb;
//     int *pt=&total;
//     double *pg=&avg;

//     pa=&a;
//     pb=&b;

//     *pt=*pa+*pb;
//     *pg=*pt/2.0;

//     printf("value = %d, %d\n",*pa,*pb);
//     printf("sum = %d\n",*pt);
//     printf("avg = %.1lf\n",*pg);

//     return 0;
// }

// int main(){
//     int a;
//     int *pa;

//     pa=&a;
//     a=20;
//     printf("%d\n",*pa);
// }

// int main(){
//     char ch; int in; double db;

//     char *pc = &ch;
//     int *pi=&in;
//     double *pd=&db;
    
//     printf("%d\n",sizeof(&ch));
//     printf("%d\n",sizeof(&in));
//     printf("%d\n",sizeof(&db));
//     printf("%d\n",sizeof(pc));
//     printf("%d\n",sizeof(pi));
//     printf("%d\n",sizeof(pd));
//     printf("%d\n",sizeof(*pc));
//     printf("%d\n",sizeof(*pi));
//     printf("%d\n",sizeof(*pd));

//     return 0;
// }

// int main(){
//     int a=10;
//     //double b=(double)a;
//     int *p=&a;
//     //double *p=&b;
//     double *pd;

//     pd=(double*)p;  //int 형태를 double로 읽을 수가 없음. 그래서 다른값
//     printf("%lf\n",*pd);

//     return 0;
// }

// void swap(int a,int b){
//     int temp;

//     temp=a;
//     a=b;
//     b=temp;

//     //return temp;
// }
// int main(){
//     int x=10,y=20;
//     //int temp=
//     swap(x,y);

    
//     printf("%d, %d\n",x,y);
//     //printf("%d\n",temp);

//     return 0;
// }

// int main(){
//     int ary[3];
//     int *pa=ary;
//     int i;

//     *pa=10;
//     *(pa+1)=20;
//     pa[2]=pa[0]+pa[1];

//     for(i=0;i<3;i++){
//         printf("%5d",pa[i]);
//     }
//     printf("\n");
//     return 0;
// }

// int main(){
//     int ary[3]={10,20,30};
//     int *pa=ary;
//     int i;

//     printf(" value : ");
//     for(i=0;i<3;i++){
//         printf("%d ",*pa);
//         printf("%u ",pa);
//         pa++;
//     }
//     printf("%d",pa);
//     printf("\n");
//     return 0;
// }

int main(){
    int ary[5]={10,20,30,40,50};
    int *pa=ary;
    int *pb=pa+3;

    printf("pa : %u\n",pa);
    printf("pb : %u\n",pb);

    pa++;
    printf("pb-pa : %u\n",pb-pa);
    printf("value : ");
    if(pa<pb)printf("%d\n",*pa);
    else printf("%d\n",*pb);

    return 0;
}