#include <iostream>

using namespace std;

int main()
{
  int m,n;
  cin >> m >> n;
  int x[n], y[n];
  for(int i = 0; i < n; ++i)
  {
    cin >> x[i] >> y[n];
  }
  char move[50];
  cin >> move;
  int flag = 0;
  int a = 0, b = 0;
  for(int i = 0; move[i] != '\0'; ++i)
  {
    switch(move[i])
    {
      case 'd':
      b++;
      break;
      case 'r':
      a++;
      break;
      case 'l':
      a--;
      break;
      case 'u':
      b--;
      break;
      case 'D':
      b++;
      break;
      case 'R':
      a++;
      break;
      case 'L':
      a--;
      break;
      case 'U':
      b--;
      break;
    }
    if(x[i] == a and y[i] == b)
    {
      flag = 1;
      break;
    }
  }
  if(flag)
  cout << "DEAD" << endl;
  else
  cout << "ALIVE" << endl;
  system("pause");
  return 0;
}
