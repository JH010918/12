#include <stdio.h>
#include <string.h>

// int main(){
//     char str1[80],str2[80];
//     char *resp;

//     printf("enter : ");
//     scanf("%s%s",str1,str2);
//     if(strlen(str1)>strlen(str2)){
//         resp=str1;
//     }
//     else{
//         resp=str2;
//     }
//     printf("fruit : %s\n",resp);

//     return 0;
// }

// int main(){
//     char str1[80],str2[80];
//     char *resp;
//     char str3[]={'a','\0','b','\0'};

//     printf("enter : ");
//     scanf("%s%s",str1,str2);
//     if(length(str1)>strlen(str2)){
//         resp=str1;
//     }
//     else{
//         resp=str2;
//     }
//     printf("fruit : %s\n",resp);

//     printf("%ld\n",strlen(str3));
//     return 0;
// }

int len(char str1[]){
    int i=0;
    int length=0;
    while(str1[i]!='\0'){
        length++;
        i++;
    }

    return length;
}

void copy(char str1[],char str2[]){
    int i=0;
    while(str2[i]!='\0'){
        str1[i]=str2[i];
        i++;
    }
    str1[i]='\0';
}

void n_copy(char str1[],char str2[],int n){
    int i;
    for(i=0;i<n;i++){
        str1[i]=str2[i];
    }
}

void cat(char str1[],char str2[]){
    int i;
    int n1=len(str1);
    int n2=len(str2);

    for(i=0;i<n2;i++){
        str1[n1+i]=str2[i];
    }
}

void n_cat(char str1[],char str2[],int n){
    int i;
    int length=len(str1);

    for(i=0;i<n;i++){
        str1[length+i]=str2[i];
    }
}

int cmp(char str1[],char str2[]){
    int i=0;
    while(str1[i]!='\0'&&str2[i]!='\0'){
        if(str1[i]==str2[i]){
            i++;
        }
        else if(str1[i]>str2[i]) return 1;
        else return -1;
    }
}

int n_cmp(char str1[],char str2[],int n){
    int i;

    for(i=0;i<n;i++){
        if(str1[i]==str2[i]){
            i++;
        }
        else if(str1[i]>str2[i])return 1;
        else return -1;
    }
}


// int main(){
//     char str1[80]="strawberry";
//     char str2[80]="apple";

//     printf("%d\n",len(str1));
//     printf("1. %s\n",str1);
//     copy(str1,str2);
//     printf("2. %s\n",str1);

//     char str[20]="americano";
//     n_copy(str,"banana",6);
//     printf("%s\n",str);

//     char str3[80]="blue";

//     cat(str3,"pie");
//     printf("%s\n",str3);
//     n_cat(str3,"piece",4);
//     printf("%s\n",str3);

//     char str4[80]="pesr";
//     char str5[80]="pear";

//     if(cmp(str4,str5)>0)
//         printf("%s\n",str4);
//     else
//         printf("%s\n",str5);

//     if(n_cmp(str4,str5,3)>0)
//         printf("%s\n",str4);
//     else
//         printf("%s\n",str5);

//     return 0;
// }

// void assign10();
// void assign20();

// int a;  //전역변수는 0으로 초기화    #define MAX 3

// int main(){
//     printf("%d\n",a);

//     assign10();
//     assign20();

//     printf("%d\n",a);

//     return 0;
// }

// void assign10(){
//     a=10;
// }

// void assign20(){
//     // int a;

//     a=20;
// }

void auto_func(){
    auto int a=0;

    a++;
    printf("%d\n",a);
}

void static_func(){
    static int a;

    a++;
    printf("%d\n",a);
}

// int main(){
//     int i;

//     printf("normal\n");
//     for(i=0;i<3;i++){
//         auto_func();
//     }

//     printf("stactic\n");
//     for(i=0;i<3;i++){
//         static_func();
//     }

//     return 0;
// }

// int main(){
//     register int i;
//     auto int sum=0;

//     for(i=1;i<=10000;i++){
//         sum+=1;
//     }
//     printf("%d\n",sum);

//     return 0;
// }

int *sum(int a,int b);
   
// int main(){
//     int *resp;

//     resp=sum(10,20);
//     printf("sum : %d/n",*resp);

//     return 0;
// }

int *sum(int a,int b){
    static int res;
    res=a+b;
    return &res;
}

// int main(){
//     char animal[5][20];
//     int i;
//     int count;

//     count=sizeof(animal)/sizeof(animal[0]);
//     for(i=0;i<count;i++){
//         scanf("%s",animal[i]);
//     }
//     for(i=0;i<count;i++){
//         printf("%s, ",animal[i]);
//     }

//     return 0;
// }

// int main(){
//     char animal[5][10]={
//         {'d','o','g','\0'},
//         {'t','i','g','e','r','\0'}
//     };
// }

// int main(){
//     int score[2][3][4]={
//         {{72,80,95,60},{68,98,83,90},{75,72,84,90}},
//         {{66,85,90,88},{95,92,88,95},{43,72,56,75}}
//     };

//     int i,j,k;

//     for(i=0;i<2;i++){
//         printf("class %d\n",i+1);
//         for(j=0;j<3;j++){
//             for(k=0;k<4;k++){
//                 printf("%5d",score[i][j][k]);
//             }
//             printf("\n");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// int main(){
//     int ary1[4]={1,2,3,4};
//     int ary2[4]={11,12,13,14};
//     int ary3[4]={21,22,23,24};
//     int *pary[3]={ary1,ary2,ary3};
//     int i,j;

//     for(i=0;i<3;i++){
//         for(j=0;j<4;j++){
//             printf("%5d",pary[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// int main(){
//     int i,j;
//     int ary[5][6]={
//         { 1, 2, 3, 4, 5},
//         { 6, 7, 8, 9,10},
//         {11,12,13,14,15},
//         {16,17,18,19,20}
//     };

//     for(i=0;i<4;i++){
//         for(j=0;j<5;j++){
//             ary[i][5]+=ary[i][j];
//             ary[4][j]+=ary[i][j];
//             ary[4][5]+=ary[i][j];
//         }
//     }
    
//     for(i=0;i<5;i++){
//         for(j=0;j<6;j++){
//             printf("%4d",ary[i][j]);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

void swap_ptr(char **ppa,char **ppb);

// int main(){
//     char *pa="success";
//     char *pb="failure";

//     printf("pa -> %s, pb -> %s\n",pa,pb);
//     swap_ptr(&pa,&pb);
//     printf("pa -> %s, pb -> %s\n",pa,pb);

//     return 0;
// }

void swap_ptr(char **ppa,char **ppb){
    char *pt;

    pt=*ppa;
    *ppa=*ppb;
    *ppb=pt;
}

int main(){
    
}