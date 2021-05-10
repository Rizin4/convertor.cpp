#include <iostream> 
using namespace std;


void calculator(); 
void kmTom();
void USDtoINR();
void KgTog();
void msTokmh();
void degTorad();

int main(){
	string name;
	int option; 
	
	
	cout<<"Hi, Welcome to universal convertor \n";
	cout<<"Enter your name : ";
	cin>>name;
	cout<<"\nHello "<<name<<"\n"; 
	cout<<"choose your option : \n\n";
	
	cout<< "1: calculator \n"; 
	cout<< "2: KM to M convertor\n";
	cout<< "3: USD to INR \n";
	cout<< "4: Kg to g convertor\n";
	cout<< "5: Speed converter\n";
	cout<< "6: Angle converter\n";
	
	cin>>option;
	
	switch(option){
		case 1:
			calculator();
			break;
		case 2:
			kmTom();
			break;
		case 3:
			USDtoINR();
			break;
		case 4:
			KgTog();
			break;
		case 5:
			msTokmh();
			break;
		case 6:
			degTorad();
			break;
		default:
			cout<<"Wrong option";
			break;
	}
}

void calculator(){ 
	int select;
	int num1, num2, answer;
	
	cout<<"choose your option \n";
	cout<< "1: Addition \n";
	cout<< "2: subtraction\n";
	cout<< "3: Multiplication \n";
	cout<< "4: Division \n";
	cin>>select;
	switch(select){
		case 1:
		cout<<" Addition\n";
			cout<<"Enter First number: \n";
			cin>>num1;
			cout<<"Enter second number: \n";
			cin>>num2;
			answer = num1 + num2;
			cout<<"Answer : "<<answer<<"\n";
			break;
		case 2:
		cout<<" Subtraction\n";
			cout<<"Enter First number: \n";
			cin>>num1;
			cout<<"Enter second number: \n";
			cin>>num2;
			answer = num1 - num2;
			cout<<"Answer : "<<answer<<"\n";
			break;
		case 3:
		cout<<" Multiplication\n";
			cout<<"Enter First number: \n";
			cin>>num1;
			cout<<"Enter second number: \n";
			cin>>num2;
			answer = num1 * num2;
			cout<<"Answer : "<<answer<<"\n";
			break;
		case 4:
		cout<<" Division \n";
			cout<<"Enter First number: \n";
			cin>>num1;
			cout<<"Enter second number: \n";
			cin>>num2;
			answer = num1 / num2;
			cout<<"Answer : "<<answer<<"\n";
			break;
		default:
			break;
	}
}

void kmTom(){ 
	float km;
	float meter;
	cout<<"\n Enter value in Kilometre: ";
	cin>>km;
	meter = km * 100;
	cout<<km<<" KM is equal to "<<meter<< " Meter \n\n";
}
void USDtoINR(){ 
	float USD;
	float INR;
	cout<<"\n Enter value in USD: ";
	cin>>USD;
	INR = USD * 73.317392;
	cout<<USD<<" USD is equal to "<<INR<< " INR \n\n";
}
void KgTog(){ 
	float Kg;
	float g;
	cout<<"\n Enter value in Kilogram: ";
	cin>>Kg;
	g = Kg * 1000;
	cout<<Kg<<" Kg is equal to "<<g<< " gram \n\n";
}
void msTokmh(){ 
	float ms;
	float kmh;
	cout<<"\n Enter value in m/s: ";
	cin>>ms;
	kmh = ms * 3.6;
	cout<<ms<<" m/s is equal to "<<kmh<< " km/h \n\n";
}
void degTorad(){ 
	float deg;
	float rad;
	cout<<"\n Enter value in Degree: ";
	cin>>deg;
	rad = deg * 0.0174532925;
	cout<<deg<<" Degree is equal to "<<rad<< " Radian \n\n";
}
