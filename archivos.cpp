
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){

    fstream myfile("datos.csv");
    
    myfile.open("datos.csv", ios::out);// write overriding the file
    if (myfile.is_open()) {
        myfile << "ayuda porfavor, saquenme de latinoamerica";
        myfile.close();
    }
    

    myfile.open("datos.csv", ios::app);// append to the file
    if (myfile.is_open()) {
        string line;
        while(getline(myfile, line)){
            cout << line << endl;
        }
        myfile.close();
    }
    
    myfile.open("datos.csv", ios::in);//read
    if (myfile.is_open()) {
        string line;
        while(getline(myfile, line)){
            cout << line << endl;
        }
        myfile.close();
    }
}
