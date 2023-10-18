#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Two name"<<endl;
	cout<<endl;
	cout<<"Enter 1  choose Guardario:"<<endl;
	cout<<"Enter 2  choose Matagong:"<<endl;
	cout<<endl;
	cin>>a;
	cout<<endl;
	
	if (a == 1){
		cout<<"Scenario 1: Calculate how much the buyer should pay if she/he buy a bag, wherein the bag cost 300."<<endl;
		cout<<endl;
		
		float b;
		cout<<"Enter a number if how much of bag you want to buy!"<<endl;
		cin>>b;
		
		float c=b*300;
		
		cout<<endl;
		cout<<"The total price of the bag you bought is"<<c<< "pesos" <<endl;
		
	}
	else if (a == 2){
		cout<<"Scenario 2: You were going to ask someones personal information, it's like a kind of interview that you will conduct to know someones info. "<<endl;
		
		string n, m, y, o, g;
		int z, x;
		
		cout<<"Enter your name:"<<endl;
		cin>>n;
		getline(cin,n);
		
		cout<<"Enter your age:"<<endl;
		cin>>z;
		
		cout<<"Enter your b-date:"<<endl;
		cout<<"mm/dd/yy"<<endl;
		cin>>x;
		cout<<endl;
		
		cout<<"Enter your address:"<<endl;
		cin>>m;
		getline(cin,m);
		cout<<endl;
		
		cout<<"Enter your school:"<<endl;
		cin>>y;
		getline(cin,y);
		cout<<endl;
		
		cout<<"Enter your course:"<<endl;
		cin>>o;
		cout<<endl;
		
		cout<<" Thank you:"<<endl;
		cin>>g;
		getline(cin,g);
		cout<<endl;	
		
	}
	return 0;
}