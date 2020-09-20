#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    int u, v;
    cin>>x,y,z,u,v;
    if ((z<=v)&(y<=u)||(z<=v)&(y<=v)) {
        cout<<"Входит";
    }
    else {
      if ((x<=u)&(z<=v)||(z<=u)&(x<=v)) {
      cout<<"Входит";  
      }
      else {
          cout<<"Не входит(";
      }
      
    }
    return 0;
}
