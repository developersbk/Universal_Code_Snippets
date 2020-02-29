Simple calculator 2

#include<stdio.h>
#include<math.h>

main()
{
  int x,y,ans,i;
  int choice;
  float div;
  char loop;
  ans=0;

  clrscr();

  do
  {
      printf("\n Do you wish to continue (Y/N) : ");
      scanf("%s",&loop);

      if (loop=='y' || loop=='Y')
      {
      clrscr();
      printf("\n Enter any two numbers ");
      printf("\n --------------------- ");

      printf("\n\n Enter the first number : ");
      scanf("%d",&x);

    printf("\n Enter the second number : ");
     scanf("%d",&y);

     clrscr();
     printf("\n Select the operation to be carried out ");
     printf("\n -------------------------------------- ");

     printf("\n 1. Addition ");
     printf("\n 2. Substraction ");
     printf("\n 3. Multiplication ");
     printf("\n 4. Division ");

     printf("\n Enter your choice : ");
     scanf("%d",&choice);

  switch(choice)
  {
     case 1 :
     {
	   ans = x+y;
	   printf("\n Answer = %d",ans);
	   break;
     }
     case 2 :
     {
	      ans = x-y;
	      printf("\n Answer = %d", ans);
	      break;
     }
     case 3 :
     {
	      ans = x*y;
	      printf("\n Answer = %d", ans);
	      break;
     }
     case 4:
     {
	      div = x/y;
	      printf("\n Answer = %.2f", div);
	      break;
     }
     default:
	   printf("\n\n Illegal operation......");
	   break;
   }
  }
  else
      printf("\n Bye....... Bye...........");
      getch();
 }while(loop=='y' || loop=='Y');
}
