#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
int main(){
char Things[3][10]={"7ajraa","War9aa","M9aass"};
char Fate[2][20]={"Rbaa7tee :)","5ssaarteee hhhhhhhh"};
srand(time(0));
printf("                       !!!!!!!!!!! ZIMBOMBAA7 !!!!!!!\n");
int Stop=0;
int Player;
int Boot;
char name[20];
int score1=0;
int score2=0;
int scoremax;
printf("Da5aal smiitaaak : ");
fgets(name,20,stdin);
name[strlen(name)-1]='\0';
int StopScore=0;
while(StopScore==0){
printf("Enter ScoreMax between 1 to 7 :");
scanf("%d",&scoremax);
if(scoremax<=7 && scoremax>0){
StopScore=1;
}
else{
printf("Please Enter a number between 1 and 7 !!!!!");
}
}
while(Stop==0){
printf("Score: %s     %d:%d     Boot\n",name,score1,score2);
printf("Choose 1)%s  2)%s  3)%s : ",Things[0],Things[1],Things[2]);
scanf("%d",&Player);
if(Player>3){
Stop=1;
}
else{
Boot = rand()%3;
printf("%s= %s        Boot= %s\n",name,Things[Player-1],Things[Boot]);
if((Player-1==0 && Boot==2)||(Player-1==1 && Boot==0)||(Player-1==2 && Boot==1)){
sleep(1);
printf("%s\n",Fate[0]);
score1+=1;
}
else if((Boot==0 && Player-1==2)||(Boot==1 && Player-1==0)||(Player-1==1 && Boot==2)){
sleep(1);
printf("%s\n",Fate[1]);
score2+=1;
}
else if(Boot==Player-1){
sleep(1);
printf("Taa3aadooooll!!!!\n");
}
if(score1==scoremax || score2==scoremax){
if(score1>score2){
printf("Score: %s     %d:%d     Boot\n",name,score1,score2);
printf("%s Naaaadeeeee!!!!!",name);
}
else if(score1<score2){
printf("Score: %s     %d:%d     Boot\n",name,score1,score2);
printf("5ssaartee lgame!!!!");
}
break;
}
}
}
return 0;
}