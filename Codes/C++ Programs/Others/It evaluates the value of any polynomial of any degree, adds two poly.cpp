It evaluates the value of any polynomial of any degree, adds two poly
and also multiplies them

Code :

/*evaluates, adds ,multiplies two polynomials p & f to evaluate poly of
deg > 20 manipulate const in size */

#include <iostream.h>
using namespace std ;
void polyadd(float*a,int dega,float*b,int degb,float*sum)
{int i ;
if(dega>=degb)
{for (i=0;i<=dega;i++)
sum[i]=a[i]+b[i] ;}
if(degb >dega)
{for(i=0;i<=degb;i++)
sum[i]= a[i]+b[i] ; }
}
//********************************************
/*void polymult(float*a,int dega,float*b,int degb,float*mult)
{int i,j;
if(dega<=degb)
for(i=0;i<=degb;i++)
{for(j=0;j<=i;j++)
mult[i]= mult[i] + a[j]*b[i-j]  ;
mult[i] = mult[i] +a[i+1]*b[i+1] ; }
//mult[i] = mult[i] - a[0]*b[0] ; }
if (degb<dega)
{for(i=0;i<=dega;i++)
for(j=0;j<=i;j++)
 mult[i]= mult[i] +a[j]*b[i-j];
mult[i] = mult[i] +a[i+1]*b[i+1] ;} }*/
//********************************************************

double power(float*a,int n,float x)
{float val=0,prod=1 ;
int i ;
for(i=0;i<=n;i++)
{val = val+a[i]*prod;
prod = prod*x ;}
return val ; }
//********************************************************

double power(float*a,int n,float x);

main()
{const int size=20 ;
int deg,j  ;
float a[size], x ;
for(j=0;j<=size-1;j++)
a[j] = 0.0 ;
double ans ;
cout<<"give the degree of the polynomiala "<<endl ;
cin>>deg ;
if(deg<0)
cout<<"go learn ur textbook"<<endl ;
if(deg>=0)
{
cout<<"give the value of the coefficients"<<endl ;
for (j=0;j<=deg;j++)
cin>>a[j] ;
cout<<"give the value x"<<endl ;
cin>>x ;
ans  = power(a,deg,x);
cout<<"the value of p("<<x<<") = "<<ans <<endl ;
 }

float b[size],sum[size],mult[size],y  ;
for(j=0;j<=size-1;j++)
b[j] = sum[j] = mult[j] = 0 ;
int dega,degb ;
dega = deg ;
/*cout<<"give the value of the coefficients"<<endl ;
for (j=0;j<=dega;j++)
cin>>a[j]; */
cout<<" give in the degree of poly b"<<endl ;
cin>>degb ;
cout<<"enter the values of the coefficient of polynomialb"<<endl ;
for(j=0;j<=degb;j++)
cin>>b[j]  ;
cout<<"give the value to be substituted in polynomialb"<<endl ;
cin>>y ;
ans = power(b,degb,y) ;

cout<<"the value of f("<<y<<") ="<<ans<< endl ;
cout<<"the value of f("<<x<<") ="<<power(b,degb,x)<<endl ;
string decision ;
cout<<"to you want to add or multiply a and b(type a or m) "<<endl ;
cin>>decision ;
if(decision =="a")
{ polyadd(a,dega,b,degb,sum);
if (dega>=degb)
{ans= power(sum,dega,x);
cout<<"the answer after addition of p("<<x<<") +f("<<x<<") 
="<<ans<<endl
;}
if(degb>dega)
{ans = power(sum,degb,x) ;
cout<<"the answer after addition of p("<<x<<") +f("<<x<<") 
="<<ans<<endl
; }}
if (decision=="m")
//{polymult(a,dega,b,degb,mult);
//if (dega>=degb)
{ans= power(a,dega,x)*power(b,degb,y) ;

//cout<<"the answer of multiplication"<<ans<<endl ;}
//if (degb>dega)
//{ ans = power(mult,degb,x) ;
cout<<"the answer after multiplication of p("<<x<<") *f("<<y<<")
="<<ans<<endl ;}
return 0 ;}



