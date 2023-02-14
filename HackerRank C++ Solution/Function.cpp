#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int x, int y, int z, int e)
{
    int add;
    if (x>y&&x>z&&x>e) {
        add=x;
    
    }
     else if (y>x&&y>z&&y>e) {
        add=y;
    
    }
      else if(z>x&&z>y&&z>e) {
        add=z;
    
    }
    else{
        add=e;
    }
    return add;
}

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
