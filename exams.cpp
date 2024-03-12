#include<iostream>
#include<string.h>

using namespace std;

//defining the structure date

struct date{
	int day;
	char month[10];
	int year;
	
}yesterday,d1;//end of the structure definition
int main(){
	
	yesterday.day=5;
	strcpy(yesterday.month,"October");
	yesterday.year=2023;
	
	    d1=yesterday;
	    
	    cout<<"Yesterday"<<endl
	            <<"Day: "<<yesterday.day
	            <<"Month "<<yesterday.month
	            <<"Year "<<yesterday.year<<endl;
    //display value of d1
         cout<<"Yesterday=D1"<<endl
	            <<"Day: "<<d1.day
	            <<"Month "<<d1.month
	            <<"Year "<<d1.year<<endl;
	            
	    date today={6,"October",2023};
		
		cout<<"Today"<<endl
	            <<"Day: "<<today.day
	            <<"Month "<<today.month
	            <<"Year "<<today.year<<endl; 
				
		d1=today;
		
		 cout<<"D1=Today"<<endl
	            <<"Day: "<<d1.day
	            <<"Month "<<d1.month
	            <<"Year "<<d1.year<<endl;


return 0;
	            
		
				       
    
		        
	
	 
	
	
	
}
