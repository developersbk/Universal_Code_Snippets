Implementing Stack using Class (with constructor etc).

# include<iostream.h>
# include<conio.h>
# define SIZE 20

class stack
{
int a[SIZE];
int tos; // Top of Stack
public:
	stack();
	void push(int);
	int pop();
	int isempty();
	int isfull();
};
stack::stack()
{
tos=0; //Initialize Top of Stack
}

int stack::isempty()
{
return (tos==0?1:0);
}
int stack::isfull()
{
return (tos==SIZE?1:0);
}

void stack::push(int i)
{

if(!isfull())
{
cout<<"Pushing "<<i<<endl;
a[tos]=i;
tos++;
}
else
{
 cerr<<"Stack overflow error !
Possible Data Loss !";
}
}
int stack::pop()
{
if(!isempty())
{
cout<<"Popping "<<a[tos-1]<<endl;
return(a[--tos]);
}
else
{
cerr<<"Stack is empty! What to pop...!";
}
return 0;
}

void reverse(stack s)
{
stack s2;
while(!s.isempty())
{
	s2.push(s.pop());
}
cout<<"Reversed contents of the stack..."<<endl;
while(!s2.isempty())
{
	cout<<s2.pop()<<endl;
}
}//end of fn.
void main()
{
clrscr();
stack s;

s.push(1);
s.push(2);
s.push(3);

reverse(s);
getch();
}
