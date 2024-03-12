#include<iostream>
using namespace std;

class car
{
    int regNo;
    int manuYear;
    string liceNo;
    string color;
    string model;

    void start();
    int accelerate();
    void setbreak();
};

int main(){
    car myRedCar={234,2017,"wp4567","Red","C"};
        car myBlueCar={456,2018,"cp345","Blue","B"};

    cout<<"My Red Car : "<<myRedCar.liceNo<<" "<<endl;
    cout<<"My Blue Car : "<<myBlueCar.liceNo<<" "<<endl;

}