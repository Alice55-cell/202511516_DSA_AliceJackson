#include <iostream>
using namespace std;

void swapNumbers(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
	 int main(){
	int num1 = 5;
	int num2 = 8;
	int* ptr = &num1;
	cout <<"Before swap: " << num1 <<"  " << num2 <<endl;
	swapNumbers(&num1, &num2);
	cout <<"After swap: " << num1 <<"  " << num2 <<endl;
	
	 return 0;	
	 	
	 }
	
