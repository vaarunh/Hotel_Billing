#include<stdio.h>
#include<conio.h>

void bill(char name[], char add[], int o[],char *s[],int p[]);
void main()

  {
	  int i,o[10],p[]={40,60,150,90,170,130,15,25,20,10};
	  char *s[]={"Rice       ","Fried Rice  ","Sahi Paneer  ","Grilled Dosa  ","Chicken Kabab","Chilli Panner ","Tandori Roti","Salad       ","Soft Drinks","Sweets        ",};
	  char name[20],add[20];
	  char a,b;
	  system("cls");
	  printf("   ----------------------- WELCOME TO PUNJAB DHABA ------------------");
	  printf("\t\t\t\t\t   Dhamangoan Road Yavatmal\n");
	  printf("\t\t\tOrder Online : www.punjabdhaba.in \n");
	  printf("\t\tWe Also Serve On Uber Eats, Swiggy and Zomato\n");
	  printf("   ------------------------------------------------------------------");
	  printf("\n  ____________________________________________________________________");
	printf("\n  ____________________________________________________________________");
	printf("\n\t Project Designed By: ");
	printf("\n\t 1. Varun Herlekar \t 2. Astha Asati \t 3. Vaishali Hanwate");
	printf("\n  ____________________________________________________________________");
	  printf("\n\t Enter Your Name:\t ");
	  gets(name);
	  printf("\t Enter Your Address:\t");
	  gets(add);
	  printf("   ------------------------------------------------------------------");
	  printf("\n\t **** TODAYS SPECIAL MENU ****\n");
	  printf("   ------------------------------------------------------------------");
	  printf("\n\t ITEMS \t\t\t PRICE\n");
	  for(i=0;i<10;i++)
		{
			  printf("   %d.%s \t\t %d (Per Item)\n",i+1,s[i],p[i]);
		}
	  printf("   ------------------------------------------------------------------");
	  printf("\n   Would You Like to Order Something? (Press Y for Yes/ N for No) : ");
	  scanf("%c",&a);
	  printf("   ------------------------------------------------------------------");
	  if(a=='y'||a=='Y')
	  {
		  printf("\n \t Your Order.......\n");
		  printf("\n \t Please Select Your Order");
		  printf("\n \t Please Enter Your Order In Terms Of Quantity.");
		  printf("\n \t If Item Not Required Press 0 (Zero)\n");
		  printf("   ------------------------------------------------------------------");
		  for(i=0;i<10;i++)
			  {
				 printf("\n   %d.\t   %s   \t\t   :\t",i+1,s[i]);
				 scanf("%d",&o[i]);
			  }
		  printf("   ------------------------------------------------------------------");
		  printf("\n\t Please Wait Your food Is Being Prepared....!\n");
		  printf("\n\tIn 10 Mins food Will Be On Your Table\n");
		  printf("   ------------------------------------------------------------------");
		  printf("\n\t Would You Like Printed Bill. (Press Y for Yes)\t:\t ");
		  scanf(" %c",&b);
		  printf("   ------------------------------------------------------------------");
		  if(b=='y'||b=='Y')
			  {
				bill(name,add,o,s,p);
			  }
		  else if(b=='n'||b=='N')
			  {
				 printf("\n   ------------------------------------------------------------------");
				 printf("\n\t    Thank You visit us again");
				 printf("\n   ------------------------------------------------------------------");
				 printf("\n   ------------------------------------------------------------------");
			  }
		  else
			{
				 printf("\n   ------------------------------------------------------------------");
				 printf("\n\t   Invalid Input");
				 printf("\n   ------------------------------------------------------------------");
			}
		}
		else if(a=='n'||a=='N')
			{
				printf("\n   ------------------------------------------------------------------");
				printf("\n   Sorry! For The Inconvenience");
				printf("\n   Please Be Free to Share Your Feedback");
				printf("\n   Thank You! Hope We Helped You");
				printf("\n   ------------------------------------------------------------------");
			}
		else
			{
				printf("\n   ------------------------------------------------------------------");
				printf("\n\t   Invalid Input! Please Try Again.");
				printf("\n   ------------------------------------------------------------------");
			}
	  getch();
  }



 void bill(char name[], char add[], int o[],char *s[],int p[])
	  {
		  int i,tot=0;
		  printf("\n\n   ----------------------- WELCOME TO PUNJAB DHABA ------------------");
		  printf("\t\t\t\t\t   Dhamangoan Road Yavatmal\n");
		  printf("\t\t\tOrder Online : www.punjabdhaba.in \n");
		  printf("\t\tWe Also Serve On Uber Eats, Swiggy and Zomato\n");
		  printf("   ------------------------------------------------------------------");

		  printf("\n\t Customer Name: \t");
		  puts(name);
		  printf("\t Customer Address: \t");
		  puts(add);
		  printf("\n\t Your Today's Bill is.....\n");
		  printf(" \t\t    ITEMS       \t\t\t TOTAL");
		  printf("\n   ____________________________________________________________________");
		  for(i=0;i<10;i++)
			 {
				if(o[i]!=0)
			 {
		  printf("\n\t\t    %s  \t(%d X %d)\t%d",s[i],o[i],p[i],o[i]*p[i]);
	  }
   }
	printf("\n   ____________________________________________________________________");
	for(i=0;i<10;i++)
		{
			tot=tot+o[i]*p[i];
		}
		printf("\n\t Your Total Billing amount is\t:\t\t%d\n",tot);

	getch();
}