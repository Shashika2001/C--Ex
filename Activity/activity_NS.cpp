#include<iostream>
using namespace std;
class outside
{
    public:
    int x=0;
    class inside
    {
        public:
        Int x=1;
        static int y;
        int foo(){
            return x;
        }
    };
};
int main(){
    outside A;
    outside::inside B;
    
    cout<<B.foo()<<endl;
    cout<<outside::inside::y<<endl;
    cout<<A.y<<endl;
    cout<<B.y<<endl;
    cout<<C.x<<endl;


}