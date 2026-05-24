#include <iostream>
using namespace std;

  int main() {
  	 
  	 string name;
  	 int result, pass, fail;
  	 int studentmarks [3];
  	 int i, totalsum, sum;
  	 double average;
  	 int Studentname = 50;
  	 char choice, yes;
  	 
  	 cout << "Enter student name: " <<endl;
  	 cin >> name;
  	  
  	  cout << " calculus marks: " <<endl;
  	  cin >> studentmarks[0];
  	  cout << "Linear Algebra marks: " <<endl;
  	  cin >> studentmarks[1];
  	  cout << "ICT marks: " <<endl;
  	  cin >> studentmarks[2];
  	    
  	    sum = studentmarks[0] + studentmarks[1] + studentmarks[2];
		average = totalsum / 3.0;
		//simple calculator for adding the sum
		cout << "The sum is: " << studentmarks[0] + studentmarks[1] + studentmarks[2] <<endl;
		 
		 //calculating the total average
		 cout << "Average: "<< sum / 3.0 << average <<endl;
		  
		  //displaying result
		  if(average >= 50 ) {
		  	cout << "Result: pass";
		  	cin >> pass;
		  }
		  else{
		  	cout << "Result: fail" <<endl;
		  }
		  do {
		  	cout <<"Whould you like to enter another student? " <<endl;
		  	cin >> choice;
		  	}
		  	while (choice == yes);{
		  		cout << "continue:" <<endl;
			  }
		
		
		return 0;
		  
  } 
