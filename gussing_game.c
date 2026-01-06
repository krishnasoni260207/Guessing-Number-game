#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int random_no,guess_no,no_guess=0;
    srand(time(0));
    random_no=rand()%100 + 1;
    // printf("Created random no is:%d",random_no);
    do{
      printf("enter your guess number:");
      scanf("%d",&guess_no);
      
      if(guess_no>random_no){
        printf("you guess greater no,plz enter small number\n");
      }
      else if(guess_no<random_no){
        printf("you enter small no,plz enter a greater no\n");
      }
      else{
        printf("congratulation !!!\n");
      }no_guess ++;
    }while(random_no!=guess_no);
    printf("your score is:%d\n",no_guess);
    if(no_guess<=3){
      printf("EXCELLENT WORK!!!");
    }
    else if(no_guess>3 && no_guess<10){
      printf("GOOD JOB!!");
    }
    else{
      printf("NICE TRY!");
    }
    return 0;
}
