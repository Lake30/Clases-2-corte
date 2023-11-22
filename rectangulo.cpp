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
    
};

int main()
{
    Punto p;
    Punto p2 = Punto(1,1);
    
    p2.print();
    cout<<endl;
    cout<<p.calc_dist(p2)<<endl;
    
    Rectangulo c = Rectangulo(p,p2);
    
    cout<<c.calc_area()<<endl;
    
    return 0;
}
