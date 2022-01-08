#include <iostream>

using namespace std;

int main()
{
  int j,s,n;
  cin >> j >> s >> n;
  if(j < 0 or j >= 1000 or s < 0 or s >= 1000 or n < 0 or n >= 1000)
  {
    cout << "J,S,N,H values need to be >= 0 and < 1000" << endl;
      system("pause");
    exit(0);
  }
  if(s >= j)
  {
    cout << "-1" << endl;
    system("pause");
  exit(0);
  }
  int h[n];
  for(int i = 0; i < n; ++i)
  {
    cin >> h[i];
    if(h[i] < 0 or h[i] >= 1000)
    {
      cout << "J,S,N,H values need to be >= 0 and < 1000" << endl;
        system("pause");
      exit(0);
    }
  }
  int num = 0, count = 0;
  for(int i = 0; i < n; ++i)
  {
    while(num < h[i])
    {
      num += j;
      count++;
      if(num < h[i])
      num -= s;
    }
    num = 0;
  }
  cout << count << endl;
  system("pause");
  return 0;
}
