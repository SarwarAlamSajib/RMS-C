/*
Program Name:Restaurant Management System
Author/Programmer Name:
            1.SornaMoni Keya
            2.Faria Zemi
Created For Data Structure Assaignment 2017
*/
#include <stdio.h>
#include <stdlib.h>


int main(int argc,char *argv[])//MAIN FUNCTION

{

         int choice ,log_in,password,back;//PUBLIC VARIABLE DECLARATION
         float totalCust=0,totalSell=0;


do{//BEGINNIG OF LOOP

    printf("\t\t@---------------------------------------------@");
    printf("\n\t\t|                   WELCOME  TO               |");
    printf("\n\t\t|                  BONDHU BRITTO              |");
    printf("\n\t\t|                   RESTAURANT                |");
    printf("\n\t\t@---------------------------------------------@");
    printf("\n");


    printf("\n");
    printf("\t\t1. LOG IN TO ORDER\n");//LOG IN WINDOW WITH THREE OPTION
    printf("\t\t2. LOG IN AS MANAGER\n");
    printf("\t\t3. EXIT\n");
    printf("\n");
    printf("\t\tPLEASE TYPE 1/2/3 TO CONTINUE...:  ");
    scanf("%d", &log_in);
    printf("\n");


    if (log_in==1){ //LOG IN CONDITION TO ORDER
do{//DO WHILE LOOP TO TAKE INFINITE ORDER
    printf("\t\t\tHERE IS OUR FOOD MENU");

//USING LOOPING,POINTER ,ARRAY TO CREATE MENU
    char *foodnames[]={"\t\t1.ROTI----------------------- 10 TAKA\n",
                       "\t\t2.NAN ROTI------------------- 20 TAKA\n",
                       "\t\t3.HALIM---------------------- 60 TAKA\n",
                       "\t\t4.EGG MUMLET/OMLET----------- 15 TAKA\n",
                       "\t\t5.NORMAL RICE---------------- 20 TAKA\n",
                       "\t\t6.BIRIYANI-------------------100 TAKA\n",
                       "\t\t7.CHICKEN CURRY-------------- 50 TAKA\n",
                       "\t\t8.BEEF CURRY----------------- 60 TAKA\n",
                       "\t\t9.NONE-----------------------  0 TAKA\n"};
                        printf("\n");
    int i;
    for ( i=0; i<9; i++){
            char *pos=foodnames[i];
            while(*pos!='\0'){
            printf("%c", *(pos++));
            }
    }

    struct food{        //USING STRUCT TO TAKE ORDER

            int foodNumber;
            int quantity1;
    };
        struct food f;
    printf("\n");
    printf("\t\tENTER THE NUMBER OF CHOSEN FOOD:  ");
    scanf ("%d",&f.foodNumber);

    printf("\t\tHOW MANY :  ");
    scanf ("%d",&f.quantity1);
    printf("\n");
    printf("\t\t\t\HERE IS OUR DRINKS MENU");

    //USING LOOPING,POINTER ,ARRAY TO CREATE MENU
    char *drinksnames[]={"\t\t1.NORMAL WATER---------------15 TAKA\n",
                         "\t\t2.COCACOLA-------------------30 TAKA\n",
                         "\t\t3.PEPSI----------------------30 TAKA\n",
                         "\t\t4.SPECIAL TEA----------------40 TAKA\n",
                         "\t\t5.NOTHING-------------------- 0 TAKA\n"};
                          printf("\n");
            int j;
         for ( j=0; j<5; j++){
            char *pos=drinksnames[j];
            while(*pos!='\0'){
            printf("%c", *(pos++));
            }
    }
         struct drinks{             //USING STRUCT TO TAKE ORDER
            int drinksNumber;
            int quantity2;
    };
            struct drinks d;
    printf("\n");
    printf("\t\tENTER THE NUMBER OF CHOSEN DRINKS:  ");//TAKING DRINKS ORDER
    scanf ("%d",&d.drinksNumber);

    printf("\t\tHOW MANY :  ");
    scanf ("%d",&d.quantity2);
    printf("\n");

    float price;
    float total_price;

//SWITCH CONDITION TO CALCULATE FOODS PRICE
        switch (f.foodNumber){
        case 1:
          price=10 * f.quantity1;
        break;
        case 2:
          price=20 * f.quantity1;
        break;
        case 3:
          price= 60* f.quantity1;
        break;
        case 4:
          price=15 * f.quantity1;
        break;
        case 5:
          price=20 * f.quantity1;
        break;
        case 6:
          price= 100* f.quantity1;
        break;
        case 7:
          price= 50* f.quantity1;
        break;
        case 8:
            price=60 * f.quantity1;
        break;
        case 9:
          price= 0* f.quantity1;
        break;
        default:
        printf("You have typed invalid number\n");
        }

//SWITCH CONDITION TO CALCULATE DRINKS PRICE
        switch (d.drinksNumber){
        case 1:
          price=price+(15 * d.quantity2);
        break;
        case 2:
          price=price+(30 * d.quantity2);
        break;
        case 3:
          price=price+(30* d.quantity2);
        break;
        case 4:
          price=price+(40 * d.quantity2);
        break;
        case 5:
          price=price+(0 * d.quantity2);
        break;
        default:
        printf("You have typed invalid number");
        }

    total_price=(f.foodNumber)+(d.drinksNumber);

    printf("\t\t\t@$$$$$$$$$$$$$$$$$$$$$$$$$$@\n");
    printf("\t\t\t@                          @\n");
    printf("\t\t\t@  The Price is:%f  @\n",price);//PRICE OF ORDER
    printf("\t\t\t@                          @\n");
    printf("\t\t\t@$$$$$$$$$$$$$$$$$$$$$$$$$$@\n");
    printf("\n");

    totalSell += price;//TO CALCULATE TOTAL SELL
    totalCust++;//TO COUNT TOTAL NUMBER OF CUSTOMER


    printf("\t\tDo you want to order again?\n");//FOR MORE ORDER
    printf("\n");
    printf("\t\tType '1' to order OR \n\t\tType 2 to Back to the log in window(1/2): ");
    scanf("%d",&choice);
    printf("\n");

    if (choice!=1){
    printf("\t\tTHANK YOU , PLEASE COME AGAIN\n");}
    }while( choice==1);//CONDITION FOR LOOP OF ORDER AGAIN AND AGAIN
  }
//LOG IN CONDITION 2
   if(log_in==2){
        printf("\t\tWELCOME MANAGER, PLEASE TYPE YOUR PASSWORD:  ");
        scanf("%d", &password);
        printf("\n");
        //BUILT IN PASSWORD FOR MANAGER
        if (password==1122){
        do{
        printf("\t\tTOTAL NUMBER OF CUSTOMER:  %f\n",totalCust );
        printf("\t\tTOTAL AMOUNT OF SALES   :  %f\n",totalSell );
        printf("\n");
        printf("\t\tTO RETURN TO LOG IN WINDOW TYPE '0': ");
        scanf("%d", &back);
        }while(back!=0);//CONDITION TO RETURN
        }
        else{printf("\t\t\tSORRY YOU TYPED WRONG PASSWORD\n");}
    }
    }while(log_in!=3);//CONDITION FOR LOOP
    printf("\t\tNEVER MIND, PLEASE COME AGAIN\n");
    printf("\t\tPRESS ANY KEY TO EXIT........");
    getch();
    printf("\n");
    }

                    //THE END OF THE PROGRAM
    //ALL RIGHTS RESERVED TO THE AUTHOR. DON'T USE WITHOUT PERMISSION
