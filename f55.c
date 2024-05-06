/*design a structure named "car" to store details like car id ,model and rental rate per day . write a c program to input data for n cars ,calculate the total rental cost for a specified number of days, and display th results*/
#include <stdio.h>
struct Car {
    int Car_ID;
    char model[50];
    float RateperDay;
};
int main()
{
    int n,i,days;
    float Total_Cost=0.0;
printf("\t\t*****INPUT*****\n");
printf("Enter the number of cars: ");
scanf("%d",&n);
    struct Car Cars[n];
    for(i=0;i<n;i++) {
printf("\nEnter details for Car %d\n",i + 1);
printf("Car ID: ");
scanf("%d",&Cars[i].Car_ID);
printf("Model :");
scanf("%s",Cars[i].model);
printf("Rental rate per day ");
scanf("%f",&Cars[i].RateperDay);
    }
printf("\nEnter the number of days for rental: ");
scanf("%d",&days);
    for(i=0;i<n;i++) {
Total_Cost +=Cars[i].RateperDay*days;
    }
printf("\t\t*****OUTPUT*****\n");
printf("\nTotal rental cost for %d days\n",days);
printf("Total Cost %f\n",Total_Cost);
    return 0;
}
