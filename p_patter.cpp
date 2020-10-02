  #include <iostream>
  using namespace std;

  int main()
  {
      int n=7;
      for(int i=0;i<=n;i++)
      {
          cout<<"*";
          for(int j=0;j<n;j++)
          {
              if((i==0)||(i==n/2))
                cout<<"*";
              else
                cout<<" ";
          }
          if(i<=n/2)
          cout<<"*";
          cout<<endl;
      }
  }

