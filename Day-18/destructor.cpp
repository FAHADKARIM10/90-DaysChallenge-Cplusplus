#include <iostream>
using namespace std;

class Test {
    public:
    // user defined constructor 
    Test() {
        cout << "Constructor called!" << endl;
    }

    ~Test() {
        cout << "Destructor called!" << endl;
    }   

};


int main(){
    Test t;
    return 0;
}

