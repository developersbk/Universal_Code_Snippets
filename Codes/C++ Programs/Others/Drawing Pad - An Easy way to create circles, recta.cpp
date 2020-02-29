Drawing Pad - An Easy way to create circles, rectangles etc.


#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<string.h>
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<fstream.h>

	class mouse
	{
	union REGS i, o;
	public:

	mouse()
	{
	initmouse();
	showmouseptr();
	}

	void initmouse()
	{
	i.x.ax=0;
	int86(0x33,&i,&o);
	}

	void showmouseptr()
	{
	i.x.ax=1;
	int86(0x33,&i,&o);
	}

	void hidemouseptr()
	{
	i.x.ax=2;
	int86(0x33,&i,&o);
	}

	void getmousepos(int& button, int& x, int& y)
	{
	i.x.ax=3;
	int86(0x33,&i,&o);
	button=o.x.bx;
	x=o.x.cx;
	y=o.x.dx;
	}

	void restrictmouseptr(int x1, int y1, int x2, int y2)
	{
	i.x.ax=7;
	i.x.cx=x1;
	i.x.dx=x2;
	int86(0x33,&i,&o);
	i.x.ax=8;
	i.x.cx=y1;
	i.x.dx=y2;
	int86(0x33,&i,&o);
	}

	};

	class shapes
	{
	public:

	virtual void draw()
	{
	}

	virtual void save (ofstream &ft)
	{
	}

	virtual void open(ifstream &fs)
	{
	}

	};

	class myline:public shapes
	{
	int sx,sy,ex,ey,color;
	public:

	myline()
	{
	}

	myline(int x1,int y1,int x2,int y2,int clr)
	{
	sx=x1;
	sy=y1;
	ex=x2;
	ey=y2;
	color=clr;
	}

	void draw()
	{
	setcolor(color);
	moveto(sx,sy);
	lineto(ex,ey);
	}

	void save(ofstream &ft)
	{
	ft<<"L"<<"
";
	ft<<sx<<" "<<sy<<" "<<ex<<" "<<ey<<" "<<color<<"
";
	}

	void open(ifstream &fs)
	{
	fs>>sx>>sy>>ex>>ey>>color;
	}

	};

	class myrectangle:public shapes
	{
	int sx,sy,ex,ey,color;
	public:

	myrectangle()
	{
	}

	myrectangle(int x1,int y1,int x2,int y2,int clr)
	{
	sx=x1;
	sy=y1;
	ex=x2;
	ey=y2;
	color=clr;
	}

	void draw()
	{
	setcolor(color);
	rectangle(sx,sy,ex,ey);
	}

	void save(ofstream &ft)
	{
	ft<<"R"<<"
";
	ft<<sx<<" "<<sy<<" "<<ex<<" "<<ey<<" "<<color<<"
";
	}

	void open(ifstream &fs)
	{
	fs>>sx>>sy>>ex>>ey>>color;
	}

	};

	class mycircle:public shapes
	{
	int sx,sy,radius,color;
	public:

	mycircle()
	{
	}

	mycircle(int x1,int y1,int r,int clr)
	{
	sx=x1;
	sy=y1;
	radius=r;
	color=clr;
	}

	void draw()
	{
	setcolor(color);
	circle(sx,sy,radius);
	}

	void save(ofstream &ft)
	{
	ft<<"C"<<"
";
	ft<<sx<<" "<<sy<<" "<<radius<<" "<<color<<"
";
	}

	void open(ifstream &fs)
	{
	fs>>sx>>sy>>radius>>color;
	}

	};

	struct node
	{
	void *obj;
	node *link;
	};

	class objarray
	{
	node *head;
	public:

	objarray()
	{
	head =NULL;
	}

	void add(void *o)
	{
	node *temp =new node;
	temp->obj=o;
	temp->link=NULL;
	if(head==NULL)
	head=temp;
	else
	{
	node *q;
	q=head;
	while(q->link!=NULL)
		q=q->link;
	q->link=temp;
	}
	}

	void *getobj(int i)
	{
	node *q;
	q=head;
	for(int n=1; n<i;n++)
		q=q->link;
	return(q->obj);
	}

	int getcount()
	{
	int n=0;
	node *q;
	q=head;
	while(q!=NULL)
	{
	q=q->link;
	n++;
	}
	return n;
	}

	~objarray()
	{
	node *q;
	q=head;
	while(q!=NULL)
	{
	head=head->link;
	delete q;
	q=head;
	}
	}

	};

	void mainscreen()
	{
	cleardevice();
	rectangle(0,0,639,479);
	line(0,30,640,30);
	char *names[]={"Clear","Open","Save","Line","Rect","Circ","Exit"};
	int x,i;
	for(x=5,i=0;x<=7*90;x+=90,i++)
	{
	setcolor(WHITE);
	rectangle(x,5,x+70,25);
	floodfill(x+1,6,WHITE);
	settextstyle(1,0,3);
	setcolor(BLACK);
	outtextxy(x+10,0,names[i]);
	}
	}
	void DisplayName(int ycor)
	{
		 char *name[] = {"D","R","A","W","I","N","G"," ","P","A","D"};
		 int i;
		 settextjustify(1,1);
		 settextstyle(4,0,7);
		 for(i=0;i<11;i++)
		 {
				 setcolor(i+2);
				 outtextxy(40+i*45,ycor, name[i]);
		 }
	}
	music()
	{
	int i  ;
	float octave[7] = { 830.81, 846.83, 864.81, 674.61, 596, 420, 1046.94 
} ;
	for ( i = 0 ; i < 7 ; i++ )
	{
		sound ( octave[i] * 5 ) ;
		delay ( 30 ) ;
	}
	nosound();
	}

	void Welcome()
	{
		 char pattern[8] = {0x00, 0x70, 0x12, 0x27, 0x00, 0x27, 0x20, 0x70};
		 int i;

		 setfillpattern(pattern,BLUE);
		 for(i=0;i<=320;i++)
		 {
			bar(320-i,240-i*0.75,320+i,240+i*0.75);
			delay (0.3) ;
		 }
		 settextjustify(1,1);
		 DisplayName(100);
		 settextstyle(5,0,4);
		 outtextxy(100,300,"Hello ");
		 settextstyle(7,0,6);
		 setcolor(11);
		 outtextxy(320,350,"World");
		 music();
		 delay(1000);
	}

	void main()
	{
	ifstream fs;
	ofstream ft;
	int gd= DETECT,gm;
	initgraph(&gd,&gm,"C:\tc\bgi");
	mainscreen();
	music();
	setviewport(1,31,638,478,1);
	mouse m;
	int button,x,y,flag=0;
	int t,i,index;
	int strptx,strpty,endptx,endpty;
	objarray arr;
	while(1)
	{
	button=0;
	m.getmousepos(button,x,y);
	if(((button &1)==1)&&(flag==0))
		for(t=5,i=0;t<=7*90;t+=90,i++)
			if(x>=t && x<=t+70 && y>=5 && y<=25)
			{
			index=i;
			flag=1;
			break;
			}
	int clmum=random(16);
	int sx=random(638);
	int sy=random(478);
	int ex=random(638);
	int ey=random(478);
	int r=random(200);

	switch(index)
	{
	case 0:
		m.getmousepos(button,x,y);
		if(((button &1)==0)&&(flag==1))
		{
		clearviewport();
		flag=0;
		}
		break;
	case 1:
		m.getmousepos(button,x,y);
		if(((button &1)==0)&&(flag==1))
		{
		fs.open("output.txt",ios::in);
		shapes *ptr;
		char a[2];
		while(fs)
		{
			fs>>a;
			if(strcmp(a,"L")==0)
			{
			myline *l=new myline();
			l->open(fs);
			arr.add(l);
			}

			if(strcmp(a,"R")==0)
			{
			myrectangle *r=new myrectangle();
			r->open(fs);
			arr.add(r);
			}

			if(strcmp(a,"C")==0)
			{
			mycircle *c=new mycircle();
			c->open(fs);
			arr.add(c);
			}
		}
		fs.close();
		int count=arr.getcount();
		for(int i=1;i<=count;i++)
		{
		ptr=(shapes*)arr.getobj(i);
		ptr->draw();
		}
		flag=0;
		}
		break;
	case 2:
		m.getmousepos(button,x,y);
		if(((button &1)==0)&&(flag==1))
		{
		ft.open("output.txt",ios::out);
		int count=arr.getcount();
		shapes *ptr;
		for(i=1;i<=count;i++)
		{
		ptr=(shapes*)arr.getobj(i);
		ptr->save(ft);
		}
		ft.close();
		flag=0;
		}
		break;

	case 3:
		m.getmousepos(button,x,y);
		if(((button &1)==0)&&(flag==1))
		{
		setcolor(clmum);
		moveto(sx,sy);
		lineto(ex,ey);
		myline *l=new myline(sx,sy,ex,ey,clmum);
		if(l==NULL)
			exit(1);
		arr.add(l);
		flag=0;
		}
		break;

	case 4:
		m.getmousepos(button,x,y);
		if(((button &1)==0)&&(flag==1))
		{
		setcolor(clmum);
		rectangle(sx,sy,ex,ey);
		myrectangle *r=new myrectangle(sx,sy,ex,ey,clmum);
		if(r==NULL)
			exit(1);
		arr.add(r);
		flag=0;
		}
		break;

	case 5:
		m.getmousepos(button,x,y);
		if(((button &1)==0)&&(flag==1))
		{
		setcolor(clmum);
		circle(sx,sy,r);
		mycircle *c=new mycircle(sx,sy,r,clmum);
		if(r==NULL)
			exit(1);
		arr.add(c);
		flag=0;
		}
		break;
	}
	if(index==6)
		break;
	}
	Welcome();
	closegraph();
	restorecrtmode();
	}
