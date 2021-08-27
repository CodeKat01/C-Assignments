
// Created by shuence

#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>



int balance= 20000;
int amount;
int pin;
int pin2 = 1234;
char transaction1,transaction2,newpin1,newpin2,c,ch;
int main()
{

//start:
printf("Welcome to ATM, please enter your pin.\n");
    scanf("%d",&pin);

    if (pin2 == pin)
    {
        printf("\n");
        printf("------********WELCOME TO OUR ATM SERVICES*******------\n");
printf("Enter your options: ");

   // menu:
        printf("\n");

        printf("1: Check Balance\n");
        printf("2: Withdraw\n");
        printf("3: Deposit\n");
            printf("4: Fast Cash\n");

        printf("5: Change Pin\n");
        printf("6: Exit\n");
        printf("\n");

    }

    else
    {
        printf("Please enter valid Pin\n");
       // goto start;
    }



int choice;
//char ch;

scanf("%d",&choice);

switch (choice)
{

//balance------------------------------------------------------------
case 1:
    printf("Your current balance is %d\n", balance);

    //goto menu;
break;

//withdraw-----------------------------------------------------------
case 2:

//withdraw:
printf("Enter the amount you'd like to withdraw?\n");

    scanf("%d", &amount);

    if(amount< balance)
    {
        if(amount > 0)
        {
            if(amount % 100 == 0)
            {
                balance = balance - amount;

                printf("You have withdrawn %d\n", amount);
                printf("Your current balance is now %d\n", balance);



             printf("\n\n Do you want another transaction[y][n]: ");
                               scanf("%s", &transaction1);

    ch=getchar();
  if(transaction1=='y' || transaction1=='Y')
               {
                                        //goto withdraw;


                            }
                    else if(transaction1=='n' || transaction1=='N')
            {
           // goto menu;
            }
                printf("We can only withdraw money divisible by 100\n");

               // goto withdraw;
            }
        }

        else
        {
            printf("Enter proper amount");

            //goto withdraw;
        }
    }

    else
    {
        printf("Insufficient funds");

        //goto withdraw;
    }

break;

//deposit-----------------------------------------------------------
case 3:

//deposit:
    printf("How much would you like to deposit?\n");

    scanf("%d", &amount);
if (amount %100==0)
            {
            balance = balance+amount;

            printf("You have deposited %d\n", amount);
            printf("Your new balance is now %d\n", balance);

            printf("Would you like to deposit again? Y/N\n");
                scanf("%s",&transaction2);

                ch= getchar();
            if (transaction2== 'Y' || transaction2== 'y')
            {
                //goto deposit;
            }

    else if (transaction2== 'N' || transaction2 == 'n')
            {
   // goto menu;
            }

        }

        else
        {
            printf("The amount you must deposit should not be negative");

           // goto deposit;
        }

break;

//fast cash---------------------------------------------------------


//change pin-------------------------------------------------------

case 5:

printf("Change PIN\n");

printf("Please enter your new PIN\n");
scanf("%s",&newpin1);

printf("Please re-enter your new PIN\n");
scanf("%s",&newpin2);


ch=getchar();
if (newpin1==newpin2)
{
printf("Successful! Your PIN has been changed\n");
}
else
{
printf("Incorrect PIN\n");
}
//goto menu;
break;


//exit---------------------------------------------------------------
case 6:
printf("THANK YOU FOR USING OUR ATM SERVICE");
        exit(0);
break;

default:
    printf("Incorrect number\n");

   // goto menu;
break;

}
printf("\nTHANK YOU This is shuence");

return 0;
}
