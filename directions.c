#include<stdio.h>
#include<string.h>
int main()
{
	char data[20];
	int i,Nis=0,Sis=0,Wis=0,Eis=0,ew,ns;
	printf("Enter the string");
	gets(data);
	for(i=0;i<strlen(data);i++)
	{
		if(data[i]=='N')
		{
			Nis++;
		}
		else if(data[i]=='S')
		{
			Sis++;
		}
		else if(data[i]=='E')
		{
			Eis++;
		}
		else
		{
			Wis++;
		}
	}
    if(Eis==Wis)
    {
		if(Nis==Sis)
		{
			printf(" ");
		}
		else if(Nis>Sis)
		{
			ns=Nis-Sis;
			for(i=1;i<=ns;i++)
			{
				printf("N");
			}
		}
		else
		{
			ns=Sis-Nis;
			for(i=1;i<=ns;i++)
			{
				printf("S");
			}
		}
	}
	else if(Nis==Sis)
	{
		if(Eis==Wis)
		{
			printf(" ");
		}
		else if(Eis>Wis)
		{
			ew=Eis-Wis;
			for(i=1;i<=ew;i++)
			{
				printf("E");
			}
		}
		else
		{
			ew=Wis-Eis;
			for(i=1;i<=ew;i++)
			{
				printf("W");
			}
		}
    }
    else
    {
		if(Nis>Sis)
		{
			ns=Nis-Sis;
			for(i=1;i<=ns;i++)
			{
				printf("N");
			}
		if(Eis>Wis)
		{
			ew=Eis-Wis;
			for(i=1;i<=ew;i++)
			{
				printf("E");
			}
		}
		else
		{
			ew=Wis-Eis;
			for(i=1;i<=ew;i++)
			{
				printf("W");
			}
		}
		}
		else
		{
			ns=Sis-Nis;
			for(i=1;i<=ns;i++)
			{
				printf("S");
			}
		if(Eis>Wis)
		{
			ew=Eis-Wis;
			for(i=1;i<=ew;i++)
			{
				printf("E");
			}
		}
		else
		{
			ew=Wis-Eis;
			for(i=1;i<=ew;i++)
			{
				printf("W");
			}
		}
		}

    }
}