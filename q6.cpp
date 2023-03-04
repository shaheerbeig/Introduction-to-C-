//Create a C++ Program to define class name as Exam. Class should contain only
//prototype of the following functions
//
//a) Marks
//b) Assignment_Quizzes
//c) Tasks
//
//Implement them using scope resolution :: operator
#include<iostream>
#include<string>

using namespace std;

class exam{
		float mid1_marks, mid2_marks, final_marks;
		float lab_task1, lab_task2, lab_task3;
		float assignment1_marks, assignment2_marks, quiz1_marks, quiz2_marks;	
	
	public:
		
		void setmarks(float m1, float m2, float f);
		void setassignment_quiz(float a1, float a2, float q1, float q2);
		void setlabtask(float l1, float l2, float l3);
		
		void displayresult(){
			float sum=0,percentage;
			cout<<endl;
			cout<<endl;
			cout<<"******STUDENT TRANSCRIPT******"<<endl;
			cout<<endl;
			cout<<"MID 1 MARKS::"<<mid1_marks<<endl;
			cout<<"MID 2 MARKS::"<<mid2_marks<<endl;
			cout<<"FINAL MARKS::"<<final_marks<<endl;
			cout<<"QUIZ 1 MARKS::"<<quiz1_marks<<endl;
			cout<<"QUIZ 2 MARKS::"<<quiz2_marks<<endl;
			cout<<"ASSIGNMENT 1 MARKS::"<<assignment1_marks<<endl;
			cout<<"ASSIGNMENT 2 MARKS::"<<assignment2_marks<<endl;
			cout<<"LAB TASK 1::"<<lab_task1<<endl;
			cout<<"LAB TASK 2::"<<lab_task2<<endl;
			cout<<"LAB TASK 3::"<<lab_task3<<endl;
			sum=sum+mid1_marks+mid2_marks+final_marks+quiz1_marks+quiz2_marks+assignment1_marks+assignment2_marks+lab_task1+lab_task2+lab_task3;
			percentage=(sum/100.0)*100;
			cout<<"PERCENTAGE OF STUDENT IS::"<<percentage<<endl;
		}
};

void exam::setmarks(float m1, float m2, float f){
	mid1_marks=m1;
	mid2_marks=m2;
	final_marks=f;
}
void exam::setassignment_quiz(float a1, float a2, float q1, float q2){
	assignment1_marks=a1;
	assignment2_marks=a2;
	quiz1_marks=q1;
	quiz2_marks=q2;
}
void exam::setlabtask(float l1, float l2, float l3){
	lab_task1=l1;
	lab_task2=l2;
	lab_task3=l3;
}

int main(){
	float q1,q2,a1,a2,l1,l2,l3,m1,m2,f;
	exam details;
	cout<<"***STUDENT REPORT CARD***"<<endl;
	cout<<"ENTER STUDENT QUIZ ONE MARKS OUT OF 5::";
	cin>>q1;
	cout<<"ENTER STUDENT QUIZ TWO MARKS OUT OF 5::";
	cin>>q2;
	cout<<"ENTER STUDENT ASSIGNMENT ONE MARKS OUT OF 5::";
	cin>>a1;
	cout<<"ENTER STUDENT ASSIGNMENT TWO MARKS OUT OF 5::";
	cin>>a2;
	details.setassignment_quiz(a1,a2,q1,q2);
	cout<<"ENTER MID ONE MARKS OUT 15::";
	cin>>m1;
	cout<<"ENTER MID TWO MARKS OUT 15::";
	cin>>m2;
	cout<<"ENTER FINAL MARKS OUT 40::";
	cin>>f;
	details.setmarks(m1,m2,f);
	cout<<"ENTER LAB TASK ONE MARKS OUT OF 3::";
	cin>>l1;
	cout<<"ENTER LAB TASK TWO MARKS OUT OF 3::";
	cin>>l2;
	cout<<"ENTER LAB TASK THREE MARKS OUT OF 3::";
	cin>>l3;
	details.setlabtask(l1,l2,l3);
	details.displayresult();
	
	
}