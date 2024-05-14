/*write a program to read 20 integers in a file.seperate them into two different file prime.txt and nonprime.txt such that all prime numbers are copied in prime.txt and remaining numbers in nonprime.txt*/
#include<stdio.h>
int main(){
FILE *fp,*fp1,*fp2;
int n, num, i, j, f;
fp= fopen("numbers.txt", "w");
if(fp == NULL){
printf("File Error");
return 1;
}
else{
printf("enter the number of integers to be entered: ");        scanf("%d", &n);
printf("Enter the numbers: \n");
for(i = 0; i < n; i++){
scanf("%d", &num);
fprintf(fp, "%d\n", num);
}
}
fclose(fp);
fp= fopen("numbers.txt", "r");
fp1 = fopen("prime.txt", "w");
fp2 = fopen("nonprime.txt", "w");
if(fp == NULL || fp1 == NULL || fp2 == NULL){
printf("File Error");
return 1;
}
else
{
while(fscanf(fp, "%d", &num) != EOF){
f = 0;
for(j = 2; j <= num/2; j++){
if(num % j == 0){
f = 1;
break;
}
}
if(f == 0){
fprintf(fp1,"%d\n", num);
}
else
{
fprintf(fp2, "%d\n", num);
}
}
}
fclose(fp);
fclose(fp1);
fclose(fp2);
fp1 = fopen("prime.txt", "r");
printf("Prime numbers are:\n");
while((fscanf(fp1,"%d",&num))!=EOF)
{
printf("%d ",num);
}
printf("\nnon prime numbers are:\n");
fclose(fp1);
fp2 = fopen("nonprime.txt", "r");
while((fscanf(fp2,"%d",&num))!=EOF){
printf("%d ",num);
}
fclose(fp2);
printf("\n");
return 0;
}
