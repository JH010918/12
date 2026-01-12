#include <stdio.h>

// main(){
//     int ary[5];

//     printf("ary의 값 : %u/t",ary);
//     printf("주소 : %u\n",&ary);
//     printf("ary+1 : %u\t",ary+1);
//     printf("&ary + 1 : %u\n",&ary+1);
//     return 0;
// }

// void print_ary(int(*)[4]);

// int main(){
//     int ary[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//     print_ary(ary);
    
//     return 0;
// }

// void print_ary(int(*pa)[4]){

// }

// int main(){
//     int a=10;
//     double b=3.5;
//     void *vp;

//     vp=&a;
//     printf("a : %d\n",*(int *)vp);

//     vp=&b;
//     printf("b : %.1lf\n",*(double *)vp);

//     return 0;
// }

#include <stdlib.h>

// int main(){
//     int *pi;
//     double *pd;

//     pi=(int *)malloc(sizeof(int));
//     if(pi==NULL){
//         printf(" memoney down.\n");
//         exit(1);
//     }
//     pd=(double*)malloc(sizeof(double));

//     *pi=10;
//     *pd=3.4;

//     printf("%d\n",*pi);
//     printf("%.1lf\n",*pd);

//     free(pi);
//     free(pd);

//     return 0;
// }

// int main(){
//     int *pi;
//     int size=5;
//     int count=0;
//     int num;
//     int i;

//     pi=(int*)calloc(size,sizeof(int));
//     while(1){
//         printf("양수만 입력하세요 -> ");
//         scanf("%d",&num);
//         if(num<=0) break;
//         if(count==size){
//             size+=5;
//             pi=(int*)realloc(pi,size*sizeof(int));
//         }
//         pi[count++]=num;
//     }
//     for(i=0;i<count;i++){
//         printf("%5d",pi[i]);
//     }
//     free(pi);

//     return 0;
// }

// int main(){
//     char temp[80];
//     char *str[3];
//     int i;

//     for(i=0;i<3;i++){
//         printf("enter string : ");
//         gets(temp);
//         str[i]=(char *)malloc(strlen(temp)+1);
//         strcpy(str[i],temp);
//     }

//     for(i=0;i<3;i++){
//         printf("%s\n",str[i]);
//     }

//     for(i=0;i<3;i++){
//         free(str[i]);
//     }

//     return 0;
// }

// int main(){
//     int ary[3]={10,20,30};
//     int *p=ary;

//     printf("%d\n",++*p);
//     printf("%d\n",*p++);
//     printf("%d\n",(*p)++);
//     printf("%d\n",*p);

//     return 0;
// }

// int main(){
//     int ary[2][3]={{1,2,3},{4,5,6}};
//     int (*p)[3]=ary;

//     printf("%d\n",(*(*p+1)+1));

//     return 0;
// }

#include <time.h>

// int main(){
//     int data_count,i;
//     int mode=1; //up : 1, down : 0
//     int count=1;

//     srand(time(NULL));
//     printf("data 개수 : ");
//     scanf("%d",&data_count);

//     double distance[data_count];
//     distance[0]=10;
//     double dist_diff;

//     for(i=1;i<=data_count;i++){
//         if(mode==1&&count<=10){
//             distance[i]=distance[i-1]+rand()%11;
//             count++;
//         }
//         else if(mode==1&&count>10){
//             distance[i]=distance[i-1]+rand()%21-10;
//             dist_diff=distance[i]-distance[i-1];
//             if(dist_diff>=0){
//                 count++;
//             }
//             else{
//                 mode=0,count=1;
//             }
//         }
//         else if(mode==0&&count<=10){
//             distance[i]=distance[i-1]-rand()%11;
//             count++;
//         }
//         else if(mode==0&&count>10){
//             distance[i]=distance[i-1]+rand()%21-10;
//             dist_diff=distance[i]-distance[i-1];
//             if(dist_diff>=0){
//                 count++;
//             }
//             else{
//                 mode=1,count=1;
//             }
//         }
//         if(distance[i]<0){
//             distance[i]=1;
//         }
//         if((i)%5!=0){
//             printf("%4d deg %.2lf cm",i,distance[i-1]);
//         }
//         else{
//             printf("%4d deg %.2lf cm",i,distance[i-1]);
//             printf("\n");
//         }
//     }

//     double data_min=distance[0];
//     int min_num=1;

//     for(i=1;i<data_count;i++){
//         if(data_min>=distance[i]){
//             data_min=distance[i];
//             min_num=i+1;
//         }
//     }
//     printf("min : %d deg %.2lf m\n",min_num,data_min);

//     return 0;   
// }

int main(){
    int data_count,i;

    printf("data 개수 : ");
    scanf("%d",&data_count);

    int *dist;
    dist=(int*)malloc(data_count*sizeof(int));

    if(dist==NULL){
        printf("memory error\n");
        exit(1);
    }

    printf("enter data : ");

    for(i=0;i<data_count;i++){
        scanf("%d",&dist[i]);
    }

    int data_min=dist[0];
    int min_num=1;

    for(i=1;i<data_count;i++){
        if(dist[i]<=data_min){
            data_min=dist[i];
            min_num=i+1;
        }
    }

    printf("min : %d deg %d cm\n",min_num,data_min);

    free(dist);

    return 0;   
}