#include<stdio.h>
int main(){
    FILE *fptr;
    char str1;
    int count=0;
    fptr=fopen("text2.txt","r+");
    str1=fgetc(fptr);
    while(str1 != EOF){
        if(str1==' '){
            count++;
        }
        str1=fgetc(fptr);
    }
    printf("Spaces are %d",count);
    fclose(fptr);
    return 0;
}