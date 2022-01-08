#include <iostream>

using namespace std;

int main()
{
  int N,C;
  cout << "Enter number of sewage plants" << endl;
  cin >> N;
  C = N*(N-1)/2;
  cout<< "Number of Connections " << C << endl;
  if(N>10000 or N<0)
    {
      cout<<"Number of Sewage plants value not in range"<<endl;
    }
  system("pause");
  return 0;
}
