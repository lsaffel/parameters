#include<iostream>
using namespace std;

void introduceMe(string name, string city, int age=0);
    // give the default value for age only here, 
    // not in the function definition below. It gives an error otherwise.

int main(){
    introduceMe("Lisa", "Calgary", 30);        // this is the argument that we pass
                        //  to our function
    introduceMe("Anna", "Edmonton");  

    return 0;
}

void introduceMe(string name, string city, int age) {         // parameters
                                  // that is passed to the function
    cout << "My name is " << name << endl;
    cout << "I am from " << city << endl;
    if(age!=0)
        cout << "I am " << age << " years old" << endl;
}