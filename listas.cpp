#include<iostream>
#include<string>

using namespace std;

int main (){

    //int grade[30];
    //cout <<grade<< endl;

    //int gradee[] =arreglo[i+1]radee[i];
    //}
    int arreglo [10];
    int min,max;
    cout<<"Ingrese diez números para calcular cuál es el mínimo y máximo"<<endl;
    for(int i = 0; i<10; i++){
        cout<<"ingrese un número: "<<endl;
        cin>>arreglo[i];
    }
    max = arreglo[0];
    min = arreglo[0];
    
    for(int i = 0; i<10 ; i++){
        if (arreglo[i] < min){
            min = arreglo[i];
        }
        if (arreglo[i]> max){
            max = arreglo[i];
        }
    }
cout<<min<<" y max:"<<max<<endl;
}
