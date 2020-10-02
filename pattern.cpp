#include <iostream>
using namespace std;

int main()
{
   int n;
   cout<<"Enter the sizes pattern\n";
   cin>>n;
   cout<<endl;
   int i,j,sp;
   for(i=1;i<=n;i++)
   {
      for(sp=n;sp>i;sp--)
        cout<<"  ";
      for(j=1;j<=i;j++)
        cout<<"*   ";
      cout<<endl;
   }
}
