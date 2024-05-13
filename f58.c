/*write a c program to create a file named as data.txt and input content in the file*/
#include<stdio.h>
int main(){
FILE *FP;
FP=fopen("data.txt","w");
if(FP==NULL){
printf("file error\n");
return 1;
}
fprintf(FP,"This is a sample text file.\n");
fprintf(FP,"This is an sample text file.\n");
fprintf(FP,"It contains some words like 'a','the','an'.\n");
fprintf(FP,"We will delete these words and create a new file.\n");
fclose(FP);
return 0;
}
