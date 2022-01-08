#include <iostream>

using namespace std;

int main()
{
  int N;
  int sum=0;
  cout<<"Enter house number N"<<endl;
  cin>>N;

  for(int i=0; i<=N; i++)
    {

      sum=sum+i;
    }
    int H=(N*N)+sum;
    cout<<"Number of tiles in the house are:"<<H;
  system("pause");
  return 0;
}
