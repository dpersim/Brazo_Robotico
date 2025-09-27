#include "brazoRobotico.h"
#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	brazoRobotico brazo;
	cout<<"Brazo Robotico: "<< endl;
	cout<<"\tPosicion Inicial: ("<<brazo.getX()<<","<<brazo.getY()<<","<<brazo.getZ()<<")"<<endl;
	cout<<"\t¿Esta sujetando un objeto?: "<<(brazo.getSujetar() ? "Sí" : "No") << endl;
	cout<<"Moviendo Robot a (15.0,7.5,2.1)"<<endl;
	brazo.mover(15.0,7.5,2.1);
	
	if(brazo.getSujetar()==false){
		cout<<"Cogiendo un objeto"<<endl;
		brazo.coger();
	}
	else{
		cout<<"Soltando el objeto"<<endl;
		brazo.soltar();
	}
	
	cout<<"Brazo Robotico: "<<endl;
        cout<<"\tPosicion Inicial: ("<<brazo.getX()<<","<<brazo.getY()<<","<<brazo.getZ()<<")"<<endl;
        cout<<"\t¿Esta sujetando un objeto?: "<<(brazo.getSujetar() ? "Sí" : "No") << endl;
return 0;
}
