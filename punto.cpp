#include<iostream>
#include<math.h>

using namespace std;

class Punto{
  double lat;
  double lon;
  
public:
  Punto(){
      lat = 0;
      lon = 0;
  }
  
  Punto(double la, double lo){
      lat = la;
      lon = lo;
  }
  
  double calc_dist(Punto p){
      return sqrt(pow(lat-p.lat,2) + pow(lon-p.lon,2));
  }
    
  void print(){
      cout<<lat<<", "<<lon;
  } 
};

int main()
{
    Punto p;
    Punto p2 = Punto(1,1);
    
    p2.print();
    cout<<endl;
    cout<<p.calc_dist(p2);
    
    return 0;
}
