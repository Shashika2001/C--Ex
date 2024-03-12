#include<iostream>

using namespace std;

struct date{
	int day;
	char month[10];
	public:
		int year;
	
};

int main(){
	
	date today={6,"October",2023};
	cout<<"Day: "<<today.day
        <<" Month: "<<today.month
		<<" Year: "<<today.year<<endl;   	
}
