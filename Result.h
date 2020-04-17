void result(int a[],int n,int answer[],time_t end,time_t start,char mis[],char name[])
{
	heading();
	nl(3);
	tab(4);
	underscore(102);
	nl(1);
	tab(4);
	dash2(102);
	nl(2);
	tab(9);
	printf("      RESULT\n");
	tab(9);
	printf("      ------\n\n");
	nl(1);	
	
	tab(5);
	printf("MIS: %s",mis);
	tab(7);
	printf("NAME: %s\n",name);
	tab(5);
	dash(strlen(mis)+5);
	tab(7);
	dash(strlen(name)+6);
	nl(2);
	tab(5);
	
	int marks=0,i;
	int tempminutes=(difftime(end, start))/60;
	int hours=tempminutes/60;
	int minutes=tempminutes-(hours*60);
	float seconds=(difftime(end, start))-(tempminutes*60);
	//printf("*Time taken:- %.2f seconds\n\n", 
          // difftime(end, start));
    printf("*Time taken:- %d hrs %d mins %.0f secs\n\n",hours,minutes,seconds);
	
	tab(5);
	printf("Below are the Questionwise marks for your answers:-\n");
	for(i=0;i<n;i++)
	{
		if(a[i]==answer[i])
		{
			tab(5);
			printf("%d)correct",i+1);
			tab(8);
			printf("+%d\n",positive_marks_per_correct_answer);
			marks=marks+positive_marks_per_correct_answer;
		}
		else
		{
			tab(5);
			printf("%d)incorrect",i+1);
			tab(8);
			printf("-%d\n",negative_marks_per_wrong_answer);
			marks=marks-negative_marks_per_wrong_answer;
		}
	}
	
	tab(13);
	printf("      ");
	dash2(6);
	nl(1);
	tab(5);	
	printf("Total Marks: ");
	tab(7);
	printf("         %d\n\n",marks);

	if(marks>passing_marks)
	{
		tab(7);
		printf("Congratulations you have cracked the examination!\n");
	}
	else
	{
		tab(9);
		printf("Sorry you failed!");
	}
	
	nl(3);
	tab(4);
	underscore(102);
	nl(1);
	tab(4);
	dash2(102);
	nl(2);
	getch();
}
