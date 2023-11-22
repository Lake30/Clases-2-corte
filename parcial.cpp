// Juan Jose Escobar y Santiago Gómez

#include<iostream>
#include <fstream>
#include <string>
#include<math.h>

using namespace std;


class Punto{
public:
  double lat;
  double lon;
  
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
  
  bool esta_cerca(Punto p, double tolerancia){
      /*Retorne verdadero si la distancia es menor o igual que el parámetro tolerancia*/
      if(calc_dist(p)<= tolerancia){
          return true;
      }else{
          cout<<"La distancia dada es menor que el parámetro de tolerancia, por ende el punto esta muy lejos";
      }
      
  }
  
  void print(){
      cout<<lat<<", "<<lon;
  } 
};

class Rectangulo{
    Punto inf_izq;
    Punto sup_der;

public:
    Rectangulo(){}
    
    Rectangulo(Punto ii, Punto sd){
        inf_izq = ii;
        sup_der = sd;
    }
    
    bool is_cuadrado(){
        return abs(sup_der.lat - inf_izq.lat) == abs(sup_der.lon - inf_izq.lon);
    }
    
    double calc_area(){
        
        if(is_cuadrado()){
            cout<<"Es cuadrado!"<<endl;
            return pow(inf_izq.calc_dist(sup_der),2)/2; //Solo valido para cuadrados
        }
        return abs(inf_izq.lat - sup_der.lat) * abs(inf_izq.lon - sup_der.lon);
        
    }
    
    bool contains(Punto p, Rectangulo){
        /*Retorne verdadero si el punto se encunetra dentro de área del rectángulo*/
        if(ii.lon << p.lon << sd.lon && ii.lat << p.lat << sd.lat){
            return true;
        }
        else{
        return false;
            
        }
    }
    
};


class Ruta{
public:
    Punto puntos[100];
    int num_puntos = 0;
    
    Ruta(){
        num_puntos = 100;
    }
    
    Ruta(string arch){
        string line;
        string temp;
        double temp_lat;
        double temp_lon;
        int num_filas = 0;
        ifstream myfile2(arch);
        if (myfile2.is_open())
        {
            while (getline(myfile2, line))
            {
                for (int i = 0; i < line.length(); i++) {
                    if (line[i] == ',') {
                        /*Guarde en temp_lat la transformación en double de la cadena almacenada en temp*/
                        temp_lat = stod(temp);
                        temp = "";
                    }
                    else{
         /*Concatene el caracter en la posición i de la cadena line en la cadena temporal temp*/
                    temp = temp + line[i];
                    }
                }
                /*Guarde en temp_lon la transformación en double de la cadena almacenada en temp*/ 
                temp_lon = stod(temp);
/*Almacene en la posición num_filas un nuevo Punto con coordenadas temp_lat y temp_lon*/
                //myfile();
                temp = "";
                num_filas++;
            }
            num_puntos = num_filas;
            myfile2.close();
        }
    
        else cout << "Unable to open file2";
    }
    
    void print(){
        for(int i = 0; i<num_puntos; i++){
            puntos[i].print();
            cout<<endl;
        }
    }
    
    double calc_dist(){
        double dist_grados_metro = 360.0/40070000.0;
        double dist = 0;
        for(int i = 0; i<num_puntos-1; i++){
            /* acumule en la variable dist la distancia entre los puntos i e i+1 del vector de puntos*/
            
            dist = dist + i + (i+1);
        }
        return dist/dist_grados_metro;
    }
    
    Punto get_punto(int i){
        return puntos[i];
    }
    
    int get_size(){
        return num_puntos;
    }
    
};

class Camion{
public:
    Ruta ruta1;
    Ruta ruta2;
    
    Camion(){}
    
    Camion(string r1, string r2){
        ruta1 = Ruta(r1);
        ruta2 = Ruta(r2);
    }
    
    void comparar_rutas(int tolerancia){
        int j;
        bool encontrado;
        double dist_grados_metro = 360.0/40070000.0;
        /* Recorra la lista de puntos de la ruta1 y compárelos con los puntos de la ruta hasta que encuentre un punto que se encuentre cerca, dentro de la tolerancia definida por el parámetro. Si lo encuentra, escriba por pantalla el mensaje del resultado, y continue con el siguiente punto de la ruta 1. Si no encontró un punto cercano, no escriba nada por pantalla y continue buscando. 
        */
    }
    
};


int main(){
    
    
    
    Camion c = Camion("carruti.csv","carruti2.csv");
    
    cout<<"La Ruta 1 recorrió una distancia de: "<<c.ruta1.calc_dist()<<"."<<endl;
    cout<<"La Ruta 2 recorrió una distancia de: "<<c.ruta2.calc_dist()<<"."<<endl;
    
    cout<<"Los puntos en que en encuentran cerca entre las rutas son:"<<endl;
    c.comparar_rutas(20);
    
    return 0;
    
}
// Juan Jose Escobar y Santiago Gómez
