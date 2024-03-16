#include<iostream>
using namespace std;

void introduceMe(string name, string city, int age);

int main(){
    introduceMe("Lisa", "Calgary", 30);        // this is the argument that we pass
                        //  to our function
    introduceMe("Anna", "Edmonton", 35);  

    return 0;
}

void introduceMe(string name, string city, int age) {         // parameters
                                  // that is passed to the function
    cout << "My name is " << name << endl;
    cout << "I am from " << city << endl;
    cout << "I am " << age << " years old" << endl;
}