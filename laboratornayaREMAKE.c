#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	float t,c,k,f;
	t = atof(argv[1]);
	if (argc == 2) 
	{
		f=t*9/5+32;
		k=t+273.15;
		printf ("\n%.2f C:\n", t);
		printf ("%.2f F\n", f);
		printf ("%.2f K\n\n", k);
		c=(t-32)*5/9;
		k=(t-32)*5/9+273.15;
		printf ("%.2f F:\n", t);
		printf ("%.2f C\n", c);
		printf ("%.2f K\n\n", k);
		c=t-273.15;
		f=(t-273.15)*9/5+32;
		printf ("%.2f K:\n", t);
		printf ("%.2f C\n", c);
		printf ("%.2f F\n", f);
	} 
	else {
	switch (*argv[2]) 
	{
	case 'C' :
		f=t*9/5+32;
		k=t+273.15;
		printf ("\n%.2f F\n", f);
		printf ("%.2f K\n", k);
		break;
	case 'F' :
		c=(t-32)*5/9;
		k=(t-32)*5/9+273.15;
		printf ("\n%.2f C\n", c);
		printf ("%.2f K\n", k);
		break;
	case 'K':
		c=t-273.15;
		f=(t-273.15)*9/5+32;
		printf ("\n%.2f C\n", c);
		printf ("%.2f F\n", f);
		break; 
	} 
	}
	return 0;
}

