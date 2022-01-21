/*HERE ,
IF USER IS HARSHIT SHARMA ----BALANCE=234553--------ATM PIN=3543
IF USER IS SIDHARTH SHARMA ----BALANCE=878687--------ATM PIN=2476
IF USER IS MOHIT KUMAR YADAV ----BALANCE=507899--------ATM PIN=8474
IF USER IS KRISHANKANT PACHORI ----BALANCE=546464--------ATM PIN=4593
*/


#include<stdio.h>
void main(){
    int a[4],pin,count=0,r,inc,pin1;
    int sidharth=2476,harshit=3543,mohit=8474,krishankant=4593;
    int balance,q;
   
    //STARTING WITH THE WELCOME LINE
    printf("WELCOME\n");
    printf("PLEASE INSERT YOUR CARD\n");
    abc:
    printf("PLEASE ENTER YOUR 4 DIGIT PIN:\n");
    scanf("%d",&pin);
    pin1=pin;
    //CONDITION IF PIN LENGTH IS NOT RIGHT
    while(pin!=0){
        r=pin%10;
        pin=pin/10;
        count++;
    }
    //IF PIN IS INCORRECT
    if(count!=4){
    printf("YOUR PIN IS INCORRECT\nPRESS ANY NUMBER TO GET TO GO TO HOME PAGE\n");
    scanf("%d",&inc);
    goto abc;
    }
    //COSTUMER ACCOUNT DETAILS ARE SAVED HERE
    else if(pin1==sidharth){
        balance=878687;
        printf("WELCOME SIDHARTH SHARMA TO 'PU BANK' SERVICES\n");
        goto q;
    }
    else if(pin1==mohit){
        balance=507899;
        printf("WELCOME MOHIT KUMAR YADAV TO 'PU BANK' SERVICES\n");
        goto q;
    }
    else if(pin1==krishankant){
        balance=546464;
        printf("WELCOME KRISHANKANT PACHORI TO 'PU BANK' SERVICES\n");
        goto q;
    }
     else if(pin1==harshit){
        balance=234553;
        printf("WELCOME HARSHIT SHARMA TO 'PU BANK' SERVICES\n");
        goto q;
    }
    //ATM OPERATION IS BEING CODED HERE
    q:  printf("SELECT THE OPERATION\n");
     int num;
     int amount=0;
     char answer;
     hi:
    printf("\n1.WITHRAW MONEY");
    printf("\n2.DEPOSIT MONEY");
    printf("\n3.DISPLAY THE BALANCE");
    printf("\n4.EXIT THE ATM\n");
    scanf("%d",&num);

    switch(num){
        //THIS IS FOR WITHRAWING MONEY
    case 1:
    printf("WITHRAW MONEY\n**************************\n***********************\n");
    printf("ENTER THE AMOUNT TO WITHRAW\n**************************\n");
    scanf("%d",&amount);
    printf("DO YOU WANT TO CONTINUE?(y/n)\n");
    scanf(" %c",&answer);
    if(answer=='y'||answer=='Y'){
    balance=balance-amount;
    goto hi;}
    else
    q=0;
    break;
   
    case 2:
    //THIS IS FOR DEPOSITING MONEY
    printf("DEPOSIT MONEY\n**************************\n**************************\n");
    printf("ENTER THE AMOUNT TO DEPOSIT\n**************************\n");
    scanf("%d",&amount);
    printf("DO YOU WANT TO CONTINUE?(y/n)\n");
    scanf(" %c",&answer);
    if(answer=='y'||answer=='Y'){
    balance=balance+amount;
    goto hi;}
    else
    q=0;
    break;
    case 3:
    //THIS IS FOR CHECKING BALANCE
    printf("CHECKING BALANCE\n**************************\n**************************\n");
    printf("YOUR CURRENT BALANCE IS %d\n**************************\n**************************\n",balance);
    printf("DO YOU WANT TO CONTINUE?(y/n)\n");
    scanf(" %c",&answer);
    if(answer=='y'||answer=='Y')
    goto hi;
    else
    q=0;
    break;
    case 4:
    break;}
    printf("**************************\n**************************\nTHANK YOU!!!!!\n");
     }