#include <stdio.h>


// struct student{
//     int num;
//     double grade;
// };

// int main(){
//     struct student s1;

//     s1.num=2;
//     s1.grade=2.7;
//     printf("학번 : %d\n",s1.num);
//     printf("학점 : %.1lf\n",s1.grade);

// }

// struct student{
//     char ch1;
//     char ch2;
//     char ch3;
//     short num;
//     int score;
//     double grade;
// };
// int main(){
//     struct student s1;

//     s1.num=2;
//     s1.ch1=10;

//     printf("%zu\n",sizeof(struct student));

//     return 0;
// }

#include <stdlib.h>
#include <string.h>

// struct profile{
//     char name[20];
//     int age;
//     double height;
//     char * intro;
// };

// int main(){
//     struct profile yuni;
//     strcpy(yuni.name,"서하윤");
//     yuni.age=17;
//     yuni.height=164.5;
//     int size=80;

//     yuni.intro=(char*)malloc(size);
//     // printf("%d\n",sizeof(struct profile));
//     // printf("%d\n",sizeof(yuni.name));
//     // printf("%d\n",sizeof(yuni.age));
//     // printf("%d\n",sizeof(yuni.intro));
//     printf("self introduce (%d자 이내): ",size/2);
//     fgets(yuni.intro,sizeof(yuni.intro),stdin);

//     printf("name :%s\n",yuni.name);
//     printf("age : %d\n",yuni.age);
//     printf("height : %.1lf\n",yuni.height);
//     printf("introduce : %s\n",yuni.intro);
//     free(yuni.intro);

//     return 0;
// }

// struct profile{
//     int age;
//     double height;
// };

// struct student{
//     struct profile pf;
//     int id;
//     double grade;
// };

// int main(){
//     struct student yuni;

//     yuni.pf.age=17;
//     yuni.pf.height=164.5;
//     yuni.id=315;
//     yuni.grade=4.3;
//     printf("%d\n",sizeof(struct profile));
//     printf("%d\n",sizeof(struct student));

//     printf("age : %d\n",yuni.pf.age);
//     printf("height : %.1lf\n",yuni.pf.height);
//     printf("id : %d\n",yuni.id);
//     printf("grade : %.1lf\n",yuni.grade);

//     return 0;
// }

// struct student{
//     int id;
//     char name[20];
//     double grade;
// };

// int main(){
//     struct student s1={315,"홍길동",2.4},
//                    s2={316,"이순신",3.7},
//                    s3={317,"세종대왕",4.4};
//     struct student max;

//     max=s1;
//     if(s2.grade>max.grade) max=s2;
//     if(s3.grade>max.grade) max=s3;

//     printf("id : %d\n",max.id);
//     printf("name : %s\n",max.name);
//     printf("grade : %.1lf\n",max.grade);

//     return 0;
// }

// struct vision{
//     double left;
//     double right;
// };

// struct vision exchange (struct vision robot);

// int main(){
//     struct vision robot;
//     printf("시력 입력 : ");
//     scanf("%lf%lf",&(robot.left),&(robot.right));
//     robot=exchange(robot);
//     printf("바뀐 시력 : %.1lf %.1lf\n",robot.left,robot.right);

//     return 0;
// }

// struct vision exchange(struct vision robot){
//     double temp;

//     temp=robot.left;
//     robot.left=robot.right;
//     robot.right=temp;

//     return robot;
// }
  
// struct list{
//     int num;
//     struct list *next;
// };

// int main(){
//     struct list a={10,0},b={20,0},c={30,0};
//     struct list *head = &a,*current;

//     a.next=&b;
//     b.next=&c;

//     printf("head->num : %d\n",head->num);
//     printf("head->next->num : %d\n",head->next->num);
//     printf("list all : ");
//     current=head;
//     while(current!=NULL){
//         printf("%d ",current->num);
//         current=current->next;
//     }
//     printf("\n");

//     return 0;
// }

// typedef struct student{     //구조체 재정의
//     int num;
//     double grade;
// }student;
// //==  실무에서는 위처럼 많이 사용
// // struct student{
// //     int num;
// //     double grade;
// // };
// // typedef struct student Student;

// void print_data(student *ps){
//     printf("id : %d\n",ps->num);
//     printf("grade : %.1lf\n",ps->grade);
// }

// int main(){
//     student s1={315,4.2};

//     print_data(&s1);

//     return 0;
// }

/*
typedef struct grade{
    int kor;
    int eng;
    int math;
    int sum;
    double avg;
    char rank;
}Grade;

typedef struct student{
    int id;
    char name[20];
    Grade gd;
}Student;

void swap(Student *s1,Student *s2){
    Student temp;
    temp=*s1;
    *s1=*s2;
    *s2=temp;
}

void printf_list(Student *lp){
    int i;
    
    for(i=0;i<5;i++){
        (lp+i)->gd.sum=((lp+i)->gd.kor+(lp+i)->gd.eng+(lp+i)->gd.math);
        (lp+i)->gd.avg=(double)((lp+i)->gd.sum)/(double)3;
        
        if((lp+i)->gd.avg>=90) (lp+i)->gd.rank='A';
        else if((lp+i)->gd.avg<90&&(lp+i)->gd.avg>=80) (lp+i)->gd.rank='B';
        else if((lp+i)->gd.avg<80&&(lp+i)->gd.avg>=70) (lp+i)->gd.rank='C';
        else (lp+i)->gd.rank='F';
        
        printf("%5d %5s %5d %5d %5d %5d %5.1lf %5c\n",
            (lp+i)->id,(lp+i)->name,(lp+i)->gd.kor,(lp+i)->gd.eng,(lp+i)->gd.math,
            (lp+i)->gd.sum,(lp+i)->gd.avg,(lp+i)->gd.rank);
    }
}

int main(){
    Student s1[5];
    int i=0;

    for(i=0;i<5;i++){
        printf("id : ");
        scanf("%d",&s1[i].id);
        printf("name : ");
        scanf("%s",s1[i].name);
        printf("Korean, English, Math grade : ");
        scanf("%d %d %d",&s1[i].gd.kor,&s1[i].gd.eng,&s1[i].gd.math);
    }

    printf("정렬 전 데이터...\n");
    printf_list(s1);
    for(int i=0;i<4;i++){
        for(int j=0;j<4-i;j++){
            if(s1[j].gd.avg < s1[j+1].gd.avg){
                swap(&s1[j], &s1[j+1]);
            }
        }
    }
    printf("정렬 후 데이터...\n");
    printf_list(s1);

    return 0;
}
*/
/*
typedef struct position{
    int x;
    int y;
}Position;

void move(Position *p,int dx,int dy){
    p->x+=dx;
    p->y+=dy;
}

int main(){
    Position pos={0,0};
    move(&pos,5,3);
    move(&pos,-2,4);

    printf("(%d, %d)\n",pos.x,pos.y);

    return 0;
}
*/

typedef struct WheelSpeed{
    double left;
    double right;
}wheel;

typedef struct RobotSpeed{
    double linear;
    double angular;
}robot;

robot computeSpeed(wheel w, double wheel_radius, double wheel_distance){
    robot rs;

    rs.linear=wheel_radius*(w.left+w.right)/2.0;
    rs.angular=wheel_radius*(w.right-w.left)/wheel_distance;

    return rs;
}

int main(){
    wheel wheel_s;
    robot rs;

    double wheel_radius, wheel_distance;

    printf("left wheel speed(rad/s) : ");
    scanf("%lf",&wheel_s.left);
    printf("right wheel speed(rad/s) : ");
    scanf("%lf",&wheel_s.right);
    printf("wheel radius(m) : ");
    scanf("%lf",&wheel_radius);
    printf("wheel distance(m) : ");
    scanf("%lf",&wheel_distance);

    rs = computeSpeed(wheel_s,wheel_radius,wheel_distance);

    printf("linear speed : %.2lf m/s\n",rs.linear);
    printf("angular speed : %.2lf rad/s\n",rs.angular);

    return 0;
}
