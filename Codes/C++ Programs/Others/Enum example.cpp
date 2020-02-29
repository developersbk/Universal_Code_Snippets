Enum example

An enum example in C++

#include <iostream.h> 
int main()
{
enum Days{Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};

Days TheDay;
int j;
cout<<"Please enter the day of the week (0 to 6)";
cin>>j;
TheDay = Days(j);

if(TheDay == Sunday || TheDay == Saturday)
cout<<"Hurray it is the weekend"<<endl;
else
cout<<"Curses still at work"<<endl;

return 0;
}
