#include<stdio.h>
struct student{
int r;
char nm[40];
int m1,m2,m3;
int total,avg;
};
int main(){
struct student s[100],temp,s1;
int n,i;
FILE *f;
printf("enter n:");
scanf("%d",&n);
f=fopen("hello.txt","w");
printf("enter the records:\n");
for(i=0;i<n;i++){
printf("NAME:");
scanf("%s",s[i].nm);
printf("ROLL NUMBER:");
scanf("%d",&s[i].r);
printf("MARKS:PHYSICS,CHEMISTRY,MATHEMATICS:");
scanf("%d %d %d",&s[i].m1,&s[i].m2,&s[i].m3);
}
s[i].total=s[i].m1+s[i].m2+s[i].m3;
s[i].avg=s[i].total/3;
for(i=0;i<n;i++){
for(int j=0;j<n-i-1;j++){
if(s[j].avg>s[j+1].avg){
temp=s[j];
s[j]=s[j+1];
s[j+1]=temp;
}
}
}
fwrite(&s,sizeof(s),n,f);
fclose(f);
f=fopen("hello.txt","r");
fread(&s1,sizeof(s1),1,f);
printf("%s",s1.nm);
fclose(f);
return 0;
}
