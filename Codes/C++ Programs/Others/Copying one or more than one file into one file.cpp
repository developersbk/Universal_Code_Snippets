Copying one or more than one file into one file

#include <stdio.h>

void main(int argc,char *argv[]){
     int i=0,
	 is_copied=0;

     FILE *input,
	  *output;

     char ch;

     clrscr();


     if (argc>=3){

	     /* last file is the output file */
	     output=fopen(argv[argc-1],"w+");
	     if (output==NULL){
		 gotoxy(10,1);
		 printf("Can't open output file :%s",argv[argc-1]);
		 getch();
		 return;
	     }


	     /* input files */
	     for(i=1;i<argc-1;i++){
		 input=fopen(argv[i],"r");

		 if (input==NULL){
			gotoxy(10,i+2);
			printf("Can't open input file :%s",argv[i]);
		 }
		 else{
		      /* writing from input file to output file */

		       rewind(input);
		       while((ch=fgetc(input))!=EOF){
			      fprintf(output,"%c",ch);
			      is_copied=1;
		       }

		       gotoxy(10,i+2);

		       if (is_copied)
			       printf("%s successfully copied into %s",argv[i],argv[argc-1]);
		       else
			       printf("%s can't copy into %s",argv[i],argv[argc-1]);

		       is_copied=0;

		 }
                 fclose(input);
	    }

	    fclose(output);


      }
      else{
	  gotoxy(10,1);
	  printf("please specifiy at least two file one source and another target");
      }

      getch();
}
