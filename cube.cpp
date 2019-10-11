#include<iostream.h>
double power(double x,int n)
{if(n==0)
 return 1.0;
 else
 return x*power(x,n-1);
}
int main()
{double n1;
 cout<<"\n enter the no.:";
 cin>>n1;
 int p=3;
 double c;
 c=power(n1,p);
 cout<<"\n cube is:";
 cout<<c;
return 0;
}

