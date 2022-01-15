#include<stdio.h>
#include<time.h>
#include<windows.h>
#include<conio.h>
main()
{
     int i,ch,tot=0,num,a,b,sol,back,exit;
     float tat,ser,rem,tax;
     char opt,y,n;
struct user{
    char age[50];
    char dev[50];
    char cai[50];
    char gui[50];
    char ges[50];
    char nom[50];
    char pay[50];
    char mot[50];
    char eta[50];
    char mon[50];
    char com[50];

};

   struct user usr;
   printf("\n****************************************WELCOME TO COGEBANQUE!****************************************");
   printf("\n******************THE MENU******************");
   printf("\n\t(1)BANQUE SLIP SYSTEM ENTRANCE");
   printf("\n\t(2)ATM BANKING SYSTEM");
   printf("\n\t(3)IMISORO Y INZEGO Z IBANZE");
   	printf("\n\t(4)IMISORO YA RWANDA REVENUE AUTHORITY");
   printf("\n\t(0) EXIT");
   printf("\n****************************************COGEBANQUE!****************************************");
   printf("\n ENTER YOUR CHOICE!");
   scanf("%d",&ch);
   switch(ch)
   case 1:
   {
      printf("\n---------------------------------------------------------------------------------------------------------------"),
   // for(i=0;i<=100;i++)
        //{
       printf("\t\t\t\t\t\t\n   BORDEREAU DE VERSEMENT ESPECES: No%d",i);
   // }
   //ENTER YOUR ACCOUNT ADRESS OR NUMBER!
   printf("\n account:");
   scanf("%d",&num);
   time_t now;
   time(&now);
   printf("\t\t\t\t%s",ctime(&now));
   printf("\n\t Agence...:00011 ");
   scanf("%s",usr.age);
   printf("\n\t Devise...:RWF ");
   //scanf("%s",usr.dev);
   printf("\n\t Caisse...:006 ");
   //I need to set a thing that can make it do itself mnh
   //scanf("%s",usr.cai);
   printf("\n\t Guichetier...0947CUMU:");
   //scanf("%s",usr.gui);
   printf("\n\t Gestionnaire...001:");
   //scanf("%s",usr.ges);
   printf("\n\t Nom du remettant...");
   scanf("%s",usr.nom);
   printf("\n\t Pays de residence...");
   //Why is this not working?//
   scanf("%s",usr.pay);
   printf("\n\t Motif...ESAG-9217*");
   scanf("%s",usr.mot);
   printf("\n\t Etablissement scholaire...:");
   scanf("%s",usr.eta);
   printf("\n\t Montant...:%f",tot);
   scanf("%s",usr.mon);
   printf("\n\t COMM.VERSEMENT...:%f",tax);
   scanf("%s",usr.com);
   printf("\nTotale:");
   scanf("%d",&tot);
   if(tot>=50000)
       tax=tot*10/100;
       printf("\n\n\n\nTaxe=%f",tax);
	   ser=tot*2/100;
       printf (" Service %f",ser);
       rem=tot-tax-ser;
 printf("Net Versement=%f",rem);
tat=rem+ser+tax;
 printf("\n********************************************************************************************");
 printf("\n___________------Total= %f------____________",tat);
 //GUKORESHA ELSE BYARANANIYE PEUH//
 
printf("\n\n\n\n\n\t NOUS PORTONS AU CREDIT DU COMPTE NO %d",num);
printf("\n RWF:                                       %f",tat);
printf("\n\nDO YOU WANT TO PERFORM ANOTHER TASK?");
 scanf("%c",&opt);
 if(opt==y)
 printf("\n\n Go back to menu %d",back);
if(opt==n)
	printf("\n Enter 0 to exit from the system! %d",exit);
scanf("%d",&ch);
printf("\n\n\n*******THANK YOU FOR USING OUR SYSTEM!*************");
printf("\n\n\n\n ---------------------------------------------------------------------------------------");
printf("\n\n\n Share capital 70000000000 Head office:Cogebanque building.\n\n\n\n");
}
}

