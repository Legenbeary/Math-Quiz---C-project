/*
Jack Hopkins & Sarah Olsen
8/14/19
Course Project V4
*/

#include <stdio.h>  
#include <stdlib.h>
#include <float.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>

void menuMod();
void mathAdd();
void mathSub();
void mathMult();
void mathDivi();
int addMain(int correctAnsOne);
int subMain(int correctAnsOne);
int multMain(int correctAnsOne);
int diviMain(int correctAnsOne);

int main()
{
	//Declarations
	int mathPick;
	int userNumOne;
	int userNumTwo;
	int userAnswer;
	int realAnswer;
	int totProb;
	int correctAns = 0;
	float finalGrade;
	
	mathAdd();
	mathSub();
	mathMult();
	mathDivi();
	menuMod();	
	printf("Math Practice Program Main Menu\n\n");	//Main Menu
	printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
	printf("Select an option: ");
	scanf("%d", &mathPick);		//Case statement initialization
	
	while (mathPick != 5)
	{
		switch (mathPick)
		{
			case 1:
				correctAns = addMain(correctAns);
				totProb = totProb + 1;
				break;
			case 2:
				correctAns = subMain(correctAns);
				totProb = totProb + 1;
				break;	
			case 3:										
				correctAns = multMain(correctAns);
				totProb = totProb + 1;
				break;
			case 4:
				correctAns = diviMain(correctAns);
				totProb = totProb + 1;
				break;
			case 5:
				break;
			default:
				printf("invalid entry\n\n");
				printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
				printf("Select an option: ");
				scanf("%d", &mathPick);					
		}
		
		printf("Correct Answer - %d\n", correctAns);
		printf("Math Practice Program Main Menu\n\n");
		printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");	//Loop case print
		printf("Select an option: ");
		scanf("%d", &mathPick);
	}
	printf("Correct Answer - %d\n", correctAns);
	printf("You attempted %d problems and got %d correct\n", totProb, correctAns);	
	finalGrade = (correctAns / totProb) * 100 ;											
	printf("For a percentage correct of %.2f\n", finalGrade);
	
	system("pause");
	return 0;	
}

void mathAdd()
{
printf("           ++\n");	
printf("          ++++\n");
printf("         ++++++\n");
printf("        +++  +++\n");
printf("       +++    +++\n");
printf("      +++      +++\n");
printf("     +++        +++\n");
printf("    ++++++++++++++++\n");
printf("   ++++++++++++++++++\n");
printf("  +++              +++\n");
printf(" +++                +++     D D I T I O N\n");
printf("+++                  +++ \n");
Sleep(850);
system("cls");
return ;	
}
void mathSub()
{
printf("       ----------\n");	
printf("     ------------\n");
printf("   -----\n");
printf(" -----\n");
printf("  -----\n");
printf("      -----\n");
printf("        -----\n");
printf("          -----\n");
printf("            -----\n");
printf("          -----\n");
printf("  -----------     U B T R A C T I O N\n");
printf("  ---------\n");
Sleep(850);
system("cls");
return ;	
}
void mathMult()
{
printf("xxxxx                   xxxxx\n");
printf("xxxxxx                 xxxxxx\n");
printf("xxx xxx               xxx xxx\n");
printf("xxx  xxx             xxx  xxx\n");
printf("xxx   xxx           xxx   xxx\n");
printf("xxx    xxx         xxx    xxx\n");
printf("xxx     xxx       xxx     xxx\n");
printf("xxx      xxx     xxx      xxx\n");
printf("xxx       xxx   xxx       xxx\n");
printf("xxx        xxx xxx        xxx\n");
printf("xxx         xxx           xxx     U L T I P L I C A T I O N\n");
printf("xxx                       xxx\n");
Sleep(850);
system("cls");
return ;	
}
void mathDivi()
{
printf("///////////////\n");
printf("///          ///\n");	
printf("///           ///\n");	
printf("///            ///\n");	
printf("///             ///\n");	
printf("///              ///\n");	
printf("///               ///\n");	
printf("///               ///\n");	
printf("///              ///\n");	
printf("///            ///\n");	
printf("///          ///     I V I S I O N\n");	
printf("//////////////\n");		
Sleep(850);
system("cls");
printf("\n\n\n\n\n\n\n\nMATH PRACTICE TEST!!!");
Sleep(1000);
system("cls");
return ;	
}

void menuMod()
{
	int menuStart;
	
	printf("Input any number to continue\n");
	scanf("%d", &menuStart);
	return ;
}

int addMain(int correctAnsOne)
{
	//Declarations
	int userAns;
	int userTry=0;
	int rollOne;
	int rollTwo;
	int realAns;
	char diffPick;
	
	printf("Select difficulty level e-easy m-medium h-hard \n");
	scanf(" %c", &diffPick);
	while (diffPick != 'q')
	{	
		switch(diffPick)
		{
			case 'e':
				srand(time(NULL));  //Makes new random numbers each time program is run instead of fixed random numbers
	
				rollTwo = (rand()%10+1);
				rollOne = (rand()%10+1); 	
				realAns = rollOne + rollTwo;
		  
				printf("%d + %d = ? ", rollOne, rollTwo);			//First problem
				scanf("%d", &userAns);
				if (userAns == realAns)							//initial check
					{
					printf("\nCORRECT!\n\n");
					}										
				else 
				{
					while (userAns != realAns && userTry < 2)
						{
							printf("\nSorry... that isn't correct\n");  //2 additional attempts
							printf("\nTry again!\n\n");
							scanf("%d", &userAns);
							userTry = userTry + 1;
						
						}
					if (userAns != realAns)		//final attempt incorrect prompt
					{
						printf("\nSorry, you're out of attempts\n\n");
						return correctAnsOne;
					}
					else 
					{
						printf("\nCORRECT!\n\n");		//post loop correct prompt
					}	
				}
				diffPick = 'q';
				break;
			case 'm':
				srand(time(NULL));  
	
				rollTwo = (rand()%100+1);
				rollOne = (rand()%100+1); 	 
				realAns = rollOne + rollTwo;
		  
				printf("%d + %d = ? ", rollOne, rollTwo);			//First problem
				scanf("%d", &userAns);
				if (userAns == realAns)							//initial check
					{
					printf("\nCORRECT!\n\n");
					}										
				else 
				{
					while (userAns != realAns && userTry < 2)
						{
							printf("\nSorry... that isn't correct\n");  //2 additional attempts
							printf("\nTry again!\n\n");
							scanf("%d", &userAns);
							userTry = userTry + 1;
						
						}
					if (userAns != realAns)		//final attempt incorrect prompt
					{
						printf("\nSorry, you're out of attempts\n\n");
						return correctAnsOne;
					}
					else 
					{
						printf("\nCORRECT!\n\n");		//post loop correct prompt
					}	
				}
				diffPick = 'q';
				break;
			case 'h':
				srand(time(NULL));  
	
				rollTwo = (rand()%1000+1);
				rollOne = (rand()%1000+1); 	 
				realAns = rollOne + rollTwo;
		  
				printf("%d + %d = ? ", rollOne, rollTwo);			//First problem
				scanf("%d", &userAns);
				if (userAns == realAns)							//initial check
					{
					printf("\nCORRECT!\n\n");
					correctAnsOne = correctAnsOne + 1;
					}										
				else 
				{
					while (userAns != realAns && userTry < 2)
						{
							printf("\nSorry... that isn't correct\n");  //2 additional attempts
							printf("\nTry again!\n\n");
							scanf("%d", &userAns);
							userTry = userTry + 1;
						
						}
					if (userAns != realAns)		//final attempt incorrect prompt
					{
						printf("\nSorry, you're out of attempts\n\n");
						return correctAnsOne;
					}
					else 
					{
						printf("\nCORRECT!\n\n");		//post loop correct prompt
					}	
				}
				diffPick = 'q';
				break;
			default:
				printf("Please enter e,m, or h : ");
				scanf("%c", &diffPick);		
		}
	}
return correctAnsOne + 1;	
}

int subMain(int correctAnsOne)
{
	//Declarations
	int userAns;
	int userTry=0;
	int rollOne;
	int rollTwo;
	int realAns;
	char diffPick;
	
	printf("Select difficulty level e-easy m-medium h-hard \n");
	scanf(" %c", &diffPick);
	while (diffPick != 'q')
	{	
		switch(diffPick)
		{
			case 'e':
				srand(time(NULL));  //Makes new random numbers each time program is run instead of fixed random numbers
	
				rollTwo = (rand()%10+1);
				rollOne = (rand()%10+1); 	 
				realAns = rollOne - rollTwo;
		  
				printf("%d - %d = ? ", rollOne, rollTwo);			//First problem
				scanf("%d", &userAns);
				if (userAns == realAns)							//initial check
					{
					printf("\nCORRECT!\n\n");
					}										
				else 
				{
					while (userAns != realAns && userTry < 2)
						{
							printf("\nSorry... that isn't correct\n");  //2 additional attempts
							printf("\nTry again!\n\n");
							scanf("%d", &userAns);
							userTry = userTry + 1;
						
						}
					if (userAns != realAns)		//final attempt incorrect prompt
					{
						printf("\nSorry, you're out of attempts\n\n");
						return correctAnsOne;
					}
					else 
					{
						printf("\nCORRECT!\n\n");		//post loop correct prompt
					}	
				}
				diffPick = 'q';
				break;
			case 'm':
				srand(time(NULL));  
	
				rollTwo = (rand()%100+1);
				rollOne = (rand()%100+1); 	 
				realAns = rollOne - rollTwo;
		  
				printf("%d - %d = ? ", rollOne, rollTwo);			//First problem
				scanf("%d", &userAns);
				if (userAns == realAns)							//initial check
					{
					printf("\nCORRECT!\n\n");
					}										
				else 
				{
					while (userAns != realAns && userTry < 2)
						{
							printf("\nSorry... that isn't correct\n");  //2 additional attempts
							printf("\nTry again!\n\n");
							scanf("%d", &userAns);
							userTry = userTry + 1;
						
						}
					if (userAns != realAns)		//final attempt incorrect prompt
					{
						printf("\nSorry, you're out of attempts\n\n");
						return correctAnsOne;
					}
					else 
					{
						printf("\nCORRECT!\n\n");		//post loop correct prompt
					}	
				}
				diffPick = 'q';
				break;
			case 'h':
				srand(time(NULL));  
	
				rollTwo = (rand()%1000+1);
				rollOne = (rand()%1000+1); 	
				realAns = rollOne - rollTwo;
		  
				printf("%d - %d = ? ", rollOne, rollTwo);			//First problem
				scanf("%d", &userAns);
				if (userAns == realAns)							//initial check
					{
					printf("\nCORRECT!\n\n");
				
					}										
				else 
				{
					while (userAns != realAns && userTry < 2)
						{
							printf("\nSorry... that isn't correct\n");  //2 additional attempts
							printf("\nTry again!\n\n");
							scanf("%d", &userAns);
							userTry = userTry + 1;
						
						}
					if (userAns != realAns)		//final attempt incorrect prompt
					{
						printf("\nSorry, you're out of attempts\n\n");
						return correctAnsOne;
					}
					else 
					{
						printf("\nCORRECT!\n\n");		//post loop correct prompt
						
					}	
				}
				diffPick = 'q';
				break;
			default:
				printf("Please enter e,m, or h : ");
				scanf("%c", &diffPick);		
		}
	}
return correctAnsOne + 1;	
}
int multMain(int correctAnsOne)
{	
	//Declarations
	int userAns;
	int userTry=0;
	int rollOne;
	int rollTwo;
	int realAns;
	char diffPick;
	
	printf("Select difficulty level e-easy m-medium h-hard \n");
	scanf(" %c", &diffPick);
	while (diffPick != 'q')
	{	
		switch(diffPick)
		{
			case 'e':
				srand(time(NULL));  //Makes new random numbers each time program is run instead of fixed random numbers
	
				rollTwo = (rand()%10+1);
				rollOne = (rand()%10+1); 	 
				realAns = rollOne * rollTwo;
		  
				printf("%d x %d = ? ", rollOne, rollTwo);			//First problem
				scanf("%d", &userAns);
				if (userAns == realAns)							//initial check
					{
					printf("\nCORRECT!\n\n");
					}										
				else 
				{
					while (userAns != realAns && userTry < 2)
						{
							printf("\nSorry... that isn't correct\n");  //2 additional attempts
							printf("\nTry again!\n\n");
							scanf("%d", &userAns);
							userTry = userTry + 1;
						
						}
					if (userAns != realAns)		//final attempt incorrect prompt
					{
						printf("\nSorry, you're out of attempts\n\n");
						return correctAnsOne;
					}
					else 
					{
						printf("\nCORRECT!\n\n");		//post loop correct prompt
					}	
				}
				diffPick = 'q';
				break;
			case 'm':
				srand(time(NULL));  
	
				rollTwo = (rand()%100+1);
				rollOne = (rand()%100+1); 	
				realAns = rollOne + rollTwo;
		  
				printf("%d x %d = ? ", rollOne, rollTwo);			//First problem
				scanf("%d", &userAns);
				if (userAns == realAns)							//initial check
					{
					printf("\nCORRECT!\n\n");
					}										
				else 
				{
					while (userAns != realAns && userTry < 2)
						{
							printf("\nSorry... that isn't correct\n");  //2 additional attempts
							printf("\nTry again!\n\n");
							scanf("%d", &userAns);
							userTry = userTry + 1;
						
						}
					if (userAns != realAns)		//final attempt incorrect prompt
					{
						printf("\nSorry, you're out of attempts\n\n");
						return correctAnsOne;
					}
					else 
					{
						printf("\nCORRECT!\n\n");		//post loop correct prompt
					}	
				}
				diffPick = 'q';
				break;
			case 'h':
				srand(time(NULL));  
	
				rollTwo = (rand()%1000+1);
				rollOne = (rand()%1000+1); 	
				realAns = rollOne * rollTwo;
		  
				printf("%d x %d = ? ", rollOne, rollTwo);			//First problem
				scanf("%d", &userAns);
				if (userAns == realAns)							//initial check
					{
					printf("\nCORRECT!\n\n");
					}										
				else 
				{
					while (userAns != realAns && userTry < 2)
						{
							printf("\nSorry... that isn't correct\n");  //2 additional attempts
							printf("\nTry again!\n\n");
							scanf("%d", &userAns);
							userTry = userTry + 1;
						
						}
					if (userAns != realAns)		//final attempt incorrect prompt
					{
						printf("\nSorry, you're out of attempts\n\n");
						return correctAnsOne;
					}
					else 
					{
						printf("\nCORRECT!\n\n");		//post loop correct prompt
					}	
				}
				diffPick = 'q';
				break;
			default:
				printf("Please enter e,m, or h : ");
				scanf("%c", &diffPick);		
		}
	}
return correctAnsOne + 1;	
}
int diviMain(int correctAnsOne)
{
	//Declarations
	int userAns;
	int userRemainNum;
	int userTry=0;
	int rollOne;
	int rollTwo;
	int realAns;
	int realRemainNum;
	char diffPick;
	
	printf("Select difficulty level e-easy m-medium h-hard \n");
	scanf(" %c", &diffPick);
	while (diffPick != 'q')
	{	
		switch(diffPick)
		{
			case 'e':
				srand(time(NULL));  //Makes new random numbers each time program is run instead of fixed random numbers
	
				rollTwo = (rand()%10+1);
				rollOne = (rand()%10+rollTwo); 	//makes sure first number is always greater than/ equal to second number (for division) 
				realAns = rollOne / rollTwo;	//computes quotient (answer)
				realRemainNum = rollOne % rollTwo;	//computes remainder  
		  
				printf("%d / %d = ? \n", rollOne, rollTwo);			//First problem
				printf("Enter quotient\n");
				scanf("%d", &userAns);
				printf("Enter any remainder");
				scanf("%d", userRemainNum);
				if (userAns == realAns)							//initial check
					{
					printf("\nCORRECT!\n\n");
					}										
				else 
				{
					while (userAns != realAns && userRemainNum != realRemainNum && userTry < 2)
						{
							printf("\nSorry... that isn't correct\n");  //2 additional attempts
							printf("\nTry again!\n\n");
							scanf("%d", &userAns);
							userTry = userTry + 1;
						
						}
					if (userAns != realAns && userRemainNum != realRemainNum)		//final attempt incorrect prompt
					{
						printf("\nSorry, you're out of attempts\n\n");
						return correctAnsOne;
					}
					else 
					{
						printf("\nCORRECT!\n\n");		//post loop correct prompt
					}	
				}
				diffPick = 'q';
				break;
			case 'm':
				srand(time(NULL));  
	
				rollTwo = (rand()%10+1);
				rollOne = (rand()%10+rollTwo); 	//makes sure first number is always greater than/ equal to second number (for division) 
				realAns = rollOne / rollTwo;	//computes quotient (answer)
				realRemainNum = rollOne % rollTwo;	//computes remainder  
		  
				printf("%d / %d = ? \n", rollOne, rollTwo);			//First problem
				printf("Enter quotient\n");
				scanf("%d", &userAns);
				printf("Enter any remainder");
				scanf("%d", userRemainNum);
				if (userAns == realAns)							//initial check
					{
					printf("\nCORRECT!\n\n");
					}										
				else 
				{
					while (userAns != realAns && userRemainNum != realRemainNum && userTry < 2)
						{
							printf("\nSorry... that isn't correct\n");  //2 additional attempts
							printf("\nTry again!\n\n");
							scanf("%d", &userAns);
							userTry = userTry + 1;
						
						}
					if (userAns != realAns && userRemainNum != realRemainNum)		//final attempt incorrect prompt
					{
						printf("\nSorry, you're out of attempts\n\n");
						return correctAnsOne;
					}
					else 
					{
						printf("\nCORRECT!\n\n");		//post loop correct prompt
					}	
				}
				diffPick = 'q';
				break;
			case 'h':
				srand(time(NULL));  
	
				rollTwo = (rand()%10+1);
				rollOne = (rand()%10+rollTwo); 	//makes sure first number is always greater than/ equal to second number (for division) 
				realAns = rollOne / rollTwo;	//computes quotient (answer)
				realRemainNum = rollOne % rollTwo;	//computes remainder  
		  
				printf("%d / %d = ? \n", rollOne, rollTwo);			//First problem
				printf("Enter quotient\n");
				scanf("%d", &userAns);
				printf("Enter any remainder");
				scanf("%d", userRemainNum);
				if (userAns == realAns)							//initial check
					{
					printf("\nCORRECT!\n\n");
					}										
				else 
				{
					while (userAns != realAns && userRemainNum != realRemainNum && userTry < 2)
						{
							printf("\nSorry... that isn't correct\n");  //2 additional attempts
							printf("\nTry again!\n\n");
							scanf("%d", &userAns);
							userTry = userTry + 1;
						
						}
					if (userAns != realAns && userRemainNum != realRemainNum)		//final attempt incorrect prompt
					{
						printf("\nSorry, you're out of attempts\n\n");
						return correctAnsOne;
					}
					else 
					{
						printf("\nCORRECT!\n\n");		//post loop correct prompt
					}	
				}
				diffPick = 'q';
				break;
			default:
				printf("Please enter e,m, or h : ");
				scanf("%c", &diffPick);		
		}
	}
return correctAnsOne + 1;	
}
