#include<iostream>

#include<math.h>
using namespace std;
//1234=1*1000+2*100+3*10+4(DECIMAL SYSTEM)
// 45=1*32+   0*16+   1*8+   1*4+   0*2+   1*1
int main()
{
 
   int a=1<<2;
   int b=5&a;
   cout<<a<<endl;
   cout<<b;
    return 0;
}