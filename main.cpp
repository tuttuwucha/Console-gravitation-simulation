#include <vector>
#include <iostream>
#include <cmath>

const double G = 6,67430 * pow(10, -11);

struct Particle{
    double mass;
    double x;
    double y;
    double velocityX;
    double velocityY;
};

void moveTick(Particle& obj1, Particle& obj2);


double getDistance(Particle obj1, Particle obj2);

int main(){

    Particle obj1;
    Particle obj2;

    obj1.mass = 1;
    obj1.x = 2;
    obj1.y = 10;

    obj2.mass = 1;
    obj2.x = -2;
    obj2.y = -1;

    std::cout << getDistance(obj1, obj2) << '\n';

    return 0;
}



double getDistance(Particle obj1, Particle obj2){
    return std::sqrt(std::pow(obj2.x - obj1.x,2) + std::pow(obj2.y - obj1.y,2));
}

void moveTick(Particle& obj1, Particle& obj2){
    double F = G*((obj1.mass*obj2.mass)/pow(getDistance(obj1,obj2),2));

    double Fx = F*((obj2.x-obj1.x)/getDistance(obj1,obj2));
    double Fy = F*((obj2.y-obj1.y)/getDistance(obj1,obj2));







}
