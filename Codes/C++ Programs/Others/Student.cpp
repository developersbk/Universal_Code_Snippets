Student

#include<iostream.h>

#define NUM_TEST 10
#define NUM_STUDENTS 4

int test_grades [NUM_STUDENTS][NUM_TEST];

void enter_Grade()
{

  int student,
      test,
      more=1,
      grade;

  char yorn;

  cout << "\nenter a test grade\n";

 while(more)
 {
  cout <<"\Student #";
  cin>>student;
  cin.ignore(80,'\n');

  cout << "\ntest #";
  cin>>test;
  cin.ignore(80,'\n');

  cout << "\ngrade #";
  cin>>grade;
  cin.ignore(80,'\n');

 test_grades[student-1][test-1] =grade;

  cout << "\nanother grade?";
  cin >>yorn;
  cin.ignore(80,'\n');

 if (yorn=='n')
    more=0;
 }
}

void test_Avarege()
{
  int student=0,
  anotherA=1,
  testdid,
  testNum,
  Total;

 while(anotherA)
  {
  student=0;
  Total=0;
  testdid=0;

  cout << "\nTest Avarege\n\n";

  cout << "\nNumber of the Student";
  cin >>student;

  for (testNum=0; testNum<=3; testNum++)
  {
   if (test_grades[student-1][testNum])
   {
   testdid++;
   Total+= test_grades[student-1][testNum];

   cout << "\nTest #: "<<testNum+1 <<" Grade: "<<test_grades[student-1][testNum]<<"\n";
   }
   else
   cout << "\n\n Student "<<student<<"did not take the test" <<testNum+1<<"\n";
   }
   cout << "\n Student has the avarege of " <<Total/testdid;

   cout << "\nDo you want to see another avarege? 0 to end or 1 to continue . ";
   cin>>anotherA;
 }
  return;
}
get_Help()

{
 cout << "\nThank you for enter this program. This is that way it works:";

 cout << "\n\n1st Option, Enter Grade:";
 cout << "\nIf you choose this option you will be able to enter a gradeto a ";
 cout << "\ndisere student, just remenber that is only 4 students";

 cout << "\n\n2nd option, Test Avarege: ";
 cout << "\nif you choose this option you will be anle to see the overroll ";
 cout << "\navarege of the student that you chose";

 cout << "\n\n3er option, Help:";
 cout << "\nif you chose this optionthe user will be able to see the insatruction";
 cout << "\nabout how this program works";

 cout << "\n\n4th option, Exit";
 cout << "\nif you chosse this option the user will be able to exit the program";
 cout << "\nI hope you like what i did";
 return 0;
}

int main()
{
 int option=0;
 int hold;

  while (option!=4)
  {
  while ((option<1)||(option>4))
  {

  cout << "\nWelcome to my 3th program by Cecilio O. Uribe";
  cout << "\nChose any option follow by the enter key\n\n";
  cout << "\n1. Enter Grade";
  cout << "\n2. Test Avarege";
  cout << "\n3. Help";
  cout << "\n4. Exit\n\n";
  cin >> option;
  }
  if(option==1)
   {
    enter_Grade();
    option=0;
   }
  if(option==2)
   {
    test_Avarege();
    option=0;
   }
  if(option==3)
   {
    get_Help();
    option=0;
   }

   }
     cout << "LATER!";
     cin >> hold;

   return 0;
}
