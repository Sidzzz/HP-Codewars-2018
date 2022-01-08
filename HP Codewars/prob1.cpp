#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double P,T,R;
  cout<<"Enter principle, interest and tenure"<<endl;
  cin>>P>>R>>T;
  if(!(P<=1000000 && P>0))
    {
      cout<<"Principle value should be below 10^6"<<endl;
      system("pause");
      exit(0);
    }
  if(!(R<=100 && R>0))
    {
      cout<<"Rate of interest should be below 100"<<endl;
      system("pause");
      exit(0);
    }
  if(!(T<=100 && T>0))
    {
      cout<<"Time should be below 100 years";
      system("pause");
      exit(0);
    }
  double I;
  I=(P*T*R)/100;
  I=(int)((double)I*100);
  I=(double)I/100;
  cout<<"Simple Interest: "<<I<<endl;
  system("pause");
  return 0;
}
