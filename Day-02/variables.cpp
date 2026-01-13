#include <iostream>
#include <string>

using namespace std;

int main(){
    int age =20;
    float height=5.9;
    double pi =3.14159265;
    char grade ='a';
    bool isPassed=true;
    string name="fahad";

    cout <<"Name: " << name<<endl;
    cout <<"Age:" << age <<endl;
    cout <<"height"<<height <<endl;
    cout <<"pi" <<pi <<endl;
    cout <<"Grade" << grade <<endl;
    cout <<"Passed" << (isPassed ? "yes" : "no") <<endl;
    return 0;


}