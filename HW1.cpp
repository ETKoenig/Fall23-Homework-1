#include <string>
#include <iostream>
#include <fstream>
using namespace std;
int main()
{

//1)write a program that prints "Hello Toop!"
cout << "Hello Toop!";

//2) declare variables
string name;
int age;
double decimalAge;
double months;

//3) request name and store in name
cout << "Please enter your full name (first and last): "; 
getline (cin, name);
cout << " Thank you, Please enter your age in whole years: "; 
cin >> age;
cout << "Thank you, Please enter the number of months since your birthday: ";
cin >> months;
decimalAge = double (age) + (months/12);

//4) output response

cout << "Your name is " << name <<", and you are " << decimalAge << " years old!";

ofstream outfile;
outfile.open("TOOPHW1.txt", std::ofstream::app);
outfile << name << " : " << decimalAge <<endl;
outfile.close();

 
