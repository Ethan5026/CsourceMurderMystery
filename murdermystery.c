#include <stdio.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

void main(void){
  int y;
  printf("Please enter the number of players:  ");
  scanf("%d", &y);
  srand(time(NULL));
  int x = rand() % y;
  for(int i = 0; i<y; i++){
    if(i==x){
      printf("\nYou are the murderer. Please wait to call next person");
      sleep(3);
    }
    else if(i!=x){
      printf("\nYou are innocent. Please wait to call next person.");
      sleep(5);
      
    }
    system("clear");
    printf("\nA new identity will be revealed in 3 seconds ");
    sleep(3);
    system("clear");
  }
  printf("The game has begun.");
}