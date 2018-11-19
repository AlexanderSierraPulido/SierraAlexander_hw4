#include <iostream>
#include <fstream>
#include <math.h>

double vel_x(double c,float vx,float vy, float m)
    {
        return (-c*vx*vx)/m;
    }

double vel_y(float g,double c,float vx,float vy,float m)
    {
        return (-g*((-c*vy*vy)/m));
    }


int main()
{

//Condiciones iniciales
int N=17500;
int anglemax=70;
double c=0.2;
float g=10.0;
float m=0.2;
float v=300;
float angle=45;
float xi=0;
float vxin=v*cos(angle);
float vyin=v*sin(angle);


return 0;
}
