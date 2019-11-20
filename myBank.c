#include <stdio.h>
#include <stdbool.h>
#include "myBank.h"

double accounts [50][2]={0};



void open_account(){

double amount=0;
bool open=0;

for(int i=0;i<50 && !open;i++){
  if(accounts[i][0]==0){
     printf("Initial deposit?: \n");
     scanf("%lf",amount);
     accounts[i][1]=amount;
     accounts[i][0]=1;
     int account_num=i+901;
     printf ("account number: %d\n",account_num);
     open=1;
    }
 // else{
 // printf("Sorry,there are 50 open accounts \n");
 // } 
}
}
void check_balance(){

int account_num=0;
printf("Account number?:\n");
scanf(" %d",&account_num);
if(901<=account_num && account_num<=950){
  int index_account=account_num-901;
   if(accounts[index_account][0]==1){
     double amount=accounts[index_account][1];
     printf("The balance is: %.2f",amount);
    }
       else{
     printf("The account is closed\n");
    }
}
else{
printf("No such account exists");
}
}

void deposit(){
int account_num=0;
printf("Account number?:\n");
scanf(" %d",&account_num);
if(901<=account_num && account_num<=950){
 int index_account=account_num-901;
  if(accounts[index_account][0]==1){
     double amount=0;
     printf("deposit amount:");
     scanf("%f",&amount);
     accounts[index_account][1]=accounts[index_account][1]+amount;
     amount=accounts[index_account][1];
     printf("")
}





















