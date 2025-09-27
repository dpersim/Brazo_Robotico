#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H 

class brazoRobotico{
	private:
		double x,y,z;
		bool sujetar;
	public:
		brazoRobotico(double x = 0, double y = 0, double z = 0, bool sujetar = false);
		
		double getX();
		double getY();
		double getZ();
		bool getSujetar();

		void coger();
		void soltar();
		void mover(double,double,double);
};

#endif
