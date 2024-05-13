/*write a c program to read a file named as "data.txt",create an another file named as "del.txt",deleting the words "a","the","an" from the file "data.txt" and replacing each one of them with a blank space in "del.txt"*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void word(FILE *FP,FILE *F1){
char w[100];
while(fscanf(FP,"%s",w)!=EOF){
if(strcmp(w,"a")==0|| strcmp(w,"the")==0|| strcmp(w,"an")==0){
fprintf(F1," ");
}
else{
fprintf(F1,"%s ",w);
}
}
}
int main(){
FILE *FP,*F1;
FP=fopen("data.txt","r");
if(FP==NULL){
printf("FILE ERROR\n");
}
F1=fopen("del.txt","w");
if(F1==NULL){
printf("FILE ERROR\n");
}
word(FP,F1);
printf("WORDS REMOVED SUCCESSFULLY");
fclose(FP);
fclose(F1);
return 0;
}
