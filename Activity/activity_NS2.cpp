#include<iostream>
using namespace std;
class outside
{
    public:
    int x=0;
    class inside
    {
        public:
        int x=1;
        static int y;
        int foo(){
            return x;
        }
    };
};
outside C; 
int outside::inside::y=5;

int main(){
    outside A;
    outside::inside B;
    
    cout<<B.foo()<<endl;
    cout<<outside::inside::y<<endl;
    //cout<<A.y<<endl;
    cout<<B.y<<endl;
    cout<<C.x<<endl;


}