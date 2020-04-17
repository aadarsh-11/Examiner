void heading()
{
	nl(2);
	design(168);
	nl(2);
	tab(9);
	//Enter the title of the exam
	printf("**EXAM NAME**\n\n");
	design(168);
}

int totaltime()
{
	//Enter the total time(hours) for the exam as the return value:-
	return 1;
}

int noq()
{
	//Enter the number of questions as the return value:-
	return 10;
}

//Enter the positive marks per question:-
int positive_marks_per_correct_answer=4;

//Enter the negative marks per wrong answer:-
int negative_marks_per_wrong_answer=1;

int maxmarks()
{
	//Enter the max marks as the return value:-
	return noq()*positive_marks_per_correct_answer;
}

//Enter the passing marks:-
int passing_marks=20;

void instructions()
{
	//Enter the instructions here:-
	printf("\n\n*INSTRUCTIONS:-\n---------------");
	printf("\n\n1)There are a total of %d questions.\n2)All questions are compulsory.\n3)Each question carries %d marks.\n4)For each wrong answer %d mark will be deducted.\n5)A minimum of %d marks is required to qualify for next exam.\n6)Once answered it cannot be changed.\n7)Once completed all the questions press enter to submit your answers.\n", noq(), positive_marks_per_correct_answer, negative_marks_per_wrong_answer, passing_marks);
	printf("\n\n\n\n\n press any key to continue....");
	getch();
}

//Enter the answerkey according to questions respectively:- 
int answer[]={1,1,1,1,1,1,1,1,1,1};

void questions(int a[])
{
	//Enter the questions and remove the remaining ones:-
	fflush(stdin);
	printf("*Choose the correct option:\n\n");
	
	printf("Q.1)\n\n");
	printf("1)\n");
	printf("2)\n");
	printf("3)\n");
	printf("4)\n\nPlease select an option:- ");
	scanf("%d",&a[0]);
	while(a[0]<0||a[0]>4)
	{
		printf("Please select a valid option:- ");
		scanf("%d",&a[0]);
	}
	nl(1);
	dash(168);
	
	printf("Q.2)\n\n");
	printf("1)\n");
	printf("2)\n");
	printf("3)\n");
	printf("4)\n\nPlease select an option:- ");
	scanf("%d",&a[1]);
	while(a[1]<0||a[1]>4)
	{
		printf("Please select a valid option:- ");
		scanf("%d",&a[1]);
	}
	nl(1);
	dash(168);
	nl(1);
	
	printf("Q.3)\n\n");
	printf("1)\n");
	printf("2)\n");
	printf("3)\n");
	printf("4)\n\nPlease select an option:- ");
	scanf("%d",&a[2]);
	while(a[2]<0||a[2]>4)
	{
		printf("Please select a valid option:- ");
		scanf("%d",&a[2]);
	}
	nl(1);
	dash(168);
	nl(1);
	
	printf("Q.4)\n\n");
	printf("1)\n");
	printf("2)\n");
	printf("3)\n");
	printf("4)\n\nPlease select an option:- ");
	scanf("%d",&a[3]);
	while(a[3]<0||a[3]>4)
	{
		printf("Please select a valid option:- ");
		scanf("%d",&a[3]);
	}
	nl(1);
	dash(168);
	nl(1);
	
	printf("Q.5)\n\n");
	printf("1)\n");
	printf("2)\n");
	printf("3)\n");
	printf("4)\n\nPlease select an option:- ");
	scanf("%d",&a[4]);
	while(a[4]<0||a[4]>4)
	{
		printf("Please select a valid option:- ");
		scanf("%d",&a[4]);
	}
	nl(1);
	dash(168);
	nl(1);
	
	printf("Q.6)\n\n");
	printf("1)\n");
	printf("2)\n");
	printf("3)\n");
	printf("4)\n\nPlease select an option:- ");
	scanf("%d",&a[5]);
	while(a[5]<0||a[5]>4)
	{
		printf("Please select a valid option:- ");
		scanf("%d",&a[5]);
	}
	nl(1);
	dash(168);
	nl(1);
	
	printf("Q.7)\n\n");
	printf("1)\n");
	printf("2)\n");
	printf("3)\n");
	printf("4)\n\nPlease select an option:- ");
	scanf("%d",&a[6]);
	while(a[6]<0||a[6]>4)
	{
		printf("Please select a valid option:- ");
		scanf("%d",&a[6]);
	}
	nl(1);
	dash(168);
	nl(1);
	
	printf("Q.8)\n\n");
	printf("1)\n");
	printf("2)\n");
	printf("3)\n");
	printf("4)\n\nPlease select an option:- ");;
	scanf("%d",&a[7]);
	while(a[7]<0||a[7]>4)
	{
		printf("Please select a valid option:- ");
		scanf("%d",&a[7]);
	}
	nl(1);
	dash(168);
	nl(1);
	
	printf("Q.9)\n\n");
	printf("1)\n");
	printf("2)\n");
	printf("3)\n");
	printf("4)\n\nPlease select an option:- ");
	scanf("%d",&a[8]);
	while(a[8]<0||a[8]>4)
	{
		printf("Please select a valid option:- ");
		scanf("%d",&a[8]);
	}
	nl(1);
	dash(168);
	nl(1);
	
	printf("Q.10)\n\n");
	printf("1)\n");
	printf("2)\n");
	printf("3)\n");
	printf("4)\n\nPlease select an option:- ");
	scanf("%d",&a[9]);
	while(a[9]<0||a[9]>4)
	{
		printf("Please select a valid option:- ");
		scanf("%d",&a[9]);
	}
	nl(1);
	dash(168);
	nl(1);
}
