#include <iostream>
#include <string>
using namespace std;

int main() {
	
  string a,b;
  cin>>a;
  cin>>b;
  cout<<a.size()<<" "<<b.size()<<endl;
  cout<<a+b;
  cout<<endl;
  char c;
    c=a[0];
    a[0]=b[0];
    b[0]=c;

    cout<<a<<" "<<b;
  
    return 0;
}
