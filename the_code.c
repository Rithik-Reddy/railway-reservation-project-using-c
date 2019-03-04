#include<stdio.h>
void reservation();
void available();
void cancelation();
void ticket(int,int);
int tot,cost,no_of_seats=0,mob_no=0;
void main()
{
 int option,choice=1;
 char id[20],pass[20];
 printf("\t\t=======================================================\n");
 printf("\t\t|                                                     |\n");
 printf("\t\t|        -----------------------------------          |\n");
 printf("\t\t|           TRAIN TICKET RERSRVATION SYSTEM           |\n");
 printf("\t\t|        -----------------------------------          |\n");
 printf("\t\t|                                                     |\n");
 printf("\t\t|                                                     |\n");
 printf("\t\t|                                                     |\n");
 printf("\t\t|                    POWERED BY                       |\n");
 printf("\t\t|               |VJIT CSE-A(2018-22)|                 |\n");
 printf("\t\t|                                                     |\n");
 printf("\t\t=======================================================\n\n\n");
 printf("ISRTC USER ID=\t");
 scanf("%s",id);
 printf("PASSWORD=\t");
 scanf("%s",pass);
 printf("\nplease proceed");
 while(choice)
 {
  printf("\nFind out the services suitable for you?\n");
  printf("\t1. Reservation\n\t2. Check Available trains\n\t3. View ticket\n\t4. Cancelation\n\t5. exit");
  printf("\n\n\nwhich one would you like to proceed with(please enter the option)\n>>>");
  scanf("%d",&option);
  switch(option)
   {
    case 1 :
     reservation();
     break;
    case 2 : 
     available();
     break;
    case 3 :
     ticket(no_of_seats,mob_no);
     break;
    case 4 :
     cancelation();
     break;
    case 5 :
     printf("exit\nthank u for using the site");
     break;
    default :
    printf("\nplease enter a valid option");
   }
   printf("\ndo you want to continue?(enter 1 for yes and 0 for no)\n");
   scanf("%d",&choice);
 }
}
void reservation()
{
    int train_no,total_cost;
    char email[50];
    available();
    printf("\nplease enter the train no=");
    scanf("%d",&train_no);
    printf("\nEnter phone no");
    scanf("%d",&mob_no);
    printf("\nEnter yoour E-MAIL ID");
    scanf("%s",email);
    if(train_no==1002)
    {
        printf("Train from hyd to banglore ");
        printf("\ncost of ticket is INR 2900");
        printf("\n plz remember only 6 tickets can be booked on one account at a time\n enter no. of seat=");
        scanf("%d",&no_of_seats);
        cost=2900;
        total_cost=no_of_seats*cost;
        printf("TOTAL FARE = %d",total_cost);
        ticket(no_of_seats,mob_no);
        printf("\nseat number(s) will be sent to your email %s shortly",email);
    }
    else if(train_no==4382)
    {
        printf("Train from hyd to jaipur ");
        printf("\ncost of ticket is INR 4500");
        printf("\n plz remember only 6 tickets can be booked on one account at a time\nplease enter no.of seat=");
        scanf("%d",&no_of_seats);
        cost=4500;
        total_cost=no_of_seats*cost;
        printf("TOTAL FARE= %d",total_cost);
          ticket(no_of_seats,mob_no);
        printf("\nseat number(s) will be sent to your email %s shortly",email); 
    }
    else if(train_no==1019)
    {
      printf("Train from hyd to goa");
        printf("cost of ticket is INR 1600");
        printf("\nplz remember only 6 tickets can be booked on one account at a time\nplease enter no. of seat=");
        scanf("%d",&no_of_seats);
        cost=1600;
        total_cost=no_of_seats*cost;
        printf("TOTAL FARE= %d",total_cost);
          ticket(no_of_seats,mob_no);
        printf("\nseat number(s) will be sent to your email %s shortly",email);
    }
    else if(train_no==1092)
    {
         printf("Train from hyderabad to mumbai ");
        printf("\ncost of ticket is INR 1989");
        printf("\n plz remember only 6 tickets can be booked on one account at a time\nplease enter no. of seat=");
        scanf("%d",&no_of_seats);
        cost=1989;
        total_cost=no_of_seats*cost;
        printf("TOTAL FARE= %d",total_cost);
         ticket(no_of_seats,mob_no);
        printf("\nseat number(s) will be sent to your email %s shortly",email);
    }
    else if(train_no==2346)
    {
        printf("Train from chandigarh to hyd ");
        printf("\nthe cost for each ticket is INR 2400");
        printf("\n plz remember only 6 tickets can be booked on one account at a time\nplease enter no. of seats=");
        scanf("%d",&no_of_seats);
        cost=2400;
        total_cost=no_of_seats*cost;
        printf(" TOTAL FARE = %d",total_cost);
          ticket(no_of_seats,mob_no);
        printf("\nseat number(s) will be sent to your email %s shortly",email);
    }
    else if(train_no==1780)
    {
     printf("Train from hyderabad to kolkata");
     printf("\nThe cost for each ticket is INR 2000");
     printf("\n plz remember only 6 tickets can be booked on one account at a time\nplease enter no. of seat=");
     scanf("%d",&no_of_seats);
     cost=2000;
     total_cost=no_of_seats*cost;
     printf("TOTAL FARE  =%d",total_cost);
       ticket(no_of_seats,mob_no);
     printf("\nseat number(s) will be sent to your email %s shortly",email);
    }
    else if(train_no==2389)
    {
     printf("Train from hyderabd to karnataka");
     printf("\n The cost for each ticket is INR 500");
     printf("\n plz remember only 6 tickets can be booked on one account at a time\nplease enter no. of seat=");
     scanf("%d",&no_of_seats);
     cost=500;
     total_cost=no_of_seats*cost;
     printf("TOTAL FARE =%d",total_cost);
       ticket(no_of_seats,mob_no);
     printf("\nseat number(s) will be sent to your email %s shortly",email);
    }
    else if(train_no==7860)
    {
    printf("Train from hyderabad to delhi");
    printf("\n The cost of each ticket is INR 5000");
    printf("\n plz remember only 6 tickets can be booked on one account at a time\nplease enter the no. of seats=");
    scanf("%d",&no_of_seats);
    cost=5000;
    total_cost=no_of_seats*cost;
    printf("TOTAL FARE=%d",total_cost);
      ticket(no_of_seats,mob_no);
    printf("\nseat number(s) will be sent to your email %s shortly",email);
   }
     else
   {
    printf("please enter valid train no.");
    }
    printf("\nthank u for using the site");
}
void available()
{ 
 printf("=====*=====*=====*=====*=====*=====*=====*======*=====*=====*");
 printf("\nTrno.\t\tDESTINATION\t\tFARE\t\tTIME\t");
 printf("\n=====*=====*=====*=====*=====*=====*=====*=====*=====*=====*");
 printf("\n1002\thyderabad to banglore\t\tRs:2900\t\t12pm");
 printf("\n4382\thyderabad to jaipur\t\tRs:4500\t\t1:30pm");
 printf("\n1019\thyderabad to goa\t\tRs1600\t\t4:55pm");
 printf("\n1092\tmumbai to hyderabad\t\tRs:1989\t\t9:00am");
 printf("\n2346\tchandigarh to hyderabad\t\tRs:2400\t\t4.00pm\t");
 printf("\n1780\thyderabad to kolkatta\t\tRs2000\t\t12.35pm\t");
 printf("\n2389\thyderabad to karnataka\t\tRs500\t\t6.00am\t");
 printf("\n07860\thyderabad to delhi\t\tRs5000\t\t5.45am\t");
 printf("\nthank u for using the site");
}
void ticket(int no_of_seats,int mob_no)
{
 if(no_of_seats==1)
 {
     printf("\nname of passenger\t\tage\t\tseat no\t\tdate of journey");
     printf("\nRithik\t18\t\ts7 52\t\t27 nov 2018");
 }
 else if(no_of_seats==2)
 {
  printf("\nname of passenger\t\tage\t\tseat no\t\tdate of journey");
  printf("\nRithik\t18\t\ts7 52\t\t27 nov 2018");
  printf("\nsaud\t18\t\ts7 53\t\t27 nov 2018");   
 }   
 else if(no_of_seats==3)
 {
  printf("\nname of passenger\t\tage\t\tseat no\t\tdate of journey");
  printf("\nRithik\t18\t\ts7 52\t\t27 nov 2018");
  printf("\nsaud\t18\t\ts7 53\t\t27 nov 2018");
  printf("\nazmat\t18\t\ts7 54\t\t27 nov 2018");
 }
 else if(no_of_seats==4)
 {
  printf("\nname of passenger\t\tage\t\tseat no\t\tdate of journey");
  printf("\nRithik\t18\t\ts7 52\t\t27 nov 2018");
  printf("\nsaud\t18\t\ts7 53\t\t27 nov 2018");
  printf("\nazmat\t18\t\ts7 54\t\t27 nov 2018");
  printf("\ndheeraj\t18\t\ts7 55\t\t27 nov 2018");
 }
 else if(no_of_seats==5)
 {
  printf("\nname of passenger\t\tage\t\tseat no\t\tdate of journey");
  printf("\nRithik\t18\t\ts7 52\t\t27 nov 2018");
  printf("\nsaud\t18\t\ts7 53\t\t27 nov 2018");
  printf("\nazmat\t18\t\ts7 54\t\t27 nov 2018");
  printf("\ndheeraj\t18\t\ts7 55\t\t27 nov 2018");
  printf("\nhari\t18\t\ts7 56\t\t27 nov 2018");
 }
 else if(no_of-seats==6)
 {
  printf("\nname of passenger\t\tage\t\tseat no\t\tdate of journey");
  printf("\nRithik\t18\t\ts7 52\t\t27 nov 2018");
  printf("\nrushi\t18\t\ts7 53\t\t27 nov 2018");
  printf("\nsaud\t18\t\ts7 54\t\t27 nov 2018");
  printf("\nazmat\t18\t\ts7 55\t\t27 nov 2018");
  printf("\ndheeraj\t18\t\ts7 56\t\t27 nov 2018");
  printf("\nhari\t18\t\ts7 57\t\t27 nov 2018");
 }
 else
 {
 	printf("you havent booked the tickets yet.");
 }
}
void cancelation()
{
    int pnr;
    printf("please enter the pnr no of your ticket");
    scanf("%d",&x);
    printf("10% cancelation charges have been charged");
 printf("---------------------------------------\n");
 printf("\tYour ticket has been cancelled\n");
 printf("--------------------------------------\n\n");
 printf("money will be refunded in two to three working days");
 printf("thank u for using the site");
 
}
