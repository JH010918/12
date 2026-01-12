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
//     char str[]="banana";
//     int i;
    
//     fp=fopen("b.txt","w");
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

int main(){
    printf("hello\n");
}