#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    char lettergrade;
    printf("Input your grade: \n"); scanf("%d",&grade);
    if (grade <=100 && grade >=90){
        lettergrade = 'A';
    }else if(grade <=89 && grade >=80){
        lettergrade = 'B';
    }else if(grade <=79 && grade >= 70){
        lettergrade = 'C';
    }else if(grade <=69 && grade >= 60){
        lettergrade = 'D';
    }else if(grade <=59 && grade >= 0){
        lettergrade = 'F';
    }else{
    printf("Invalid Grade");
    }
    printf("You received a %c\n",lettergrade);


    switch(lettergrade){
case 'A':
    printf("You did great!");
    break;
case 'B':
    printf("You did alright!");
    break;
case 'C':
    printf("You did poorly.");
    break;
case 'D':
    printf("You did very bad.");
    break;
default:
    printf("You failed.");
    break;
    }
}
