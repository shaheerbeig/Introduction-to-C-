//Q1: Define a class to represent customer using the following data members and functions.
// NIC,Customer_ID,Customer_Contact(Private members).
// Name,Lastname,Address,Status(Public members).
// Write setter and getter property to set all private attributes.
// Create function named Customer_details to showcase all the information of your
//customer.
#include<iostream>
#include<string>
using namespace std;

class customer {
private:
string customer_NIC, customer_number, customer_id;
public:
string name, lastname, address;
int status;

public:
string getNIC() {
return customer_NIC;
}

string getID() {
return customer_id;
}

string getnumber() {
return customer_number;
}

void setID(string ID) {
 customer_id=ID;
}

void setNIC(string NIC) {
 customer_NIC=NIC;
}

void setcontact(string contact) {
customer_number=contact;
}

void display() {
cout<<"***CUSTOMER DETAILS***"<<endl;
cout << "NAME::" << name << endl;
cout << "LAST NAME::" << lastname << endl;
cout << "ADDRESS::" << address << endl;
cout << "CUSTOMER ID::" << getID() << endl;
cout << "CUSTOMER NUMBER::" << getnumber() << endl;
cout << "CUSTOMER NIC::" << getNIC() << endl;
}

};

int main() {
customer details;
string ID,NIC,contact;
cout << "ENTER NAME::" << endl;
cin >> details.name;
cout << "ENTER LAST NAME::" << endl;
cin >> details.lastname;
cout << "ENTER ADDRESS::" << endl;
cin.ignore();
getline(cin, details.address);
cout << "ENTER USER ID::" << endl;
cin >> ID;
details.setID(ID);
cout << "ENTER  NIC::" << endl;
cin>>NIC;
details.setNIC(NIC);
cout << "ENTER CONTACT NUMBER::" << endl;
cin>>contact;
details.setcontact(contact);
details.display();
}
