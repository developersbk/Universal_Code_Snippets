Implimentation of a list using a linked list with pointers

#include <iostream.h>
struct element {
  int number;
  element *next;
  };

/* the operators declared on the type list.*/
void read(element *&list);
void write(element *list);
int length(element *list);
int position(element *list, int num);
void remove(element *&list,int position);
void insert(element *&list,int new_num,int position);
element *ele(element *list,int position);

void add(int new_num,element *&list,element *this_el);

void main()
{

  element *list,*p,*q;
  int leng;

  read(list);
  write(list);
  q = ele (list,3);
  add (5,list,q);
  write(list);
  insert(list,10,2);
  write(list);
  remove(list,4);
  write(list);
  insert(list,12,1);
  write(list);
  leng = position(list,10);
  cout<< " pos of 10 is " << leng <<endl;
  cout<< " The length of the list is: " << length(list)<<endl;
  cout<<endl;
  ]
}
/* reading a list from input */
void read(element *&list)
{
  element *p,*last;
  list = new element;
  p = list;
  cout<< " enter a number";
  cin>>p->number;
  while (!cin.eof())
  {
    p->next = new element;
    last = p;
    p = p->next;
    cout<< " enter a number ";
    cin>>p->number;
 }
   delete (p);
   last->next = NULL;
}

/* writing a list on the output */
void write(element *list)
{
  element *p;
  cout<<endl;
  p = list;
  while (p!=NULL)
  {
    cout<< p->number<<"	";
    p=p->next;
  }
  cout<<endl;
}

/* Gets a list and returns its length */
int length (element *list)
{
   element *p;
   int count=0;
   p=list;
   while (p!=NULL)
   {
     count++;
     p = p->next;
   }
   return count;
}

/*Gets an element and returns its positon in the list. If the element*/
/*is not in the list, returns 0 */

int position(element *list,int num)
{
  element *p;
  int i=1;
  for (p=list;p!=NULL;p=p->next)
  {
    if ((p->number)==num)
    return i;
    i++;
  }
  return 0;
}

/*Gets a number and removes the element that stays in this position */
void remove(element *&list,int position)
{
  element *before,*p;
  if (position==1)
  {
    before=list;
    list = list->next;
    delete (before);
  }
  else
  {
    before = ele (list,position-1);
    if (before!=NULL)
    {
      p = before->next;
      before->next = p->next;
      delete (p);
    }
  }
}

/* Insert a new element to be the i-th element of the list */
/* the function uses the function add*/
void insert(element *&list,int new_num,int position)
{
  element *p;
  if (position==1)
  add(new_num,list,NULL);
  else
  {
    p = ele(list,position-1);
    add(new_num,list,p);
  }
}

/* Gets a position in the list and returns a pointer to the element*/
/* in this position*/
element *ele(element *list,int position)
{
  element *p=list;
  int i;
  for (i=1;i<position;i++)
  {
     if (p==NULL)
     return p;
     p=p->next;
  }
  return p;
}

/* Add a new element after a given element.If the given element is NULL*/
/* Add the new element to be the first element*/
void add(int new_num,element *&list,element *this_el)
{
  element *p;
  if (list==NULL)
  {
    list = new element;
    list->number = new_num;
    list->next = NULL;
  }
  else
  {
    p = new element;
    p->number = new_num;
    if (this_el==NULL)
    {
     p->next = list;
     list = p;
    }
    else
    {
      p->next=this_el->next;
      this_el->next = p;
    }
  }
}
