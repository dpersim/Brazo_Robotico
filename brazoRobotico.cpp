#include "brazoRobotico.h"

#include <stdio.h>

brazoRobotico::brazoRobotico(double x, double y, double z, bool sujetar)
    : x(x), y(y), z(z), sujetar(sujetar) {}

double brazoRobotico::getX(){
	return x;
}

double brazoRobotico::getY(){
        return y;
}

double brazoRobotico::getZ(){
        return z;
}

bool brazoRobotico::getSujetar(){
	return sujetar;
}

void brazoRobotico::coger(){
	sujetar=true;
}

void brazoRobotico::soltar(){
        sujetar=false;
}

void brazoRobotico::mover(double x,double y, double z){
	this ->x=x;
	this -> y=y;
	this ->z=z;
}
