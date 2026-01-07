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

int main(){
    
}