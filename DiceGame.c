#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>


int main(){

    int i;
    int die1;
    int die2;
    char name[10];

    printf("What is your name?\n");
    scanf("%s",name);
    printf("Hello, %s!\n",name);

    srand((unsigned int)time(NULL));

        die1=rand()%6+1;
        die2=rand()%6+1;
        printf("\nRolling the dice...\n");
        printf("Die 1: %d\n",die1);
        printf("Die 2: %d\n",die2);
        printf("Total value: %d\n",die1+die2);
        if (die1+die2>7)printf("%s win!\n\n",name);
        else printf("%s lost$\n\n",name);
        return 0;
    
}