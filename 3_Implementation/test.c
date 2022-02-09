#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void login();
void mainmenu();


struct motor
{
	char mt_name[30];
	char appln[70];
	int speed;
	float price;
};

char u[30],p[30];
struct motor l[100];


int main()
{
	login();
}

void mainmenu()
{
	char apln[30],mt_nm[30];
	int i,j, keepcount;
	i=j=keepcount = 0;
	int found;

	while(j!=6)
	{
	system("cls");
	printf("\n\n1. Add motor information\n2. Display motor application\n");
	printf("3. List all motors for given application\n");
	printf("4. Details of specified motor\n");
	printf("5. List the count of total number of motor\n");
	printf("6. Exit");

	printf ("\n\nEnter one of the above : ");
	scanf("%d",&j);

	switch (j)
	{
		case 1:
			printf ("Enter motor name = ");
			scanf ("%s",l[keepcount].mt_name);

			printf ("Enter applications of motor = ");
			scanf ("%s",l[keepcount].appln);

			printf ("Enter speed = ");
			scanf ("%d",&l[keepcount].speed);

			printf ("Enter price = ");
			scanf ("%f",&l[keepcount].price);
			printf("Added !");
			keepcount++;
			break;

		case 2:
			printf("you have entered the following information : \n\n");
			for(i=0; i<keepcount; i++)
			{
			printf ("motor name = %s",l[i].mt_name);

			printf ("\t appln of the motor = %s",l[i].appln);

			printf ("\t  speed = %d",l[i].speed);

			printf ("\t  price = %f\n",l[i].price);
			}
			getchar();
			printf("\n\n\n\t\t\t\t Press any key for main menu.....");
			getchar();
			break;

		case 3:
			found=0;
			printf ("Enter appln name : ");
			scanf ("%s",apln);
			for (i=0; i<keepcount; i++)
			{
				if (strcmp(apln, l[i].appln) == 0){
					printf("Found ! \n");
					found=1;
					printf ("motor name = %s",l[i].mt_name);
					printf ("\t appln of the motor = %s",l[i].appln);
					printf ("\t  speed = %d",l[i].speed);
					printf ("\t  price = %f\n",l[i].price);
				}
			}
			if(!found)
				printf("Not Found !");
			getchar();
			printf("\n\n\n\t\t\t\t Press any key for main menu.....");
			getchar();
			break;

		case 4:
			found=0;
			printf ("Enter motor name : ");
			scanf ("%s",mt_nm);
			for (i=0; i<keepcount; i++)
			{
				if (strcmp(mt_nm, l[i].mt_name) == 0){
					printf("Found ! \n");
					found=1;
					printf ("motor name = %s",l[i].mt_name);
					printf ("\t appln of the motor = %s",l[i].appln);
					printf ("\t  speed = %d",l[i].speed);
					printf ("\t  price = %f\n",l[i].price);
				}
			}
			if(!found)
				printf("Not Found !");
			getchar();
			printf("\n\n\n\t\t\t\t Press any key for main menu.....");
			getchar();
			break;

		case 5:
			printf("\nNo of total number of motors : %d", keepcount);
			getchar();
			printf("\n\n\n\t\t\t\t Press any key for main menu.....");
			getchar();
			break;
		case 6:
			exit (0);
		}
	}
	return;
}

void login()		//function that display login screen
{

	printf("\n\n\n\t\t\t ENTER THE USERNAME AND PASSWORD\n\n\n\n");
	printf("\n\t\t\tUSERNAME: ");
	scanf("%s",u);						//scanf is used to read input such as character, string, numeric data from keyboard.
	printf("\n\t\t\tPASSWORD: ");
	scanf("%s",p);
	if((strcmp(u,"user")==0) && (strcmp(p,"pass")==0))
	{
		printf("\n\n\t\t login successful");
		printf("\n\n\n\t\t\t\t Press any key for main menu.....");
		getchar();
		mainmenu();
	}
	else
	{
		printf("\n\n\t\tInvalid username and password");
	}
}