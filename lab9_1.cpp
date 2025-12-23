#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;
double loan,interest,pay;
int main(){	
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
int i = 0;
double balance = loan,inter = loan*interest/100,total = balance+inter;

if(total < pay){
			pay = total;
		}
double newbalance = total-pay;		

	while(1){
		
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i+1;
		cout << setw(13) << left << balance;
		cout << setw(13) << left << inter;
		cout << setw(13) << left << total;
		cout << setw(13) << left << pay;
		cout << setw(13) << left << newbalance;
		cout << "\n";	

		if(newbalance == 0){
			break;
		}
		balance = newbalance;
		inter = balance*interest/100;
		total = balance+inter;
		if(total <= pay){
			pay = total;
		}
		newbalance = total-pay;
		
		i++;
	}
	
	
	return 0;
}
