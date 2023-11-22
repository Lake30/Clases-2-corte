#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

class Punto{
public:
    float x;
    float y;
    Punto(){
        x = 0; y = 0;
    }
    Punto(float a, float b){
        x = a;
        y = b;
    }
    float distancia(Punto pt){
        float d = sqrt(pow((x - pt.x),2) + pow((y - pt.y),2 ));
        cout << d << endl;
        return d;
    }
    ~Punto(){

    }
};

class Camino{
public:
    vector<Punto> puntos;

    Camino(vector<Punto> pt){
        for(int i = 0; i < pt.size(); i++){
            puntos.push_back(pt[i]);
        }
        for(int i = 0; i < puntos.size(); i++){
            cout << puntos[i].x << ", " << puntos[i].y << endl;
        }
    };

    float distancia_puntas(){
        float d = puntos.back().distancia(puntos.front());
        return d;
    };

    float distancia_total() {
        float d = 0;
        for(int i = 0; i < puntos.size() - 1; i++){
            d = d + puntos[i].distancia(puntos[i + 1]);
        }
        return d;
    };
};

int main(){
    vector<Punto> p = {Punto(0,0), Punto(0,1), Punto(1,1), Punto(1,0)};
    Camino c(p);
    cout << c.distancia_total() << endl;
}