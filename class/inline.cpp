#include <iostream>
using namespace std;

inline int sum(int a, int b){
    int s = a + b;
    return 0;
}

int main(){
    cout << "this is inline"<<endl;

    int res = sum(2,5);

    cout<< res << endl;

    return 0;
}