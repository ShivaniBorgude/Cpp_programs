#include <cmath>
#include <iostream>
using namespace std;

int main() 
{
  double angle=50.0;
  double radian= angle * M_PI/180.0;
    cout << "Sine of 50 degree:"<<sin(radian)<<endl;
    cout << "Cosine of 50 degree:"<<cos(radian)<<endl;
    cout << "Tangent of 50 degree:"<<tan(radian)<<endl;
    
    return 0;
}