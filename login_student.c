#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"user_management.h"
int facelogin(){
	int account;
	int n;
	int pause;
	char password[100];
	system("cls");
	while(1){    //Account Format Verification 
		printf("\n\nPlease enter the student number \n");
		pause = scanf("%d",&account);
		fflush(stdin);
		if(pause != 1)
			printf("You have enter the wrong student number \
please notice the format!\n");
		else
			break;
	}
	while(1){     //Password format verification 
		printf("\nPlease enter the password\n");
		pause = scanf("%s",password);
		fflush(stdin);
		if(pause != 1)
			printf("You have enter the wrong password\
please notice the format!\n");
		else
			break;
	}
	n = match(account,password);  //Verify the login by comparing it 
	if(n==0)					//to an existing account password.
	{
		printf("You enter the system successfully!\nEnter any key to continue!\n");
		getch();
		return 0;
	}
	else if(n==1){
		printf("The password is wrong!\n");
		getch();
		return -1;
	}
	else{
		printf("The account does not exist!\n");
		getch();
		return -1;
	}
	
}
