#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>


int main(){

    int i;
    int die1;
    int die2;

    srand((unsigned int)time(NULL));

        die1=rand()%6+1;
        die2=rand()%6+1;
        printf("\nRolling the dice...\n");
        printf("Die 1: %d\n",die1);
        printf("Die 2: %d\n",die2);
        printf("Total value: %d\n\n",die1+die2);
        return 0;
    
}