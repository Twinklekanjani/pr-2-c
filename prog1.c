#include<stdio.h>
#include<conio.h>
int main()
{
	char grade;
	int  score;
	
	printf("Enter score:");
	scanf("%d",&score);
       grade = (score>=90)
		                ? 'A'
		                :(score>=80)
		                        ? 'B'
		                        :(score>=70)
		                                ? 'C'
		                                :(score>=60)
		                                        ? 'D'
		                                        :(score>=50)
		                                                ? 'E'
		                                                : 'F';
		printf("Your grade is : %c",grade);

		switch (grade)
		{
		case 'A':
			printf("\n Excellent work!");
			break;
		case 'B':
			printf("\n Well done");
			break;
		case 'C':
			printf("\n Good job");
			break;
		case 'D':
			printf("\n You passed but you could do better.");
			break;
		case 'E':
			printf("\n Passed with grace");
			break;

		case 'F':
			printf("\n Sorry you failed.");
			break;
		default:
			printf("\n INVAID CHOICE.");
		}

	if(grade== 'F')
	{
		printf("\n You are failed.");
	}
	else
	{
		printf("\n Congratulations! You are eligible for the next level.");
	}

    return 0;
}