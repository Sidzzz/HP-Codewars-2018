#include <iostream>

using namespace std;

int main()
{
  int m = 0, k, i, j, max1 = 0,n, max2 = 0, r = 0;
  double A,B;
  int a[100][100];
  cin >> n;
  if(n<0 and n>100)
  exit(0);
  for(k = 1; k <= n; ++k)
  {
    cin >> A;
    cin>>B;
    if(A<0 and A>1000000)
    exit(0);
    if(B<0 and B>1000000)
    exit(0);
    if(max1<A)
    max1=A;
    if(max2<B)
    max2=B;
    for(i=1;i<=A;i++)
    for(j=1;j<=B;j++)
    a[i][j]++;}

    for(i=1;i<=A;i++)
    for(j=1;j<=B;j++)
    if(m<a[i][j])
    m=a[i][j];
    for(i=1;i<=A;i++)
    for(j=1;j<=B;j++)
    if(m==a[i][j])
    r++;
    cout<<m<< " "<<r;
  system("pause");
  return 0;
}
