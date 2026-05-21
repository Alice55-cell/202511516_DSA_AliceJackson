#include <iostream>
#include <string>
using namespace std;
 
 int main(){
 	int mainchoice;

   do {
   	std::cout <<"\n---Foundations and History of c++--- "; 
   	std::cout <<"1. History of c++\n2. Learn c++ concepts\n3. Exit";
   	
   	std::cout << "Enter choice: ";
   	cin >> mainchoice;
   	
   	switch(mainchoice){
   		case 1:
   			break;
   			case 2:
   				break;
   				case 3:
   					std::cout << "Exiting..." <<endl;
   					break;
   					default:
   						std::cout << "Invalid choice! please select 1, 2, or 3: " <<endl;
   						break;
   				
   						std::cout << "Invalid choice! " <<endl;
   					}
   				}
   				while (mainchoice != 3);
	   return 0;
   }

