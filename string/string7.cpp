#include<iostream>
#include<string>
using namespace std;

main(){
	string firstName = "Ada";
	string lastName = "Lovelace";
	string fullName = firstName + " " + lastName;
	cout<<"This name has "<<fullName.length() << " bytes."<<endl;
}