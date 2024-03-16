#include<iostream>
using namespace std;

void introduceMe(string name);

int main(){
    introduceMe("Lisa");        // this is the argument that we pass
                        //  to our function
    introduceMe("Anna");  

    return 0;
}

void introduceMe(string name) {         // name is the parameter 
                                  // that is passed to the function
    cout << "My name is " << name << endl;
}