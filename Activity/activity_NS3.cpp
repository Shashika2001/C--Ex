#include<iostream>
using namespace std;

class Enclosing
{
    int x=0;
    //start of nested class declaration
    class Nested{
        int y=1;

    };
    void EnclosingFunc(Nested *n){
        cout<<n->y;
        cout<<x<<endl;
        cout<<y<<endl;
    }
};
int main(){

}