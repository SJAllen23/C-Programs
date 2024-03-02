#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Tip Calculator\n");

    int bill, people;
    float tip;
    printf("Enter the bill amount?\n");
    scanf("%d", &bill);
    printf("Enter tip percentage[o.10,0.15,0.20]\n");
    scanf("%f",&tip);
    printf("Enter number of person\n");
    scanf("%d",&people);


    int tax = bill*0.16;
    bill = bill+tax;

    printf("Tax amount is: $ %d \n",tax);
    printf("Bill after tax: $%d\n",bill);

    float ptip = (bill*0.10)/people;
    printf("Tip per person: $%f\n", ptip);


    int total = (bill/2)+ptip;
    printf("Total per person: $%d\n", total);

}
