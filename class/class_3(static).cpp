#include <iostream>
using namespace std;

class Dog{
    public:
    int eyes;
    int ears;
    int legs;

    int posX;
    int posY;

    void main(){
        cout<< "Dog is walking.";
        posX++;
        posY++;
    }
    void eat(){
        cout<< "Dog is eating.";
    }
};

int Dog::eye = 10;
int main(){
    cout <<Dog::eye;
    return 0;
}