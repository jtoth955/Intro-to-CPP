/*******************
 * Name: John R. Toth
 * Date: 1/11/15
 * Description: Program to calculate loan payments
 * ***************/

#include <iostream> 	//necessary for displaying on screen
#include <cmath>	//necessary for doing equations
#include <iomanip>	//required for manipulating display values
using namespace std;
int main()
{

	double 	loan,	//loan amount
		IR, 	//monthly interest rate
		pmnt,	//number of payments
		mpmnt,	//monthly payment
		atot,	//total amount paid back
		itot,	//total interest paid
		iir;	//monthly interest rate

	cout << "Please enter the original amount borrowed: ";
	cin >> loan;
	
	cout << "Please enter your monthly interest rate as a decimal: ";
	cin >> IR;

	cout << "Please enter the term for your loan, in months: ";
	cin >> pmnt;

	//calculation of monthly payment, total amount paid back
	//and total interest paid

	
	 
	iir = IR*100;	//monthly interest rate conversion
	mpmnt = (loan*pow(IR + 1,pmnt) * IR)/ (pow(IR+1,pmnt)-1);
	itot = (mpmnt * pmnt) - loan;
	atot = itot + loan;
	
	cout <<fixed << setprecision(2); 
	cout 	<< left << setw(25) << "Your loan amount: "
		<< "$ "<<right << setw(8) <<  loan <<endl;
	//remove precision of 2 decimal places
	cout 	<< setprecision(0);
	cout 	<< left << setw(25) << "Monthly Interest Rate: "
		<< right << setw(9) << iir << "%" <<endl;
	cout 	<< left << setw(25) << "Number of payments: "
		<< right << setw(10) << pmnt << endl;
	//reset precision to 2 decimal places
	cout 	<< setprecision(2);
	cout 	<< left << setw(25) << "Monthly payment: "
		<<"$ " <<right << setw(8) << mpmnt <<endl;
	cout 	<< left << setw(25) << "Amount paid back: "
		<<"$ " <<right << setw(8) << atot <<endl;
	cout 	<< left << setw(25) << "Interest Paid: "
		<< "$ "<<right << setw(8) << itot <<endl;

return 0;
}
