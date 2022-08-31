
//SARA HAMEED
//QUES3 
#include <iostream>
#include <iomanip>
using namespace std;
void printDescription();
void computePaycheck(float, int, float&, float&);
int main()
{
	float payRate;
	float grossPay;
	float netPay;
	int hours;
	cout << setprecision(0) << fixed;
	cout << "Welcome to the Pay Roll Program" << endl;
	printDescription();
	cout << "Please input the pay per hour" << endl;
	cin >> payRate;
	cout << endl << "Please input the number of hours worked" << endl;
	cin >> hours;
	cout << endl << endl;
	computePaycheck(payRate, hours, grossPay, netPay);
	cout << "The grosspay is" << grossPay << endl;
	cout << "The net pay is $" << netPay << endl;
	cout << "We hope you enjoyed this program" << endl;
	return 0;
}

void printDescription()
{   cout << "************************************************" << endl << endl;
	cout << "This program takes two numbers (payRate & hours)" << endl;
	cout << "and multiplies them to get gross pay " << endl;
	cout << "it then calculates net pay by subtracting 15%" << endl;
	cout << "************************************************" << endl << endl;
}

void computePaycheck(float rate, int time, float& gross, float& net)
{
	gross = rate * time;
	net = (gross)-(gross * 0.15);
}



























//**************************************ASSIGNMENT LAB 4 SWITCH QUES PART 3***********************************
/*#include <iostream>
using namespace std;
int main()
{
	char grade;
	cout << "What grade did you earn in Programming I ?" << endl;
	cin >> grade;
	if (grade == 'A')
		cout << "an A - excellent work !" << endl;
	else if (grade == 'B')
		cout << "you got a B - good job" << endl;
	else if (grade == 'C')
		cout << "earning a C is satisfactory" << endl;
	else if (grade == 'D')
		cout << "while D is passing, there is a problem" << endl;
	else if (grade == 'F')
		cout << "you failed - better luck next time" << endl;
	else
		cout << "You did not enter an A, B, C, D, or F" << endl;
	return 0;
}*/


//******************************************LAB 4***********************************************************

//ques 2 lab 4
/*#include <iostream>
using namespace std;
	int main()
	{
			float average;
			cout << "Input your average:" << endl;
			cin >> average;
			if (average >= 60)
				cout << "You Pass" << endl;
			else if (average > 100 || average<0)
				cout << "Invalid data" << endl;
			else if (average <= 100 and average >= 90)
				cout << "A category" << endl;
			else if (average < 90 and average >= 80)
				cout << "B category" << endl;
			else if (average < 80 and average >= 60)
				cout << "you pass" << endl;
			else if (average >= 0 && average <= 59)
				cout << "you fail" << endl;

		return 0;
}

//QUES 3 LAB 4
/*#include <iostream>
using namespace std;
int main()
{
	char year;
	float gpa;
	cout << "What year student are you ?" << endl;
	cout << "Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)"
		<< endl << endl;
	cin >> year;
	cout << "Now enter your GPA" << endl;
	cin >> gpa;
	if (!(gpa <= 2.0) && year ==1,2,3)
		cout << "It is time to graduate soon" << endl;
	else if (year != '4' || gpa < 2.0)
		cout << "You need more schooling" << endl;
	return 0;
}*/
//LAB 4 QUES 4
//SARA HAMEED
/*#include<iostream>
using namespace std;
int main(){
	char grade;
	cout << "What grade did you earn in Programming I ?" << endl;
	cin >> grade;
	switch (grade)
	{case 'A': cout << "You passed" << endl;
		break;
	case 'B': cout << "You passed" << endl;
		break;
	case 'C': cout << "You passed" << endl;
		break;
	case 'D': cout << "You passed" << endl;
		break;
	}
	switch (grade)
	{case 'A': cout << "an A - excellent work !" << endl;
		break;
	case 'B': cout << "you got a B - good job" << endl;
		break;
	case 'C': cout << "earning a C is satisfactory" << endl;
		break;
	case 'D': cout << "while D is passing, there is a problem" << endl;
		break;
	case 'F': cout << "you failed - better luck next time" << endl;
		break;
	default: cout << "You did not enter an A, B, C, D, or F" << endl;
	}
	return 0;
}*/


//ques 2 lab 4
/*#include <iostream>
using namespace std;
	int main()
	{
			float average;
			cout << "Input your average:" << endl;
			cin >> average;
			if (average >= 60)
				cout << "You Pass" << endl;
			else if (average > 100)
				cout << "Invalid data" << endl;
			else if (average < 100 and average >= 90)
				cout << "A category" << endl;
			else if (average < 90 and average >= 80)
				cout << "B category" << endl;
			else if (average < 80 and average >= 60)
				cout << "you pass" << endl;
			else
				cout<<"you fail" << endl;
		return 0;
}*/


//ques1 lab 4
		/*int num1;
		int num2;
		cout << "Please enter an integer" << endl;
		cin >> num1;
		cout << "Please enter an integer" << endl;
		cin >> num2;

		cout << "num1 = " << num1 << " and num2 = " << num2 << endl;
		if (num1 == num2)
			cout << "Hey, thats a coincidence!" <<
			"The values are the same" << endl;
		else
		{
			cout << "The values are not the same" << endl;
		}/*

//*******************************************LAB 3********************************************************************
//**********************************************ASSIGNMENT 1****************************************
		//ques 6 lab 3 ques 3
	/*float totalsales;
	float localtaxpercentage;
	float statestaxpercentage;
	float statetaxforthemonth;
	float localtaxforthemonth;
	cout << "Please input the total sales for the month" << endl;
	cin >> totalsales;
	cout << "Please input the state tax percentage in decimal form" << endl;
	cin >> statestaxpercentage;
	cout << "Please input the local tax percentage in decimal form" << endl;
	cin >> localtaxpercentage;
	cout << "The total sales for the month is " << setprecision(2) << fixed << "$" << totalsales << endl;
	statetaxforthemonth = totalsales * statestaxpercentage;
	cout << "The state tax for the month is " << setprecision(2) << fixed << "$" << statetaxforthemonth << endl;
	localtaxforthemonth = localtaxpercentage * totalsales;
	cout << "The local tax for the month" << setprecision(2) << fixed << "$" << localtaxforthemonth << endl;*/

	//QUES 6 LAB 3 QUES 2 AS ASSIGNMENT
	//SARA HAMEED
	/*#include <iostream>
	#include<iomanip>
	using namespace std;
	int main()
	{
		float Americancolonial =85.00;
		float modern=57.50;
		float frenchclassical = 127.75;
		float noofAmericancolonialsold;
		float noofmodernsold;
		float nooffrenchclassicalsold;
		float salesofAmericancolonial;
		float salesofmodern;
		float salesoffrenchclassical;
		float totalsales;
		cout << "Please input the number of American Colonial chairs sold " << endl;
		cin >> noofAmericancolonialsold;
		cout << " Please input the number of Modern chairs sold " << endl;
		cin >> noofmodernsold;
		cout << "Please input the number of French Classical chairs sold " << endl;
		cin >> nooffrenchclassicalsold;
		salesofAmericancolonial = noofAmericancolonialsold * Americancolonial;
		salesofmodern = noofmodernsold * modern;
		salesoffrenchclassical = nooffrenchclassicalsold * frenchclassical;
		cout << "The total sales of American Colonial chairs " <<setprecision(2)<<fixed<< salesofAmericancolonial<<"$" << endl;
		cout << "The total sales of Modern chairs "  <<setprecision(2) << fixed<<salesofmodern << "$" << endl;
		cout << "The total sales of French Classical chairs " <<setprecision(2) << fixed<< salesoffrenchclassical << "$" << endl;
		totalsales = salesofAmericancolonial + salesofmodern + salesoffrenchclassical;
		cout << "The total sales of all chairs " << totalsales << "$" << endl;
		return 0;
	}*/









	//QUES 6 LAB 3 part 1 AS ASSIGNMENT
		/*float grade1 = 0;
		float grade2=0;
		float grade3=0;
		float average=0;
		cout << "Please input the first grade " << endl;
		cin >> grade1;
		cout << "Please input the second grade " << endl;
		cin >> grade2;
		cout << "Please input the third grade "  << endl;
		cin >> grade3;
		average = (grade1 + grade2 + grade3) / 3;
		cout << "The average of the three grades is:" <<setprecision(2)<<fixed<< average << endl;*/


		//***********************************************LAB 3**********************************************************
		//QUES 5 LAB  3
		//SARA HAMEED
		/* <fstream>
		#include <iomanip>
		using namespace std;
		int main()
		{
			ifstream dataIn;
			ofstream dataOut;
			int quantity;
			float itemPrice;
			float totalBill;
			dataIn.open("transaction.dat"); // This opens the file.
			dataOut.open("bill.out");
			// Fill in the appropriate code in the blank below
			dataOut << setprecision(2) << fixed << showpoint; // formatted output
			dataIn >> quantity >> itemPrice;
			totalBill = quantity * itemPrice;
			dataOut << totalBill << endl;*/

			/*#include <iostream>
				using namespace std;
				const int AT_BAT = 421;
				const int HITS = 123;
				int main()
				{
					float batAvg;
					batAvg=static_cast<float>(HITS) / AT_BAT;
						cout << "The batting average is " << batAvg << endl;
			return 0;
				}*/

				//QUES 3 LAB 3
				//SARA HAMEED
				/*#include <iostream>
				#include <cmath>
				#include<iomanip>
						using namespace std;
						int main()
						{
							float a, b;
							float hyp;
							cout << "Please input the value of the two sides" << endl;
							cin >> a >> b;
							hyp = sqrt((a*a)+(b*b));
							cout << "The sides of the right triangle are " << a << " and " << b << endl;
							cout << "The hypotenuse is " << setprecision(2) << fixed<< hyp << endl;*/


				//ques 2
				/*float price1, price2;
				int quantity1, quantity2;
				cout << setprecision(2) << fixed << showpoint;
				cout << "Please input the price and quantity of the first item" << endl;
				cin >> price1 >> quantity1;
				cout<< "Please input the price and quantity of the second item" << endl;
				cin >> price2 >> quantity2;

			    cout << setw(15) << "PRICE" << setw(12) << "QUANTITY\n\n";
				cout << setw(15)<<price1 <<setw(12)<<quantity1 << endl;
				cout << setw(15) << price2 << setw(12)<<quantity2 << endl;*/


				/*int quantity;
				float itemPrice;
				float totalBill;
				cout << setprecision(4) << fixed<<showpoint;
				cout << "Please input the number of items bought" << endl;
				cin >> quantity;
				cout << "What is the price of each item" << endl;
				cin >> itemPrice;
				totalBill = quantity * itemPrice;
				cout << "The total bill is" << totalBill <<"$"<< endl;*/



				//*********************************************LAB 2**************************************************
				/*#include <iostream>
				using namespace std;
				const string FAVORITESODA= "Dr.Dolittle";
				const char BESTRATING ='A';
				int main()
							{
				char rating = 'B';
				string favoritesnack = "crackers";
				int numberofpeople = 250;
				int topchoicetotal = 148;
				cout << "The preferred soda is " <<FAVORITESODA << endl;
				cout << "The preferred snack is " << favoritesnack<< endl;
				cout << "Out of " <<numberofpeople << " people "
				<<topchoicetotal<< " chose these items!" << endl;
				cout << "Each of these products were given a rating of " <<BESTRATING ;
				cout << " from our expert tasters" << endl;
				cout << "The other products were rated no higher than a: " << rating
					<< endl;*/



					//LAB 2 QUES 3
					/*float area;
					float perimeter;
					area = width * length;
					perimeter = 2 * (length * width);
					cout << "The perimeter of rectangle is:" << perimeter << endl;
					cout << "The area of rectangle is:" << area << endl;*/

					//LAB 2 QUES 2 PART 3
					/*float area;
					int circumference;
					circumference = 2 * PI * RADIUS;
					area = 2 * PI * RADIUS;
					cout << "The circumference of the circle is:" << circumference << endl;
					cout << "The area of circle is:" << area << endl;*/



					//LAB 2 QUES 2 PART 1 AND 2
					 /*float area;
				       float circumference;
						circumference = 2 * PI * RADIUS;
						area = 2 * PI * RADIUS;
						cout << "The circumference of the circle is:" << circumference << endl;
						cout << "The area of circle is:" << area << endl;*/


					//**********************************************LAB 1***********************************************************	

											//QUES 1 PART 3
											/*cout << "************" << endl;
											cout <<"    Programmer: Sara Hameed" << endl;
											cout <<"    R-100,Block H" << endl;
											cout << "    North Nazimabad,Karachi.55216 " << endl;
											cout << endl;
											cout << "    Telephone:+36646417" << endl;
											cout << "************" << endl;*/

											//LAB 2 QUES 1 PART 2
											/*cout << "Sara Hameed" << endl;
												cout << "R-1oo,Block H" << endl;
												cout << "North Nazimabad,Karachi.76106" << endl;
												cout << endl;
												cout << endl;
												cout << endl;
												cout << "Telephone: +36646417" << endl;*/





												//	lab 2 ques 1
												/*cout << "Sara Hameed" << endl;
												cout << "R-1oo,Block H" << endl;
												cout << "North Nazimabad,Karachi.76106" << endl;
												cout << "+36646417" << endl;*/












												/*
												//************************************LAB 1*************************************************************
													//QUES 5
													#include <iostream>
												using namespace std;

												int main() {
													char c;
													cout << "Enter an alphabet: ";
													cin >> c;
													if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U') {
														cout << c << " is a vowel.";
													}
													else {
														cout << c << " is not a vowel.";
													}

													return 0;


												//QUES 4
													float firstNumber;
													float secondNumber;
													cout << "enter the first number " << endl;
													cout << "then hit enter" << endl;
													cin >> firstNumber;

													cout << "enter the second number " << endl;
													cout << "then hit enter" << endl;
													cin >> secondNumber;

													cout << endl << "you input the numbers as " << firstNumber << " and "<< secondNumber << endl;
													firstNumber = secondNumber;
													secondNumber = firstNumber;

													cout << "After swapping,the values of the two numbers are " << firstNumber << "and" << secondNumber << endl;*/
													//QUES 1
													   // cout << "Now is the time for all good men" << endl;
														//cout << "To come to the aid of their party" << endl;
														//cout << endl;



														//QUES 2
														/*int number;
														float total;
														cout << "Today is a great day for lab" << endl;
														cout << endl << "Let's start off by typing a number of your choice" << endl;
														cin >> number;
														total = number * 2;
														cout << total << "is twice the number you typed" << endl;
														cout << endl;
														//QUES 3
														float numbers;
														int divider;
														divider = 2;
														cout << "Hi there" << endl;
														cout << "Please input a number and then hit return"<<endl;
														cin >> numbers;
														numbers = numbers / divider;
														cout << "Half of your number is " << numbers << endl;*/


//************************************LAB 1*************************************************************
	





//QUES 5
#include <iostream>
using namespace std;

int main() 
{
	char c;
	cout << "Enter an alphabet: ";
	cin >> c;
	if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') {
		cout << c << " is a vowel.";
	}
	else {
		cout << c << " is not a vowel.";
	}

	return 0;


	//QUES 4
	float firstNumber;
	float secondNumber;
	cout << "enter the first number " << endl;
	cout << "then hit enter" << endl;
	cin >> firstNumber;

	cout << "enter the second number " << endl;
	cout << "then hit enter" << endl;
	cin >> secondNumber;

	cout << endl << "you input the numbers as " << firstNumber << " and " << secondNumber << endl;
	firstNumber = secondNumber;
	secondNumber = firstNumber;

	cout << "After swapping,the values of the two numbers are " << firstNumber << "and" 
		<< secondNumber << endl;

		//QUES 1
		    cout << "Now is the time for all good men" << endl;
			cout << "To come to the aid of their party" << endl;
			cout << endl;



			//QUES 2
			int number;
			float total;
			cout << "Today is a great day for lab" << endl;
			cout << endl << "Let's start off by typing a number of your choice" << endl;
			cin >> number;
			total = number * 2;
			cout << total << "is twice the number you typed" << endl;
			cout << endl;


			//QUES 3
			float numbers;
			int divider;
			divider = 2;
			cout << "Hi there" << endl;
			cout << "Please input a number and then hit return"<<endl;
			cin >> numbers;
			numbers = numbers / divider;
			cout << "Half of your number is " << numbers << endl;