#include<iostream>
#include<math.h>

using namespace std;

void pattern(int n)
{
    for(int i = 0 ; i < n ; i++)
    {
      for(int j = 0 ; j <= i ; j++)
        cout<<'*';

      cout<<'\n';
    }
}

int main()
{
    int n;
    cin>>n;

    pattern(n);

    return 0;
}
