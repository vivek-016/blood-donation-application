#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Donor
{
	int slno;
	char Hname[20];
	char Dname[20];
	char Darea[20];
	char DBloodGroup[20];
	int Dmobilenumber;

}
Donor[100];
void main()
{
	int i,n;
	
	printf("Enter number of donors \n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("slno=%d\n",i);
		printf(" name of the hospital:\n ");
		scanf(" %s",Donor[i].Hname);
		printf("%s\n",Donor[i].Hname);

		printf(" name of the donor:\n ");
		scanf(" %s",&Donor[i].Dname);
		printf("%s\n",Donor[i].Dname);
		printf("  area:\n ");
		scanf(" %s",&Donor[i].Darea);
		printf("%s\n",Donor[i].Darea);
		printf("\n blood group:\n ");
		scanf(" %s",&Donor[i].DBloodGroup);
		printf("%s\n",Donor[i].DBloodGroup);
		printf("  mobile number:\n ");
		scanf(" %d",&Donor[i].Dmobilenumber);
		printf("%d\n",Donor[i].Dmobilenumber);
		

	}

	for(i=0;i<n;i++)
	{
		printf(" \n Sl no\t hospital\t dname\t darea\t dBG\t dMN\n");
		printf(" %d",Donor[i].slno);
		printf(" \t %s",Donor[i].Hname);
		printf(" \t %s",Donor[i].Dname);
		printf(" \t %s",Donor[i].Darea);
		printf(" \t %s",Donor[i].DBloodGroup);
		printf(" \t %d",Donor[i].Dmobilenumber);
	}
	char temp[20];
    printf("Enter the blood group:");
    scanf("%s",temp);
	{
	    for(i=0;i<n;i++)
    {
		if("%s",temp=="%s",Donor[i].DBloodGroup)
		{
		    printf("details of the required donor\n");
		    printf(" \n Sl no\t hospital\t dname\t darea\t dBG\t dMN\n");
		    printf(" %d",Donor[i].slno);
		    printf(" \t %s",Donor[i].Hname);
		    printf(" \t %s",Donor[i].Dname);
		    printf(" \t %s",Donor[i].Darea);
	 	    printf(" \t %s",Donor[i].DBloodGroup);
		    printf(" \t %d",Donor[i].Dmobilenumber);
		
		}
		else
            printf("\nrequired donor is not available");
    }
    


    }
}
