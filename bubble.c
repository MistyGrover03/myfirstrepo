#include<stdio.h>
struct student
{
	int rollno;
	char name[10];
	int height;
	
	
};

int main()
{
	struct student s[5],temp;
	int i,j;
	printf("enter details");
	for(i=0;i<=4;i++)
	{
		scanf("%d %s %d",&s[i].rollno,s[i].name,&s[i].height);
	
	}
		printf("details are");
		for(i=0;i<=4;i++)
	{
		printf("\n%d %s %d",s[i].rollno,s[i].name,s[i].height);
	}
	printf("\n**************");
		for(i=1;i<5;i++)
		{
			for(j=0;j<5-i;j++)
			{
				if(s[j].height>s[j+1].height)
				{
				temp=s[j];
				s[j]=s[j+1];	
				s[j+1]=temp;
				}
			}
			
		}
		for(i=0;i<=4;i++)
	{
		printf("\n%d %s %d",s[i].rollno,s[i].name,s[i].height);
	
	}

}
