#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int row , int amount){
	int i,j;
	if(row <= 0 || amount <= 0){
		cout << "Invalid input";
	}else{
	for(i=1;i<=row;i++){
		for(j=1;j<=amount;j++){
			cout << "O";
		}
		cout << "\n";
	}
	}
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
