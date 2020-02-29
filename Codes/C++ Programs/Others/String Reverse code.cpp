String Reverse code

# include <iostream.h>
# include <string.h>

void reverseit(char array[],int no)
{ char c; int len,x, mid=0;
	if(no==0)
	{for(len=0,x=0; array[x] !='\x0';len++,x++); }
	else
	{ len = 0; len = no; }

	mid = (len-1)/2;

	for(int i=0,j=len-1; i <=mid; i++,j--)
	{ c = array[i];
	  array[i] = array[j];
	  array[j] = c;
	}
	cout << endl<<array;
}

void main()
{ char data[80]; int nos=0;
	cout <<"enter string to reverse it  "; cin.getline(data,80);
	reverseit(data,0);
	cout <<endl<<"enter string to reverse it  "; cin.getline(data,80);
	cout <<endl<<"enter Nos to reversed "; cin >>nos;
	reverseit(data,nos);
}
