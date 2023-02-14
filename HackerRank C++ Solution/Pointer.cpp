#include <stdio.h>
#include <iostream>

//void update(int *a,int *b) {
    // Complete this function    
//}

int main() {
    int a, b,sum,sub;
    //int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    //update(pa, pb);
    //printf("%d\n%d", a, b);
    sum=a+b;
    sub=abs(a-b);
    printf("%d\n",sum);
    
      printf("%d",sub);
    
    return 0;
}

