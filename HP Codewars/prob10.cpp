#include <iostream>
#include<string.h>
using namespace std;

int main()
{
int i,j;
char a[100];
cin>>a;

  if(strlen(a) < 1000 and strlen(a) > 0){


      for(i=0;i<strlen(a)-1;i++){
                 if(a[i] == 'b'){
              for (j=i+1;j<=strlen(a);j++){
                  if(a[j]=='w')
                      a[j] = 'b';
                  else
                      a[j] = 'w';}}}
  cout<<a;}


  system("pause");
  return 0;
}
