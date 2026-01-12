#include <stdio.h>


// int main(){
//     FILE *fp;
//     int ch;

//     fp=fopen("a.txt","r");
//     if(fp==NULL){
//         printf("파일이 열리지 않았습니다.\n");
//         return 1;
//     }
//     while(1){
//         ch=fgetc(fp);
//         if(ch==EOF){
//             break;
//         }
//         putchar(ch);
//     }
//     fclose(fp);

//     return 0;
// }

// int main(){
//     FILE *fp;
//     char str[]="apple";
//     int i;
    
//     fp=fopen("c.txt","a");  //a : 문자 추가, 없으면 파일 생성, w : 문자 쓰기, 덮어쓰기, 파일 생성, r : 문자 읽기, 파일생성 못함
//     if(fp==NULL){
//         printf("파일을 만들지 못했습니다");
//         return 1;
//     }
//     i=0;
//     while(str[i]!='\0'){
//         fputc(str[i],fp);
//         i++;
//     }
//     fputc('\n',fp);
//     fclose(fp);

//     return 0;
// }

// int main(){
//     int ch;

//     while(1){
//         ch=getchar();
//         if(ch==EOF){
//             break;
//         }
//         putchar(ch);
//     }

//     return 0;
// }

#include <string.h>

// int main(){
//     FILE *ifp,*ofp;
//     char str[80];
//     char *res;

//     ifp=fopen("a.txt","r");
//     if(ifp==NULL){
//         printf("입력파일을 열지 못했스빈다\n");
//         return 1;
//     }

//     ofp=fopen("b.txt","w");
//     if(ofp==NULL){
//         printf("출력파일을 열지 못했습니다.\n");
//             return 1;
//     }
// }

// typedef struct errorcode{
//     char err[100];
//     int count;
// }ERROR;

// int main(){
//     FILE *fp;
//     ERROR errorlog[100];
//     char line[100];
//     int error_count = 0;

//     fp = fopen("log.txt", "r");
//     if (fp == NULL) {
//         printf("파일을 열 수 없습니다\n");
//         return 1;
//     }

//     while (fgets(line, sizeof(line), fp) != NULL) { //fgets : 한줄씩 읽음
//         if (strncmp(line, "[ERROR]", 7) == 0) {
//             error_count++;
//             char *err=line+8;


//         }
//     }
    
//     fclose(fp);

//     printf("ERROR 개수: %d\n", error_count);

//     return 0;
// }

typedef struct adress{
    char ip[100];
    int count;
}ADRESS;

typedef struct time{
    char time[100];
    int count;    
    ADRESS ip_hour[100];
    int ip_count;
}TIME;

int main(){
    FILE *fp;
    char line[256];
    ADRESS ips[100];
    TIME ipt[100];
    int ip_count=0,tm_count=0,count_ping=0;

    fp=fopen("fast.log","r");
    if(fp==NULL){
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }
    while(fgets(line,sizeof(line),fp)){
        if(strstr(line,"ICMP Ping!!!!!!!!!!! Detected")!=NULL) count_ping++;
        if(strstr(line,"ICMP Ping")==NULL) continue;
        
        char *p=strstr(line,"}");
        p+=2;
        
        char ip[100];
        int i=0;
        while (!(p[i]==' '&&p[i+1]=='-'&&p[i+2]=='>')&&i<39){
            ip[i]=p[i];
            i++;
        }
        ip[i]='\0';
        
        int j;
        for(j=0;j<ip_count;j++){
            if(strcmp(ips[j].ip,ip)==0){
                ips[j].count++;
                break;
            }
        }
        if(j==ip_count){
            strcpy(ips[ip_count].ip,ip);
            ips[ip_count].count=1;
            ip_count++;
        }
    }

    printf("총 ping 개수 : %d\n",count_ping);

    int max_ip_count=0;
    char max_ip[100];
    for(int i=0;i<ip_count;i++){
        if(ips[i].count>max_ip_count){
            max_ip_count=ips[i].count;
            strcpy(max_ip,ips[i].ip);
        }
    }
    printf("가장 많이 호출된 IP: %s (횟수: %d)\n", max_ip, max_ip_count);

    fseek(fp, 0, SEEK_SET);

    while(fgets(line,sizeof(line),fp)){
        if(strstr(line,"ICMP Ping")==NULL) continue;

        char *t=strstr(line,"2025-");
        t+=5;

        char tm[100];

        int i=0;
        while (t[i]!=' '&&i<2){
            tm[i]=t[i];
            i++;
        }
        tm[i]='\0';

        int j;
        for(j=0;j<tm_count;j++){
            if(strcmp(ipt[j].time,tm)==0){
                ipt[j].count++;
                break;
            }
        }
        if(j==tm_count){
            strcpy(ipt[tm_count].time,tm);
            ipt[tm_count].count = 1;
            ipt[tm_count].ip_count=0;
            j=tm_count;
            tm_count++;
        }
        char *p=strstr(line,"}");
        p+=2;

        char ip[100];
        i=0;
        while (!(p[i]==' ' && p[i+1]=='-' && p[i+2]=='>') && i<39){
            ip[i]=p[i];
            i++;
        }
        ip[i]='\0';

        int k;
        for(k=0;k<ipt[j].ip_count;k++){
            if(strcmp(ipt[j].ip_hour[k].ip,ip)==0){
                ipt[j].ip_hour[k].count++;
                break;
            }
        }
        if(k==ipt[j].ip_count){
            strcpy(ipt[j].ip_hour[k].ip,ip);
            ipt[j].ip_hour[k].count = 1;
            ipt[j].ip_count++;
        }
    }
    printf("시간대별 Ping 요청:\n");
        for(int i=0;i<tm_count;i++){
        int max_count = 0;
        char max_ip[100];
        for(int j=0;j<ipt[i].ip_count;j++){
            if(ipt[i].ip_hour[j].count > max_count){
                max_count = ipt[i].ip_hour[j].count;
                strcpy(max_ip, ipt[i].ip_hour[j].ip);
            }
        }
        printf("%s 시 : %d번, 최다 IP: %s (%d회)\n",
            ipt[i].time, ipt[i].count, max_ip, max_count);
    }
    

    fclose(fp);

    return 0;
}