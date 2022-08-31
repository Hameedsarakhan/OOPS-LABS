//**************************************lab 12*****************************************************************
//SARA HAMEED(SE-21012)
#include<iostream>

using namespace std;

class DateTime
{
	int day, month, year, hours, minutes, seconds;

public:

	void SetValue(int d, int m, int y)
	{
		day = d;
		month = m;
		year = y;
		cout << "Date is:" << day << "-" << month << "-" << year << endl;
	}

	void SetValue(int d, int m, int y, int h)
	{
		day = d;
		month = m;
		year = y;
		hours = h;
		cout << "Date is:" << day << "-" << month << "-" << year << endl;
		cout << "Time is:" << hours << " hours." << endl;
	}

	void SetValue(int d, int m, int y, int h, int min)
	{
		day = d;
		month = m;
		year = y;
		hours = h;
		minutes = min;
		cout << "Date is:" << day << "-" << month << "-" << year << endl;
		cout << "Time is:" << hours << ":" << minutes << endl;
	}

	void SetValue(int d, int m, int y, int h, int min, int s)
	{
		day = d;
		month = m;
		year = y;
		hours = h;
		minutes = min;
		seconds = s;
		cout << "Date is:" << day << "-" << month << "-" << year << endl;
		cout << "Time is:" << hours << ":" << minutes << ":" << seconds << endl;
	}
};
int main()
{
	int d, m, y, h, min, s;
	cout << "Enter date:";
	cin >> d;
	cout << "Enter month:";
	cin >> m;
	cout << "Enter year:";
	cin >> y;
	cout << "Enter hours:";
	cin >> h;
	cout << "Enter minutes:";
	cin >> min;
	cout << "Enter seconds:";
	cin >> s;
	DateTime dt;
	dt.SetValue(d, m, y);
	dt.SetValue(d, m, y, h);
	dt.SetValue(d, m, y, h, min);
	dt.SetValue(d, m, y, h, min, s);
	system("pause");
	return 0;
}





























/*#include<iostream>
using namespace std;
class person                         // person class
{
protected:
	char name[40];
public:
	void getName()
	{
		cout << "   Enter name: "; cin >> name;
	}
	void putName()
	{
		cout << "Name is: " << name << endl;
	}
	virtual void getData() = 0;
	virtual bool isOutstanding() = 0;
};
class student : public person        // student class
{
private:
	float gpa;              // grade point average
public:
	void getData()          // get student data from user
	{
		person::getName();
		cout << "   Enter student's GPA: "; cin >> gpa;
	}
	bool isOutstanding()
	{
		return (gpa > 3.5) ? true : false;
	}
};
class professor : public person      // professor class
{
private:
	int numPubs;             // number of papers published
public:
	void getData()           // get professor data from user
	{
		person::getName();
		cout << "   Enter number of professor's publications: ";
		cin >> numPubs;
	}
	bool isOutstanding()
	{
		return (numPubs > 100) ? true : false;
	}
};
int main(void)
{
	person* persPtr[100];     // list of pointers to persons
	int n = 0;                // number of persons on list
	char choice;

	do
	{
		cout << "Enter student or professor (s/p): ";
		cin >> choice;
		if (choice == 's')                  // put new student
			persPtr[n] = new student;     //    in array
		else                             // put new professor
			persPtr[n] = new professor;   //    in array
		persPtr[n++]->getData();         // get data for person
		cout << "   Enter another (y/n)? ";  // do another person?
		cin >> choice;
	}
	while (choice == 'y');         // cycle until not 'y'

	for (int j = 0; j < n; j++)           // print names of all
	{                             // persons, and
		persPtr[j]->putName();        // say if outstanding
		if (persPtr[j]->isOutstanding() == true)
			cout << "   This person is outstanding\n";
	}
}  // end main()*/































//**************************************lab 11*****************************************************************
//SARA HAMEED(SE-21012)

/*#include<iostream>
using namespace std;
class person
{
public:
	int age;
	char gender;
	void getgender(char g) {
		gender = g;
	}
};
class employee
{
protected:
	int employee_id;
	double salary;
public:
	string name;
	void getdata(string n, int id, double s) {
		name = n;
		employee_id = id; 
		salary = s;
	}
	void printdata() {
		cout << "Name:" << name << endl;
		cout << "employee id:" << employee_id << endl;
		cout << "salary:" << salary << endl;
	}
};
class faculty :public person, employee
{
public:
	string department;
	string qualification;
	void getdata(string d, string q, string n, int id, double s, int ag, char gen) {
		employee::getdata(n, id, s);
		age = ag;
		gender = gen;
		department = d;
		qualification = q;
	}
	void printdata() {
		employee::printdata();
		cout << "age:" << age << " gender: " << gender << " dep:" << department << endl;
		cout << "qualification:" << qualification << endl;
	}
};
class lecturer :public faculty
{
public:
	string specialization;
	int experience;
	void getdata(string n, int id, double s, int ag, char gen, string d, string q, string sp, int exp) {
		faculty::getdata(d, q, n, id, s, ag, gen);
		specialization = sp;
		experience = exp;
	}
	void printdata() {
		faculty::printdata();
		cout << "specialization:" << specialization << endl;
		cout << "experience:" << experience << endl;
	}
};
int main()
{lecturer ned;
ned.getdata("Ahmed", 02, 200000, 40, 'M', "CS","PHD","Data science", 10);
ned.printdata();
return 0;
}*/


























/*#include<iostream>
using namespace std;

class Salary
{
public:
	float grosspay;
	float deduction;
	float netpay;
	Salary()
	{}

	Salary(float gp, float de, float net_pay)
	{
		grosspay = gp;
		deduction = de;
		netpay = net_pay;
	}
};
class Date
{
public:
	int day;
	int month;
	int year;
	Date()
	{}
	Date(int d, int mon, int yr)
	{
		day = d;
		month = mon;
		year = yr;
	}
};
class Employee
{
private:
	int Employee_No;
	char* Name;
	Salary S;
	Date D;
public:
	Employee()
	{}
	Employee(int en, char* name, int da, int mth, int yr, float gp, float ded, float net_pay)
	{
		Employee_No = en;
		Name = new char[80];
	}
	void getemployee()
	{
		cout << "Enter employee no:";
		cin >> Employee_No;
		cout << "Enter employee name:";
		Name = new char[50];
		cin >> Name;
		cout << "Enter gross pay:";
		cin >> this->S.grosspay;
		cout << "Enter deduction from salary:";
		cin >> this->S.deduction;
		cout << "Enter net pay:";
		cin >> this->S.netpay;
		cout << "Enter date as day, month and year";
		cin >> this->D.day;
		cin >> this->D.month;
		cin >> this->D.year;
	}
	void display()
	{
		cout << "Employee details are:" << endl;
		cout << "Employee number:" << Employee_No << endl;
		cout << "Employee name:" << Name << endl;
		cout << "Salary details are:" << "\n" << "Gross pay:" << this->S.grosspay << endl;
		cout << "Deductions:" << this->S.deduction << endl;
		cout << "Net pay:" << this->S.netpay << endl;
		cout << "Date of joining was:" << this->D.day << "/" << this->D.month << "/" <<
			this->D.year << endl;
	}
};
int main()
{
	Employee emp;
	emp.getemployee();
	emp.display();
	system("pause");
	return 0;
}*/

























//**************************************lab 9*****************************************************************
//SARA HAMEED(SE-21012)
//QUES 3
/*#include <iostream>
using namespace std;
class B
{
private:
	int q;
protected:
	int p;
public:
	int o;
	B();
	B(int n);
	int getp() const;
	int getq() const;
};
B::B()
{
	p = 0;
	q = 0;
}
B::B(int n)
{
	p = n;
	q = n;
}
int B::getp() const
{
	return p;
}
int B::getq() const
{
	return q;
}
class D :public B
{
private:
	int r;
public:
	D();
	D(int n);
	int getr() const;
};
D::D()
{
	o = 0;
	r = 0;
}
D::D(int n) :B(n)
{
	r = n;
}
int D::getr() const
{
	return r;
}
int main()
{
	D d(3);
	cout << d.getp() << "" << d.getq() << "" << d.getr() << endl;
	return 0;
}(*/


























//QUES2
//SARA HAMEED(SE-21012)
/*#include<iostream>
using namespace std;
class Rectangle
{
private:
	double length;
	double width;
public:
	Rectangle(double l = 0.0, double w = 0.0)
	{
		length = l;
		width = w;
	}
	void setDimensions(double l,double w)
	{
		length = l;
		width = w;
	}
	double getLength() const
	{
		return length;
	}
	double getWidth() const
	{
		return width;
	}
	double area() const
	{
		return(length * width);
	}
	double perimeter() const
	{
		return (2 * (length + width));
	}
	void print() const
	{
		cout << "The length of the rectangle is " << getLength() << endl;
		cout << "The width of the rectangle is " << getWidth() << endl;
		cout << "The area of the rectangle is " << area() << endl;
	}

	};
class BoxType :public Rectangle
{
private:
double height;
public:
	BoxType(double l = 0.0, double w = 0.0, double h = 0.0)
	{
		height = h;
	}
	void setDimensions(double l, double w, double h)
	{
		Rectangle::setDimensions(l, w);
		height = h;
	}
	double area() const
	{
		return (2 * (getLength() + getWidth()) + (getLength() * height) + (height * getWidth()));
	}
	double getHeight() const
	{
		return height;
	}
	double getVolume() const
	{
		return(getLength() * getWidth() * height);
	}
	void print() const
	{
		cout << "the length of the box is " << getLength() << endl;
		cout << "the width of the box is " << getWidth() << endl;
		cout << "the height of the box is " << getHeight() << endl;
		cout << "the volume of the box is " << getVolume() << endl;
		cout << "the area of the box is " << area() << endl;
	}
};
int main()
{
	Rectangle r;
	r.setDimensions(10.0, 20.5);
	r.print();
	BoxType b;
	b.setDimensions(18.0, 7.8, 5.0);
	b.print();
	return 0;
}*/


























//QUES1
//SARA HAMEED(SE-21012)
/*#include<iostream>
using namespace std;

class Student
{
protected:
	int usn, age;
	char name[20];
};
class Ug : public Student
{
	int sem, fee, sti;
public:
	void Uggetdata()
	{
		cout << "enter name" << endl;
		cin >> name;
		cout << "enter fee" << endl;
		cin >> fee;
		cout << "enter sem" << endl;
		cin >> sem;
		cout << "enter studentid" << endl;
		cin >> sti;
	}
	void Ugdisplay()
	{
		cout << "FOR UNDERGRADUATE" << endl;
		cout << name << "\t" << fee << "\t" << sem << "\t" << sti << endl;
	}
	int getUgsem()
	{
		return(sem);
	}
	int getUgage()
	{
		return(age);
	}
};
class Pg : public Student
{
	int sem, fee, sti;
public:
	void Pggetdata()
	{
		cout << "enter name" << endl;
		cin >> name;
		cout << "enter fee" << endl;
		cin >> fee;
		cout << "enter sem" << endl;
		cin >> sem;
		cout << "enter student id" << endl;
		cin >> sti;
	}
	void display()
	{
		cout << "FOR POSTGRADUATE" << endl;
		cout << name << "\t" << fee << "\t" << sem <<"\t" << sti << endl;
	}
	int getPgsem()
	{
		return(sem);
	}
	int getPgage()
	{
		return(age);
	}
};
int main()
{
	Pg p;
	Ug u;
	u.Uggetdata();
	p.Pggetdata();
	u.Ugdisplay();
	p.display();
	system("pause");
	return 0;
}*/















































//**************************************lab 8*****************************************************************
//QUES4
//SARA HAMEED(SE-21012)

/*#include<iostream>
#include<conio.h>
using namespace std;
class abc 
{
	int a, b;
public:
	abc(int x, int y)
	{
		a = x;
		b = y;
	}
	abc operator ++()
	{
		a++;
		b++;
		return abc(a, b);
	}
	void show()
	{
		cout << "a= " << a << endl;
		cout << "b= " << b << endl;
	}
};
int main()
{
	abc a1(10, 20);
	a1.show();
	++a1;
	a1.show();
	++a1;
	a1.show();
	_getch();
}
*/


































//QUES 3
//SARA HAMEED(SE-21012)
/*#include<iostream>
using namespace std;
class Complex
{
private:
	int real;
	int imag;
public:
	Complex(int r = 0, int i = 0)
	{
		real = r;
		imag = i;
	}
	friend ostream& operator<<(ostream& out, const Complex& c);
	friend istream& operator>>(istream& in, Complex& c);
};
ostream& operator<<(ostream&out,const Complex &c) {
	out << c.real << "+";
	out << c.imag << "i" << endl;
	return out;
}
istream& operator>>(istream&in, Complex& c) {
	cout << "enter real part : ";
	in >> c.real;
	cout << "enter imaginary part:";
	in >> c.imag;
	return in;
}
int main() {
	Complex c1; 
	cin >> c1;
	cout << "the complex object is:";
	cout << c1;
	return 0;
}*/























//QUES 2
//SARA HAMEED(SE-21012)
/*#include<iostream>
using namespace std;
class Typelab {
private:
	float value1;
	float value2;
public:
	void setvalue(float x, float y);
	float getvalue1()const;
	float getvalue2()const;
	void print()const;
	Typelab operator+(const Typelab&)const;
	Typelab();
	Typelab(float x, float y);
};
void Typelab::print()const {
	cout << "lab1 (" << value1 << "," << value2 << ")" << endl;
}
	Typelab::Typelab() {
		value1 = 0;
		value2 = 0;
	}
	Typelab::Typelab(float x, float y) {
		value1 = x;
		value2 = y;
	}
	Typelab  Typelab::operator+(const Typelab& lab)const {
		Typelab templab;
		templab.value1 = value1 + lab.value1;
		templab.value2 = value2 + lab.value2;
		return templab;
	}
	int main() {
		Typelab lab1(2, 3);
		Typelab lab2(4, 5);
		Typelab lab3;
		lab3 = lab1 + lab2;
		cout << ""; lab1.print();
		cout << ""; lab2.print();
		cout << "the sum of lab1 and lab2 is"; lab3.print();
		return 0;
	}*/

//ques 1
/*#include<iostream>
using namespace std;
class Typelab {
private:
	float value1;
	float value2;
public:
	void setvalue(float x, float y);
	float getvalue1()const;
	float getvalue2()const;
	bool operator!=(const Typelab&)const;
	void print()const;
	Typelab();
	Typelab(float x, float y);
};
Typelab::Typelab() {
	value1 = 0;
	value2 = 0;
}
Typelab::Typelab(float x, float y) {
	value1 = x;
	value2 = y;
}
void Typelab::print()const {
	cout << "lab1 (" << value1 << "," << value2 << ")" << endl;
}
bool Typelab::operator!=(const Typelab& lab)const {
	return((value1 != lab.value1) || (value2 != lab.value2));
}
int main() {
	Typelab lab1(2, 3);
	Typelab lab2(4, 5);
	cout << ""; lab1.print();
	cout << ""; lab2.print();
	if (lab1 != lab2)
		cout << "lab1 and lab2 are not equal" << endl;
	else
		cout << "lab1 and lab2 are equal" << endl;
	return 0;
}*/
























//*****************************************LAB 7 ********************************************************************
//QUES 3
//SARA HAMEED
/*#include <iostream>
using namespace std;

class BankAccount
{
private:
	int accountNo;
	string accountName;
	float accountBalance;

public:
	//Default Constructor
	BankAccount()
	{
		accountNo = 0;
		accountName = "";
		accountBalance = 0.0;
	}
	BankAccount(int no)
	{
		accountNo = no;
		accountName = "";
		accountBalance = 0.0;
	}
	BankAccount(int no, string name)
	{
		accountNo = no;
		accountName = name;
		accountBalance = 0.0;
	}
	BankAccount(int no, string name, float balance)
	{
		accountNo = no;
		accountName = name;
		accountBalance = balance;
	}

	void showData()
	{
		cout << "Account No is " << accountNo << endl;
		cout << "Account Name is " << accountName << endl;
		cout << "Balance is " << accountBalance << endl;
	}
};

int main()
{
	//OverLoading
	BankAccount sara, Abiha, abeer;

	sara.showData();
	BankAccount sara1(4);  // Other Object naming Maham1
	BankAccount sara2(4, "sara");
	BankAccount sara3(4, "sara hameed", 100000.0);
	sara1.showData();
	sara2.showData();
	sara3.showData();

	cout << endl;
	Abiha.showData();
	BankAccount Abiha1(14, "Abiha", 5000.0);
	Abiha1.showData();

	cout << endl;
	BankAccount abeer1(19, "abeer", 50000.0);
	abeer1.showData();

	return 0;
}
*/
































/*#include<iostream>
using namespace std;
class rectangle
{
private:
	int length;
	int breadth;

public:
	int area() {
		return(length * breadth);
	}
	int perimeter()
	{
		return(2 * length * breadth);
	}
	rectangle()
	{
		length = 0;
		breadth = 0;
	}
	rectangle(int l, int b)
	{
		length = l;
		breadth = b;
	}
	void showdata()
	{
		cout << "the length is " << length << " and breadth is " << breadth << endl;
		cout << "area of rectangle is " << area() << endl;
		cout << "the perimeter of the rectangle is " << perimeter() << endl;
	}


};

int main()
{
	rectangle r1;
	rectangle r2(2, 4);
	r2.showdata();
	rectangle r3(r2);
	r3.showdata();

	return 0;
};*/


/*#include<iostream>
#include<string>
using namespace std;
class BankAccount
{
private:
	int accountNo;
	string accountName;
	float accountBalance;
public:
	BankAccount()
	{
		accountNo = 0;
		accountName = "";
		accountBalance = 0.0;
	}
	BankAccount(int no,string name)
	{
		accountNo = no;
		accountName = "";
		accountBalance = 0.0;
	}
	BankAccount(int no, string name,float balance)
	{
		accountNo = no;
		accountName = name;
		accountBalance = 0.0;
	}
	void showdata()
	{
		cout << "account no is" << accountNo << endl;
		cout << "account name is" << accountName << endl;
		cout << "balance is" << accountBalance << endl;
	}

};
int main()
{
	BankAccount obj1, obj2, obj3;
	obj1.showdata();
	BankAccount obj1(4);
	BankAccount obj12(4, "sara");
	BankAccount obj13(4, "sara hameed", 10000.0);
	obj1.showdata();
	obj12.showdata();
	obj13.showdata();

	obj2.showdata();
	BankAccount obj21(12, "sara", 5000.0);

	obj3.showdata();
	BankAccount obj21(19, "sara", 9000.0);
	return 0;
};*/







































/*
#include <iostream>
using namespace std;
class Account
{
private:
	int number;
	double balance;
public:
	Account()
	{
		number = 0;
		balance = 0;
	}
	void setdata(int x, double y)
	{
		number = x;
		balance = y;
	}
	void display()
	{
		cout << "Account Number is: " << number << endl;
		cout << "Balance is: " << balance << endl;
	}
};
int main()
{
	Account ac;
	ac.setdata(10, 5.23);
	ac.display();

	return 0;
};
*/




























//****************************************************LAB 6.2******************************************************************
//QUES3
//SARA HAMEED
/*#include <iostream>
#include <iomanip>
using namespace std;
const float dollarstoeuros = 1.06;
const float dollarstopesos = 9.73;
const float dollarstoyen = 124.35;
void convertMulti(float dollars, float& euros, float& pesos);
void convertMulti(float dollars, float& euros, float& pesos, float& yen);
float convertToYen(float dollars);
float convertToEuros(float dollars);
float convertToPesos(float dollars);
int main()
{
	float dollars, euros, pesos, yen;
	cout << fixed << showpoint << setprecision(2);
	cout << "Please input the amount of American Dollars you want converted to euros and pesos " << endl;
	cin >> dollars;
	convertMulti(dollars, euros, pesos);
	cout << "$" << dollars << "is converted to " << euros << "euros" << pesos << "and pesos" << endl;
	cout << "Please input the amount of American Dollars you want converted to euros, pesos and yen" << endl;
	cin >> dollars;
	convertMulti(dollars, euros, pesos, yen);
	cout << "$" << dollars << "is converted to " << euros << "euros" << pesos << " pesos" << yen << "and yen" << endl;

	cout << "Please input the amount of American Dollars you want converted to yen" << endl;
	cin >> dollars;
	cout << "$" << dollars << "is converted to" << convertToYen(dollars) << "yens" << endl;


	cout << "Please input the amount of American Dollars you want converted to euros";
	cin >> dollars;
	cout << "$" << dollars << "is converted to" << convertToEuros(dollars) << "euros" << endl;

	cout << "Please input the amount of American Dollars you want converted to pesos ";
	cin >> dollars;
	cout << "$" << dollars << "is converted to" << convertToPesos(dollars) << "pesos" << endl;
	return 0;
}
void convertMulti(float dollars, float& euros, float& pesos)
{
	cout << "The function convertMulti with dollars, euros and pesos  was called with " << dollars << " dollars" 
		<< endl << endl;
		 euros = dollars * (dollarstoeuros);
	pesos = dollars * (dollarstopesos);
}

void convertMulti(float dollars, float& euros, float& pesos, float& yen)
{
	cout << "The function convertMulti with dollars, euros and pesos and yen  was called with " << dollars << " dollars"
		<< endl;
		 euros = dollars * (dollarstoeuros);
	pesos = dollars * (dollarstopesos);
	yen = dollars * (dollarstoyen);
}

float convertToYen(float dollars)
{
	cout << "The function convertToYen was called with " << dollars << " dollars" << endl;
	return((dollars)*dollarstoyen);
}
float convertToEuros(float dollars)
{
	cout << "The function convertToEuros was called with " << dollars << " dollars" << endl;
	return((dollars)*dollarstoeuros);
}
float convertToPesos(float dollars)
{
	cout << "The function convertToYen was called with " << dollars << " dollars" << endl;
	return((dollars)*dollarstopesos);
}*/



























//QUES2
//SARA HAMEED
/*#include <iostream>
#include <iomanip>
using namespace std;
void normalizeMoney(float& dollars, int cents = 150);
int main()
{
	int cents;
	float dollars;
	cout << setprecision(2) << fixed << showpoint;
	{
		cents = 95;
		cout << "\n We will now add 95 cents to our dollar total\n";
		normalizeMoney(dollars, cents);
		cout << "Converting cents to dollars resulted in " << dollars << " dollars\n";
	}
	{
		cout << "\n We will now add 193 cents to our dollar total\n";
		cents = 193;
		normalizeMoney(dollars, cents);
		cout << "Converting cents to dollars resulted in " << dollars << " dollars\n";
	}
	{
		cout << "\n We will now add the default value to our dollar total\n";
		normalizeMoney(dollars);
		cout << "Converting cents to dollars resulted in " << dollars << " dollars\n";
	}
	return 0;
}
void normalizeMoney(float& dollars, int cents)
{
	float total = 0;
	static float sum = 0.0;
	dollars = float(cents) / 100;
	total = total + dollars;
	sum = sum + dollars;
	cout << "We have added another $" << dollars << " to our total" << endl;
	cout << "Our total so far is $" << sum << endl;
	cout << "The value of our local variable total is $" << total << endl;
}*/


//QUES1
//SARA HAMEED
/*#include <iostream>
#include <iomanip>
using namespace std;
const double PI = 3.14;
const double RATE = 0.25;
void findArea(float, float&);
void findCircumference(float, float&);
int main()
{
	cout << fixed << showpoint << setprecision(2);
	float radius = 12;
	cout << " Main function outer block" << endl;
	cout << " PI,RATE and radius are active here" << endl << endl;
	{
		float area;
		cout << "Main function first inner block" << endl;
		cout << "PI,RATE,radius and area are active here" << endl << endl;
		area = PI * radius * radius;
		cout << "The radius = " << radius << endl;
		cout << "The area = " << area << endl << endl;
	}
	{
		float radius = 10;
		float circumference;
		cout << "Main function second inner block" << endl;
		cout << "PI,RATE,radius and circumference are active here" << endl << endl;
		circumference = 2 * PI * radius;
		cout << "The radius = " << radius << endl;
		cout << "The circumference = " << circumference << endl << endl;
	}
	float area;
	float circumference;
	cout << "Main function after all the calls" << endl;
	cout << "PI,RATE,radius,area and circumference are active here" << endl << endl;
	findArea(radius, area);
	findCircumference(radius, circumference);
	return 0;
}
void findArea(float rad, float& answer)
{
	cout << "AREA FUNCTION" << endl << endl;
	cout << "PI,RATE,radius and area are active here" << endl << endl;
	answer = PI * rad * rad;
	cout << "the ans is" << answer << endl;
}
void findCircumference(float length, float& distance)
{
	cout << "CIRCUMFERENCE FUNCTION" << endl << endl;
	cout << "PI,rate,radius and circumference are active here" << endl << endl;
	distance = 2 * PI * length;
	cout << "the circumference is" << distance << endl;
}*/
//******************************************LAB 6.1 STUDENT GENERATED CODE*************************************************
 

//QUES1
/*#include <iostream>
using namespace std;
void swap(float, float, float);
int main() 
{
	float first;
	float second;
	float temp;
	cout << "enter first" << endl;
	cin >> first;
	cout << "enter second" << endl;
	cin >> second;
	cout << "the first no is " << first << " the second no is " << second << endl;
swap(first, second, temp);
	return 0;
}
void swap(float no1, float no2, float no3)
{
	no3 = no1;
	no1 = no2;
	no2 = no3;
	cout << " after swapping the first no is " << no2 << " the second no is " << no3 << endl;
}*/


//*******************************************LAB 6******************************************************************
//SARA HAMEED
//QUES3 
/*#include <iostream>
#include <iomanip>
using namespace std;
//Function prototypes
void printDescription();
void computePaycheck(float, int, float&, float&);
int main()
{
	float payRate;
	float grossPay;
	float netPay;
	int hours;
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
	return 0;
}


cout << "We hope you enjoyed this program" << endl;
void printDescription() 
{
	cout << "************************************************" << endl << endl;
	cout << "This program takes two numbers (payRate & hours)" << endl;
	cout << "and multiplies them to get gross pay " << endl;
	cout << "it then calculates net pay by subtracting 15%" << endl;
	cout << "************************************************" << endl << endl;
}

void computePaycheck(float rate, int time, float& gross, float& net)
{
	gross = rate * time;
	cout << "grosspay is" << gross << endl;*/
	



























//QUES2
/*#include <iostream>
#include <string>
using namespace std;
void writeProverb(int);
int main()
{
	int wordCode;
	cout << "Given the phrase:" << endl;
	cout << "Now is the time for all good men to come to the aid of their ___"
		<< endl;
	cout << "Input a 1 if you want the sentence to be finished with party"
		<< endl;
	cout << "Input any other number for the word country" << endl;
	cout << "Please input your choice now" << endl;
	cin >> wordCode;
	cout << endl;
	writeProverb(wordCode);
	return 0;
}
void writeProverb(int number)
{if (number == 1)
	{cout << "Now is the time for all good men to come to the aid of their party" << endl;}
	else if(number==2)
		cout << "Now is the time for all good men to come to the aid of their country"<<endl;
	else
		cout<< "I'm sorry but that is an incorrect choice; Please input a 1 or 2" << endl;		
}*/

//QUES1
//SARA HAMEED
/*#include <iostream>
using namespace std;
void writeProverb();
int main()
{
	writeProverb();
	return 0;
}

void writeProverb()
{
cout << "Now is the time for all good men to come to the aid of their party" << endl;
}*/

//**************************************************LAB 5*********************************************************
	
//SARA HAMEED
/*#include <iostream>
using namespace std;
int main()
{
	int numStudents;
	int noofdays;
	float numHours, total, average;
	int student, day = 0;
	cout << "This program will find the average number of hours a day"
		<< " that a student spent programming over a long weekend\n\n";
	cout << "How many students are there ?" << endl << endl;
	cin >> numStudents;
	cout << "How many days you want to work" << endl;
	cin >> noofdays;
	for (student = 1; student <= numStudents; student++)
	{   total = 0;
		for (day = 1; day <= noofdays; day++)
		{
			cout << "Please enter the number of hours worked by student "
				<< student << " on day " << day << "." << endl;
			cin >> numHours;
			total = total + numHours;
		}
		average = total / noofdays;
		cout << endl;
		cout << "The average number of hours per day spent programming by "
			<< "student " << student << " is " << average
			<< endl << endl << endl;
	}
	return 0;
}*/
//ques 3
/*#include <iostream>
using namespace std;
int main()
{
	int total = 0; 
	int mean=0; 
	int m;
	int n;
	int counter=0;
	cout << "Please enter a positive integer n" << endl;
	cin >> n;
	cout << "Please enter a positive integer m" << endl;
	cin >> m;
	for (int i = n; i <= m; i++)
	{
		counter = counter++;
		total = total + i;
	}
	mean = static_cast<float>(total) / counter;
	cout << "The mean average is " << mean << endl;
return 0;
	
//Sara Hameed	
#include <iostream>
using namespace std;
int main()
{
	int value; 
	int total = 0; 
	int number; 
	float mean; 
	cout << "Please enter a positive integer" << endl;
	cin >> value;
	if (value > 0)
	{
		for (number = 1; number <= value; number++)
		{
			total = total + number;
		} 
		
			mean = static_cast<float>(total) / value; 
			cout << "The mean average of the first " << value
				<< " positive integers is " << mean << endl;
	}
	else
		cout << "Invalid input - integer must be positive" << endl;
	return 0;
}






















/*#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int number;
	float cost;
	char beverage;
	bool validBeverage;
	cout << fixed << showpoint << setprecision(2);
	do
	{   cout << endl << endl;
		cout << "Hot Beverage Menu" << endl << endl;
		cout << "A: Coffee $1.00" << endl;
		cout << "B: Tea $ .75" << endl;
		cout << "C: Hot Chocolate $1.25" << endl;
		cout << "D: Cappuccino $2.50" << endl << endl << endl;
		cout << "Enter the beverage A,B,C, or D you desire" << endl;
		cout << "Enter E to exit the program" << endl << endl;
		cin >> beverage;
		switch (beverage)
		{
		case 'a':
		case 'A':
		case 'b':
		case 'B':
		case 'c':
		case 'C':
		case 'd':
		case 'D': validBeverage = true;
			break;
		default: validBeverage = false;
		}
		if (validBeverage == true)
		{
			cout << "How many cups would you like?" << endl;
			cin >> number;
		}
		switch (beverage)
		{
		case 'a':
		case 'A': cost = number * 1.0;
			cout << "The total cost is $ " << cost << endl;
			break;
		case 'b':
		case 'B':cost = number * 1.25;
			cout << "The total cost is $ " << cost << endl;
			break;
		case 'c':
		case 'C':cost = number * 0.75;
			cout << "The total cost is $ " << cost << endl;
			break;
		case 'd':
		case'D':cost = number * 2.50;
			cout << "The total cost is $ " << cost << endl;
			break;
		case 'e':
		case 'E': cout << " Please come again" << endl;

			break;

		default:cout << "Make a valid selection" << endl;
			cout << " Try again please" << endl;
		}
	} while (beverage != 'E' || 'e');
		return 0;
}*/
	

//ques1 lab 5
/*#include <iostream>
using namespace std;
int main()
{
	int month = 1;
	float total = 0, rain;
	cout << "Enter the total rainfall for month " << month << endl;
	cout << "Enter -1 when you are finished" << endl;
	cin >> rain;

	while (rain != -1){
		total = total + rain;
		month++;
		cout << "Enter the total rainfall in inches for month "
			<< month << endl;
		cout << "Enter -1 when you are finished" << endl;
		cin >> rain;
	}
	if (month == 1)
		cout << "No data has been entered" << endl;
	else
		cout << "The total rainfall for the " << month - 1

		<< " months is " << total << " inches." << endl;
	return 0;
}*/

























/*QUES 3 LAB 4
#include <iostream>
using namespace std;
int main()
{
	char year;
	float gpa;
	cout << "What year student are you ?" << endl;
	cin >> year;
	cout << "Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)"
		<< endl << endl;
	cout << "Now enter your GPA" << endl;
	cin >> gpa;
	if (gpa >= 2.0 || year ==4)
		cout << "It is time to graduate soon" << endl;
	else if (year != '4' && gpa < 2.0)
		cout << "You need more schooling" << endl;
	return 0;
}*/






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
	cout << "The area of circle is:" << area << endl;
	#include<iostream>
using namespace std;
int main()
{
	const  double PI = 3.14;
	const  double RADIUS = 5.4;
	float area;
	float circumference;
	circumference = 2 * PI * RADIUS;
	area = PI * (RADIUS * RADIUS);
	cout << "The circumference of the circle is:" << circumference << endl;
	cout << "The area of circle is:" << area << endl;
	return 0;
}*/



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

	


















	//CONTROL STRUCTURES
	//SEQUENCE,SELECTION AND LOOP STRUCTURES
	//************************************************SELECTION STRUCTURE********************************************************************

	//IF ELSE STATEMENT AND IF ELSE LADDER AND SWITCH CASE
	//IF ELSE LADDER
	//IF AND ELSE INCLUDED MEANS SIMPLE IF ELSE STATEMENT IS SEQUENCE STUCTURE
	/*int age;
	cout << "enter age" << endl;
	cin >> age;
	if (age < 18)
		cout << "you can come to my house" << endl;
	else if (age == 9)
		cout << "you cannot come to my house" << endl;
	else
		cout << "party cancel" << endl;
	//******************************************************SWITCH CASE*********************************************************************************
	switch (age)
	{
	case 2:
		cout << "you are 2 years old" << endl;
		break;
	case 9:
		cout << "you are 9 years old" << endl;

	default:
		cout << "no more cases";
		cout << endl;
		break;*/
	










//***************************MANIPULATORS********************************************
	//manipulators wo hotey hy jo formatting mein help krein endl bhi manipulator hy
	//setw(n) mtlb n mein jo bhi no honga no utni no of bytes pey display hoga
	//setw use krney k liye include ,iomanip. krna parta hy
	//int manu = 4;
	//cout << "value of manu is" << setw(3)<<manu << endl;








	//TYPE CASTING 
	//CAN CONVERT FLOAT TO INT AND INT TO FLOAT
	//float z = 8.5;
		//cout <<(int)z << endl;


	

	//*************************GLOBAL AND LOCAL VARIABLES*****************************************
//AGR KISI VARIABLE KO CONST a=9 KR KR K CREATE KREY TOU PROG MEIN USSKI VALUE CHANGE NHI HOGI
// 		   AUR WO CONSTANT BAN JAYEGA
//BY DEFAULT DECIMAL KI VALUE DOUBLE HOTI HAY AUR HMEIN USS VALUE KO KISI FUNCTION MEIN CALL KRNA HAY TOU HM AESAY LIKHEINGEY
	//k=3.12f yahan f represent kr raha hay float no ko similarly L represent krta hy long double ko


//#include <iostream>
//using namespace std;
//int K = 2;
//int  main()


	//SCOPE RESOLUTION OOPERATOR AGR KOI VARIABLE GLOBAL SCOPE MEIN DEFINED HAY TOU USSKI VALUE COUT SEY KESAY PRINT KRWAEINGEY
	//:: YE OPERATOR KI HELP SEY

	 //cout << "value of k is" << K << endl;

	//REFERENCE VARIABLES
	//float x = 7.5;
	//float&y = x;
		//cout <<" value of y is "<< x << endl;



/******************************************OPERATORS**********************************************************
CODE FOR ARITHMETTIC OPERATORS
* USING +,-,*,/,++a,a++,--b,b--*/




	/*int num1, num2;
	cout << "enter num1" << endl;
	cin >> num1;
	cout << "enter num2" << endl;
	cin >> num2;
	cout << "output" << num1 + num2 << endl;


	//++a KA MTLB PEHLY 1 ADD HOGA AUR a++ MTLB PEHLY VALUE PRINT HOGI BAAD MEIN ADD HOGA
	//#include <iostream>
	//using namespace std;
	//int main()

	int a = 4, b = 2;
	cout << "output is" << ++a << endl;

	//a-- MTLB VALUE PEHLY PRINT HUI PHIR -1 AAYA

	//#include <iostream>
	//using namespace std;
	//int main()

	int c = 4, d = 2;
	cout << "output is" << c-- << endl;

//ASSIGNMENT OPERATORS IS 
 
 //IN ALL THE OPERATORS ANS 0 MEANS FALSE AND 1 MEANS TRUE
//FOR EG A=B 

//COMPARISON OPERATORS ARE ==,>,<,<=,>=,!=
// 	   BRACKET LAGANA ZAROORI HAY
//same as python if anyone condition is T means T
	int e = 7, f = 1;
	cout << (e <= f) << endl;

//LOGICAL OPERATORS

//OR AND USE KRNA 
//AND MEIN EK BHI F TOU F (&&)
	int g = 3, h = 5;
	cout << ((g < h) and (g == h)) << endl;
//OR MEIN EK BHI T TOU T (||)
	cout << ((g < h) || (g == h)) << endl;
return 0;
}*/
