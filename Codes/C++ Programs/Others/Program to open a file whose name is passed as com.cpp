Program to open a file whose name is passed as command line argument

# include<iostream.h>
# include<conio.h>
# include<fstream.h>
# include<process.h>

void main(int argc,char *argv[])
{
if(argc < 2)
{
	cerr<<"Illegal Usage 
Correct Usage: size <file-name>";
	exit(1);
}
ifstream in(argv[1],ios::in|ios::binary);
if(!in)
{
	cerr<<"Error opening the input file";
	exit(1);
}
long int size=0;
char ch;
while(!in.eof())
{
	in>>ch;
//	cout<<ch;
	size++;
}
cout<<"The size of file "<<argv[1]<<" is "<<size<<" bytes.";

}
