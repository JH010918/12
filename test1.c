#include <stdio.h>

/*int main(void)
{
    printf("Be happy\n");
    printf("1234\n");
    printf("My\tfriend\n");
    printf("goot\bd\tchannce\n");
    printf("cow\rW\a\n");

   return 0;
}*/

/*int main(void)
{
    printf("%d\n",10);
    printf("%lf\n",3.4);
    printf("%.1lf\n",3.45);
    printf("%.10lf\n",3.4);

    printf("%d과 %d의 합은 %d 입니다.\n",10,20,10 + 20);
    printf("%.1lf-%.1lf = %.1lf\n",3.4, 1.2, 3.4 -1.2);

    return 0;
}*/

/*int main(void)
{
    printf("%d\n",12);
    printf("%d\n",014);
    printf("%d\n",0xc);

    return 0;
}*/

/*int main(void)
{
    printf("%.1lf\n",1e6);
    printf("%.7lf\n",3.14e-5);
    printf("%le\n",0.0000314);
    printf("%.2le\n",0.0000314);

    return 0;
}*/

/*int main(void)
{
    printf("%c\n", 'A');
    printf("%s\n","A");
    printf("%s = %s.\n","1","first");

    return 0;
}*/

/*int main(void)
{
    int a;      //int = 4byte 정수
    int b, c;
    double da;  //double = 8byte 실수
    char ch;    //char = 1byte(8bit) 문자

    a= 10;
    b=a;
    c=a+20;
    da=3.5;
    ch='A';

    printf("a : %d\n",a);
    printf("b : %d\n",b);
    printf("c : %d\n",c);
    printf("da : %.1lf\n",da);
    printf("ch : %c\n",ch);

    return 0;
}*/

/*int main(void)
{
    char ch1 = 'A';
    char ch2 = 105;

    printf("%c : %d\n",ch1,ch2);
    printf("%d : %c\n",ch2,ch2);

    return 0;
}*/

/*int main(void)
{
    short sh = 32767; //short = 2bye 정수
    int in = 2147483647;
    long ln = 2147483647;
    long long lln = 123451234512345;

    return 0;
}*/

/*int main(void)
{
    unsigned int a;

    a= 4294967295;
    printf("%d\n",a);
    a=-1;
    printf("%u\n",a);   //%u = unsigned 표시할때, 

    return 0;
}*/

//float 보다 double이 더 많은 소수점을 반영가능

#include <string.h>

/*int main(void)  //메인함수 
{
    char fruit[20] = "strawberry";

    printf("%s\n", fruit);
    strcpy(fruit,"banana");
    printf("%s\n", fruit);

    return 0;
}*/

/*int main(void)
{
    int income =0;
    double tax;
    const double tax_rate =0.12;

    income = 456;
    tax = income * tax_rate;
    pringf("tax = %.1lf.\n",tax);

    return 0;
}*/

/*int main(void)
{
    int a;
    printf("입력\n");
    scanf("%d",&a);
    printf("%d\n",a);

    return 0;
}*/

/*int main(void)
{
    int age;
    double height;

    printf("나이와 키를 입력하세요 : ");
    scanf("%d %lf",&age,&height);
    printf("나이 : %d살, 키 : %.1lfcm.\n", age, height);

    return 0;
}*/

/*int main(void)
{
    char grade;
    char name[20];

    printf("학점 입력 : ");
    scanf("%c",&grade);
    printf("이름 입력 : ");
    scanf("%s",name);   //문자열은 scanf할 때 & 필요없음
    printf("%s의 학점은 %c입니다.\n",name, grade);

    return 0;
}*/

/*int main(void)
{
    int a,b;
    int sum, sub, mul, inv;

    a=10, b=20;
    sum = a+b;
    sub=a-b;
    mul=a*b;
    inv=-a;

    return 0;
}*/

/*int main(void)
{
    double apple;
    int banana;
    int orange;

    apple = 5.0/2.0;
    banana=5/2; //몫
    orange=5%2; //나머지

    printf("%.1lf\n",apple);
    printf("%d\n",banana);
    printf("%d\n",orange);

    return 0;
}*/

/*int main(void)
{
    int a=10,b=10;

    ++a;
    --b;

    printf("a : %d\n",a);
    printf("b : %d\n",b);

    return 0;
}*/

/*int main(void)
{
    int a=5,b=5;
    int pre,post;

    pre=(++a)*3;
    post=(b++)*3;
    printf("a=%d, b=%d\n",a,b);
    printf("(++a)*3=%d, (b++)*3=%d\n",pre,post);

    return 0;
}*/

/*int main(void)
{
    int a=10,b=20,c=10;
    int res;

    res=(a>b);
    printf("a>b : %d\n",res);
    res=(a>=b);
    printf("a>=b : %d\n",res);
    res=(a<b);
    printf("a<b : %d\n'", res);
    res=(a<=b);
    printf("a<=b : %d\n",res);
    res=(a==b);
    printf("a==b : %d\n",res);
    res=(a!=c);
    printf("a!=c : %d\n",res);

    return 0;
}*/

/*int main(void)
{
    int a=30;
    int res;

    res=(a>10)&&(a<20); //&&=and
    printf("%d\n",res);
    res=(a<10)||(a>20); //||=or
    printf("%d\n",res);
    res=!(a>=30);       //!=not
    printf("%d\n",res);

    return 0;
}*/

/*int main(void)
{
    int a=10,b=20,res;

    a+b;
    printf("%d+%d=%d\n",a,b,a+b);

    res=a+b;
    printf("%d+%d=%d\n",a,b,res);

    return 0;
}*/

/*int main(void)
{
    int a=20, b=3;
    double res;

    res = ((double)a)/((double)b);
    printf("a=%d,b=%d\n",a,b);
    printf("a/b = %.10lf\n",res);

    a= (int)res;
    printf("(int) %.1lf = %d\n",res,a);

    return 0;
}*/

int main(void)
{
    double a,b,c;
    double res;

    a=1.1,b=2.2;
    res= a+b;
    c=(res==3.3);
    printf("%lf\n",res);
    printf("c==3.3\n",c);
    return 0;
}