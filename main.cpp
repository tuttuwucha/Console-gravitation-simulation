#include <vector>
#include <iostream>

// todo: функция расчета с пассом партиклов(),
// функция вывода,

void(std::vector<Particle> particles);

struct Particle(){
    double mass;
    double x;
    double y;
    double velocityX;
    double velocityY;
}

int main(){
    std::vector<Particle> particles;
    particles.push_back({10, 15, 15, 0, 0})
    std::cout << particles[0].mass;
    return 0;
}

void(std::vector<Particle> particles){

}
