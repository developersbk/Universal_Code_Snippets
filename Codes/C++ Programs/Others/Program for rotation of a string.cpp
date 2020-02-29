Program for rotation of a string

:#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
                clrscr();
                char name[40],bubble,temp[40];
                int loop,size,count;
                printf("

		Enter the word ");
                scanf("%s",name);
                printf("

		");
                for(loop=0;loop<strlen(name);loop++)
                {
                                 temp[loop]=name[loop];
                                 printf("%c",temp[loop]);
                }
                for(count=1;count<strlen(name);count++)
                {
                                 for(loop=0;loop<(strlen(name));loop++)
                                 {
                                                  if(loop==0)
                                                                   bubble=temp[0];
                                                  temp[loop]=temp[loop+1];
                                                  temp[strlen(name)]=bubble;
                                 }
                                 printf("

		");
                                 for(loop=0;loop<(strlen(name));loop++)
                                                  printf("%c",temp[loop]);
                }
                getch();
}
