//write a program for a bank that ask user for his first name , last name, signature, last and current account number, age , address and contact number.. However the the current and last account number cant be same.
//user can anytime see their details
#include<iostream>
#include<string>

using namespace std;

class customer{
	string address,signature;
	long long int last_account_num;
	public:
		string fname,lname,contact;
		int age;
		
		string getaddress(){
			return address;
		}
		string getsignature(){
			return signature;
		}
		long long int getlastaccount(){
			return last_account_num;
		}
		void setaddress(string residence){
			address=residence;
		}
		void setsignature(string sign){
			signature=sign;
		}
		void setlastaccountnum(long long int number){
			last_account_num=number;
		}
		void displaycustomer(){
			cout<<endl;
			cout<<"***CUSTOMER DETAILS***"<<endl;
			cout<<"FIRST NAME::"<<fname<<endl;
			cout<<"LAST NAME::"<<lname<<endl;
			cout<<"CONTACT::"<<contact<<endl;
			cout<<"AGE::"<<age<<endl;
			cout<<"ADDRESS::"<<getaddress()<<endl;
			cout<<"SIGNATURE::"<<getsignature()<<endl;
			cout<<"LAST ACCOUNT NUMBER::"<<getlastaccount()<<endl;	
		}
};

class account{
	bool status;
	long long int account_number;
	
	public:
	string account_title,account_type;
	int range;
	
	bool getstatus(){
		return status;
	}	
	void setstatus(){
		int x;
		cout<<"ENTER YOUR STATUS 1-ACTIVE  2-INACTIVE"<<endl;
		cin>>x;
		if(x==1){
			status=1;
		}
		else if(x==2){
			status=0;
		}
	}
	long long int getnumber(){
		return account_number;
	}
	void setnumber(long long int number){
		account_number=number;
	}
	void displayaccount(){
		cout<<endl;
		cout<<"***ACCOUNT DETAILS***"<<endl;
		if(status==1){
			cout<<" STATUS ACTIVE"<<endl;
		}
		else if(status==0){
			cout<<"STATUS INACTIVE"<<endl;
		}
		cout<<"ACCOUNT NUMBER::"<<getnumber()<<endl;
		cout<<"RANGE::"<<range<<endl;
		cout<<"ACCOUNT TITLE::"<<account_title<<endl;
		cout<<"ACCOUNT TYPE::"<<account_type<<endl;
	}
};
class transaction{
	public:
	string date,amount;
	bool type;
	int fee;
	
	void transactiontype(){
		int y;
		cout<<"ENTER THE TYPE OF TRANSACTION 1-SAVINGS 2-CURRENT::";
		cin>>y;
		if(y==1){
			type=1;
		}
		else if(y==2){
			type=0;
		}
	}
	void displaytransaction(){
		cout<<endl;
		cout<<"***TRANSACTION DETAILS***"<<endl;;
		cout<<"DATE::"<<date<<endl;
		cout<<"AMOUNT::"<<amount<<endl;
		cout<<"FEES::"<<fee<<endl;
		if(type==1){
			cout<<"SAVINGS ACCOUNT"<<endl;
		}
		else if(type==0){
			cout<<"CURRENT ACCOUNT"<<endl;
		}
	}	
};

int main(){
	string sign,residence;
	long long int value,number,newvalue;
	bool value2; 
	customer details;
	account details2;
	transaction details3;
	cout<<"ENTER USER FIRST NAME::";
	cin>>details.fname;
	cout<<"ENTER USER LAST NAME::";
	cin>>details.lname;
	cout<<"ENTER USER CONTACT::";
	cin.ignore();
	getline(cin,details.contact);
	cout<<"ENTER USER AGE::";
	do {
	cin >> details.age;
		if (details.age < 18) {
		cout << "AGE CANNOT BE LESS THEN 18" << endl;
	return 0;
	}
	} while (details.age < 18);
	cout<<"ENTER USER SIGNATURE::";
	cin.ignore();
	getline(cin,sign);
	details.setsignature(sign);
	cout<<"ENTER USER AADRESS::";
	cin.ignore();
	getline(cin,residence);
	details.setaddress(residence);
	cout<<"ENTER ACCOUNT TITLE::";
	cin.ignore();
	getline(cin,details2.account_title);
	cout<<"ENTER ACCOUNT TYPE::";
	cin.ignore();
	getline(cin,details2.account_type);
	cout<<"ENTER LAST ACCOUNT NUMBER::";
	cin>>value;
	details.setlastaccountnum(value);
	cout<<"ENTER ACCOUNT NUMBER::";
	cin>>newvalue;
	details2.setnumber(newvalue);
	if(details.getlastaccount()==details2.getnumber()){
		cout<<"THE PREVIOUS AND CURRENT ACCOUNT NUMBER CANNOT BE SAME"<<endl;
		return 0;
	}
	details2.range=450000;
	details2.setstatus();
	cin.ignore();
	cout<<"ENTER DATE::";
	cin>>details3.date;
	cout<<"ENTER AMOUNT::";
	cin.ignore();
	getline(cin,details3.amount);
	details3.transactiontype();
	details3.fee=100;
	details.displaycustomer();
	details2.displayaccount();
	details3.displaytransaction();
}