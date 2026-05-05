//Every class contains access modifiers/

#include <iostream>
using namespace std;

class Emp{
    public:

    int id;
    float sal;

    void  display(){
        cout<<"This is the class.\n";
    }
};

int main(){
    Emp a;
    a.id = 69;
    a.sal = 69.9;

    a.display();
    cout<<"Hello phugga\n"<<a.id<<" "<<a.sal<<"\n";

    return 0;
}