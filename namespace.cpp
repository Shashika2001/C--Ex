#include<iostream>
using namespace std;
//first name space
namespace first_space{
    void func(){
        cout<< "Inside first_space" <<endl;
    }
}
//second name space 
namespace second_space{
    void func(){
        cout << "inside second_space" << endl;
    }
}

using namespace second_space;
int main(){
    func();
    first_space::func();
}