#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
int main()
     {
     int quizCounters,r,r1,countingQuiz,i,n;
     float countingScores;
     char options;
     char playername[20];
     mainhome:
     system("cls");

     printf("\n\t\t****************************************");

     printf("\n\t\t\t   WELCOME TO QUIZ GAME");

     printf("\n\t\t****************************************");
     printf("\n\t\t****************************************");
     printf("\n\t\t   North Sourh University") ;
	 printf("\n\t\t   CSE115 - Programming Language I") ;
     printf("\n\t\t****************************************");
     printf("\n\t\t****************************************");
     printf("\n\t\t Enter 1 to start the game");
     printf("\n\t\t Enter 2 to view the highest score  ");
     printf("\n\t\t Enter 3 to reset score");
     printf("\n\t\t Enter 4 for help            ");
     printf("\n\t\t Enter 5 to quit             ");
     printf("\n\t\t****************************************\n\n");
     options=toupper(getch());
     if (options=='2')
	{
	show_record();
	goto mainhome;
	}
     else if (options=='3')
	{
	help();getch();
	goto mainhome;
	}
	else if (options=='4')
	{reset_score();
	getch();
	goto mainhome;}
	else if (options=='5')
	exit(1);
    else if(options=='1')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tRegister your name:");
     gets(playername);

    system("cls");
    printf("\n ****************************************  Welcome %s to C Program Quiz Game ****************************************",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n ****************************************");
    printf("\n A. This quiz game has two rounds: a warm-up round and a challenge round.");
    printf("\n B. You will be asked three questions in the warm-up round to test your knowledge.");
    printf("\n    knowledge in general If you donate at least 2 hours of your time, you are qualified to play the game.");
    printf("\n   If you don't get the right answers, you won't be able to move on to the Challenge Round.");
    printf("\n C. CHALLENGE ROUND is the first round of your game. Each correct answer will get you Php100,000!. ");
    printf("\n    You will be asked a total of 10 questions in this round. ");
    printf("\n    You can win up to ONE MILLION PESOS in this manner!!!!! ..........");
    printf("\n D. You will be given four alternatives, and you must select the correct one by pressing 1,2,3,4,5.");
    printf("\n E. You will be asked questions incessantly until you provide correct answers.");
    printf("\n F. There will be no deductions for incorrect responses!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press E  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='E')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     countingQuiz=0;
     for(i=1;i<=3;i++)
     {
    system("cls");
     r1=i;


     switch(r1)
		{
		case 1:
		printf("\n\nWhat is the only thing that computers understand?");
		printf("\n\nA.Machine Code\t\tB.Low Level Languages\n\nC.High Level Languages\t\tD.Algorithms");
		if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect!!!");countingQuiz++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is A.Machine Code");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\n Before a computer can understand a program it must be");
		printf("\n\nA.Translated into its machine code.\t\tB.Translated into a high level language.\n\nC.Translated into a low level language.");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countingQuiz++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Translated into a high level language.");
		       getch();
		       break;}

        case 3:
		printf("\n\n\nA list of instructions that enable a computer to perform a specific task is a...?");
		printf("\n\nA.Computer Program\t\tB.Algorithm\n\nC.Machine Code\t\tD.Binary Code");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countingQuiz++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Binary Code");
		       getch();
		       break;}

        case 4:
		printf("\n\n\nWhen writing a computer programmers most program use...");
		printf("\n\nA.A High Level Language\t\tB.A Low Level Language\n\nC.A Machine Code\t\tD.An Algorithm ");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countingQuiz++;
			getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.A Low Level Language");
		       getch();
		       break;}

        case 5:
        printf("\n\n\nA language that requires no knowledge of the hardware or the instruction set of the computer is called...");
        printf("\n\nA.A High Level Language\t\tB.Machine Code\n\nC.A Low Level Language\t\tD.An Algorithm");
        if (toupper(getch())=='A')
               {printf("\n\nCorrect!!!");countingQuiz++;
               getch();
                break;}
        else
		       {printf("\n\nWrong!!! The correct answer is A.A High Level Language");
		       getch();
		       break;}

        case 6:
		printf("\n\n\nA language that is close to human language and which is easy to write, debug and maintain is known as...");
		printf("\n\nA.A High Level Language\t\tB.A Low Level Language\n\nC.An Algorithm\t\tD.Machine Code");
		if (toupper(getch())=='D' )
			{printf("\n\nCorrect!!!");countingQuiz++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Machine Code");
		       getch();
		       break;}}
		       }

	if(countingQuiz>=2)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
		{goto game;}
game:
     quizCounters=0;
     for(i=1;i<=10;i++)
     {system("cls");
     r=i;

     switch(r)
		{
		case 1:
		printf("\n\nResolving errors in a program is known as...");
		printf("\n\nA.Debugging\t\tB.Error Checking\n\nC.Refixing\t\tD.Problem Solving");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");quizCounters++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Error Checking");getch();
		       goto countingScores;
		       break;}

		case 2:
		printf("\n\n\nWhich of the following is not a high level programming language?");
		printf("\n\nA.Assembly\t\tB.Java\n\nC.Python\t\tD.C++");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");quizCounters++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Assembly");getch();
		      goto countingScores;
		       break;
		       }

        case 3:
		printf("\n\n\nLanguages that relate to the architecture and hardware of a specific computer are known as...");
		printf("\n\nA.High Level Languages\t\tB.Simplex Languages\n\nC.Low Level Languages\t\tD.Complex Languages");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");quizCounters++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Low Level Languages");getch();
		       goto countingScores;
		       break;}

        case 4:
		printf("\n\n\nThe two categories of low level language are...");
		printf("\n\nA.Machine Code & Assembly\t\tB.Machine Code & Algorithms \n\nC.Assembly & Algorithms\t\tD.Algorithms & Binary");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");quizCounters++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.Machine Code & Assembly");getch();
		       goto countingScores;
		       break;
		       }

        case 5:
		printf("\n\n\nWhich of the following is not an advantage of using a low level language? ");
		printf("\n\nA.Makes more efficient use of primary memory.\t\tB.Tailor a program to a specific piece of hardware.\n\nC.To perform a task very quickly.\t\tD.To enable the program to be run on multiple platforms.");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");quizCounters++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.Tailor a program to a specific piece of hardware.");
		       getch();
		       goto countingScores;
		       break;
		       }

		case 6:
		printf("\n\n\nWhat is the name for the software used to convert an assembly language program into machine code?");
		printf("\n\nA.Assembler\t\tB.Compiler\n\nC.Interpreter\t\tD.Translator");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");quizCounters++;getch();
			 break;}	else
		       {printf("\n\nWrong!!! The correct answer is B.Compiler");goto countingScores;
		       getch();
		       break;}

        case 7:
		printf("\n\n\nWhich of the following command would not be found in an assembly language?");
		printf("\n\nA.LOAD\t\tB.ADD\n\nC.STORE\t\tD.SORT");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");quizCounters++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.SORT");getch();
		       goto countingScores;
		       break;}

        case 8:
		printf("\n\n\nThe 3 main types of translators are...");
		printf("\n\nA.Assemblers, Compilers & Interpreters \t\tB.Assemblers, Compilers & Converters \n\nC.Assemblers, Scripters  & Interpreters \t\tD.Converters, Scripters & Interpreters ");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");quizCounters++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Assemblers, Compilers & Converters ");getch();
		       goto countingScores;
		       break;}

        case 9:
		printf("\n\n\nWhich type of translator creates an executable file of machine code from a program written in a high level language? ");
		printf("\n\nA.Compiler\t\tB.Interpreter\n\nC.Assembler\t\tD.Executor");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");quizCounters++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Compiler");getch();
		       goto countingScores;
		       break;}

        case 10:
		printf("\n\n\nSoftware that translates and executes a high level language program one line at a time is known as a?");
		printf("\n\nA.Compiler\t\tB.Assembler\n\nC.Interpreter\t\tD.Executor");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");quizCounters++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Interpreter");getch();break;goto countingScores;}

        case 11:
		printf("\n\n\nWhat is a high-level programming language that was developed in the mid-1970s. It is now used to write applications for nearly every available platform.");
		printf("\n\nA.Scratch\t\tB.tynker\n\nC.Bark-Bark\t\tD.C++");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");quizCounters++;getch();
			 break;}
		else
              {printf("\n\nWrong!!! The correct answer is C.Bark-Bark");getch();
              break;goto countingScores;}

        case 12:
		printf("\n\n\nWhat does binary code mean?");
		printf("\n\nA.a coding system using the binary digits 0 and 1. \t\tB.a coding system using the binary digits 1-10 \n\nC.1000100100\t\tD.Itsourcecode.com");
		if (toupper(getch())=='A')
			  {printf("\n\nCorrect!!!");quizCounters++;getch();
			   break;}
		else
              {printf("\n\nWrong!!! The correct answer is A.a coding system using the binary digits 0 and 1. ");getch();
              break;goto countingScores;}

		case 13:
		printf("\n\n\nWhat is an open source, high-level programming language designed to be easy to read and simple to implement. ");
		printf("\n\nA.Sumatra\t\tB.blocks\n\nC.Java\t\tD.Latin");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");quizCounters++;getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.latin");getch();
		       break;goto countingScores;}

        case 14:
		printf("\n\n\nWhat is the smallest unit of measurement used to quantify computer data. ");
		printf("\n\nA.a bridle\t\tB.marble\n\nC.a bit\t\tD.a tablespoon");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");quizCounters++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.a bridle");getch();
		       break;goto countingScores;}

		case 15:
		printf("\n\n\nAssembly language is...?");
		printf("\n\nA.A small business meeting\t\tB.Used for manufacturing automobiles\n\nC.a high level language like Java\t\tD.a low level machine language");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");quizCounters++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Used for manufacturing automobiles");getch();
		       goto countingScores;
		       break;}

		case 16:
		printf("\n\n\nJava, Python, PHP, and C++ are examples of ");
		printf("\n\nA.low level languages\t\tB.Graphic arts languages\n\nC.medium level languages\t\tD.high level languages");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");quizCounters++; getch();
			break;
			}
		else
		       {printf("\n\nWrong!!! The correct answer is A.low level languages");getch();
		       goto countingScores;
		       break;}


		case 17:
		printf("\n\n\nJavaScript is the same language as Java.");
		printf("\n\nA.Yes\t\tB.No");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");quizCounters++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Yes");getch();goto countingScores;
		       break;}

		case 18:
		printf("\n\n\nOne kilobyte is equal to approximately ________ memory locations. ");
		printf("\n\nA.1,000\t\tB.100,000\n\nC.10,000\t\tD.1,000,000\n\n");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");quizCounters++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.1,000,000");getch();goto countingScores;
		       break;}

		case 19:
		printf("\n\n\nAn error in a program that prevents the program from running as expected.");
		printf("\n\nA.Error report\tB.Mistake\n\nC.Bug\tD.Algorithm\n\n");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");quizCounters++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Bug");getch();goto countingScores;
		       break;}

		case 20:
		printf("\n\n\nFinding and fixing errors in programs");
		printf("\n\nA.Tech support\t\tB.Debugging\n\nDecompose\t\tFixing");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");quizCounters++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Debugging");getch();goto countingScores;
		       break;}

		case 21:
		printf("\n\n\nTo focus on the logic and make refinements to a program before translating it into a programming language, a programmer often creates an outline of the program’s algorithm. What is the term for this type of outline?");
		printf("\n\nPseudocode\t\tB.Compiler\n\nC.Sketch\t\tInterpreter");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");quizCounters++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D. Interpreter");getch();goto countingScores;
		       break;}

		case 22:
		printf("\n\n\nHow many bits make up one letter in binary code?");
		printf("\n\nA.4\t\tB.8\n\nC.6\t\tD.S10");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");quizCounters++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.S10");getch();goto countingScores;
		       break;}

		case 23:
		printf("\n\n\nBinary uses how many digit(s)?");
		printf("\n\nA.1\t\tB.4\n\nC.8\t\tD.2");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");quizCounters++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.8");getch();goto countingScores;
		       break;}}}
	countingScores:
    system("cls");
	countingScores=(float)quizCounters*100000;
	if(countingScores>0.00 && countingScores<1000000)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t You won $%.2f",countingScores);goto go;}

	 else if(countingScores==1000000.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
	    printf("\n\t\t You won $%.2f",countingScores);
	    printf("\t\t Thank You!!");
	}
	 else
{
	 printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(countingScores,playername);
		goto mainhome;}}}

void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();}

void reset_score()
    {system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}

void help()
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n *************************************************************");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n A. This quiz game has two rounds: a warm-up round and a challenge round.");
    printf("\n B. You will be asked three questions in the warm-up round to test your knowledge.");
    printf("\n    knowledge in general If you donate at least 2 hours of your time, you are qualified to play the game.");
    printf("\n   If you don't get the right answers, you won't be able to move on to the Challenge Round.");
    printf("\n C. CHALLENGE ROUND is the first round of your game. Each correct answer will get you Php100,000!. ");
    printf("\n    You will be asked a total of 10 questions in this round. ");
    printf("\n    You can win up to ONE MILLION PESOS in this manner!!!!! ..........");
    printf("\n D. You will be given four alternatives, and you must select the correct one by pressing 1,2,3,4,5.");
    printf("\n E. You will be asked questions incessantly until you provide correct answers.");
    printf("\n F. There will be no deductions for incorrect responses!");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t*****C PROGRAM QUIZ GAME is developed by SHUVO********");}

void edit_score(float countingScores, char plnm[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (countingScores>=sc)
	  { sc=countingScores;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}
