//Write a C++ Program to define class named as Product should have 3 private data
//members. Cost, Stock and Status. Display the category of that class using
//Display_product_category?

#include<iostream>
#include<string>

using namespace std;

class product{
		int cost,stock;
		string status;
	public:
		int getcost(){
			return cost;
		}
		int getstock(){
			return stock;
		}
		string getstatus(){
			return status;
		}
		void setcost(int value){
			cost=value;
		}
		void setstock(int amount){
			stock=amount;
		}
		void setstatus(){
			if(stock>=1){
				cout<<"THE REQUESTED PRODUCT IS AVAILABLE IN THE STOCK::"<<endl;
			}
			else if(stock<=0){
				cout<<"THE REQUESTED PRODUCT IS OUT OF STOCK AND NOT AVAILABLE"<<endl;
			}
		}
		void display_product_category(){
			cout<<endl;
			cout<<"***PRODUCT DETAILS***"<<endl;;
			cout<<"COST::"<<cost<<endl;
			cout<<"STOCK::"<<stock<<endl;
		}
	};
int main(){
	product details;
	int amount,value;
	cout<<"ENTER THE COST OF THE PRODUCT::";
	cin>>value;
	details.setcost(value);
	cout<<"ENTER THE STOCK QUNATITY OF THE PRODUCT::";
	cin>>amount;
	details.setstock(amount);
	details.display_product_category();
	details.setstatus();
}