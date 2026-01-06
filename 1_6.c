#include <stdio.h>

void print_ary1(int *pa){
    int i;

    for(i=0;i<5;i++){
        printf("%d ",pa[i]);
    }
    printf("\n");
}

// int main(){
//     int ary[5]={10,20,30,40,50};
//     print_ary1(ary);

//     return 0;
// }

void print_ary2(int *pa,int size);

// int main(){
//     int ary1[5]={10,20,30,40,50};
//     int ary2[7]={10,20,30,40,50,60,70};

//     print_ary2(ary1,5);
//     printf("\n");
//     print_ary2(ary2,6);
//     printf("\n");

//     return 0;
// }

void print_ary2(int *pa,int size){
    int i;

    for(i=0;i<size;i++){
        printf("%d value",pa[i]);
    }
}

void input_ary(double *pa,int size);
double find_max(double *pa,int size);

// int main(){
//     double ary[5];
//     double max;
//     int size=sizeof(ary)/sizeof(ary[0]);

//     input_ary(ary,size);
//     max=find_max(ary,size);
//     printf("max : %.1lf\n",max);

//     return 0;
// }

void input_ary(double *pa,int size){
    int i;

    printf("%d : ",size);
    for(i=0;i<size;i++){
        scanf("%lf",pa+i);
    }
}

double find_max(double *pa,int size){
    double max;
    int i;

    max=pa[0];
    for(i=1;i<size;i++){
        if(pa[i]>max)max=pa[i];
    }

    return max;
}

void print_month(int *mp){
    int i;

    for(i=0;i<12;i++){
        printf("%2d월 : %5d ",i+1,mp[i]);
        if(i%5==4)printf("\n");
    }
}

// int main(){
//     int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};

//     print_month(month);
//     printf("\n");

//     return 0;
// }

// int main(){
//     char small, cap;

//     printf("Enter : ");
//     scanf("%c",&cap);

//     if((cap>='A')&&(cap<='Z')){
//         small=cap+('a'-'A');
//     }
//     printf("cap : %c %c",cap,'\n');
//     printf("small : %c %c",small,'\n');

//     return 0;
// }

// int main(){
//     char ch1,ch2;

//     scanf(" %c %c",&ch1,&ch2);  //scanf할 때 % 앞에 공백을 넣으면 \n, 스페이스 생략
//     printf("[%c%c]",ch1,ch2);
//     printf("[%d%d]",ch1,ch2);
//     printf("\n");

//     return 0;
// }

// int main(){
//     int ch;

//     ch=getchar();
//     printf("char : ");
//     putchar(ch);
//     putchar('\n');
// }

// int main(){
//     char ch;
//     int i;

//     for(i=0;i<3;i++){
//         scanf("%c",&ch);
//         printf("%c",ch);
//     }

//     return 0;
// }

void my_gets(char *str, int size);

// int main(){
//     char str[7];

//     my_gets(str,sizeof(str));
//     printf("%s\n",str);

//     return 0;
// }

void my_gets(char *str,int size){
    int ch;
    int i=0;

    ch=getchar();
    while((ch!='\n')&&(i<size-1)){
        str[i]=ch;
        i++;
        ch=getchar();
    }
    str[i]='\0';
}

// int main(){
//     int num;
//     char grade;

//     printf("num : ");
//     scanf("%d",&num);
//     //getchar();
//     printf("grade : ");
//     //grade=getchar();
//     scanf(" %c",&grade);
//     printf("%d, %c",num,grade);
//     printf("\n");

//     return 0;
// }

int main(){
    
}