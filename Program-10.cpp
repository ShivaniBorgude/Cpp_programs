#include <iostream>
using namespace std;
int main()
{
  int a=2, b=4;
  
  //Binary AND operater
  cout<<"a & B is"<< (a&b)<<endl;
  
  //Binary OR operater
  cout<<"a|b is"<< (a|b)<<endl;
  
  //Binary XOR operater
  cout<<"a^b is"<< (a^b)<<endl;
  
  //Right shift operater
  cout<<"a>>1 is"<< (a>>1)<<endl;
  
  //Left shift operater
  cout<<"a<<1 is"<< (a<<1)<<endl;
  
  //One's complement operater
  cout<<"~(a) is"<<~(a)<<endl;

    return 0;
}