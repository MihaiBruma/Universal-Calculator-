#include <iostream>
#include <stdint-gcc.h>
#include <cstdlib>
#include <cstdbool>
#include <chrono>
#include <thread>
#include <windows.h>

int32_t AdditionFunction(int16_t,int16_t);
int32_t SubstractionFunction(int16_t,int16_t);
int32_t MultiplicationFunction(int16_t,int16_t);
float DivisionFunction(int16_t,int16_t);
int16_t PowerFunction(int16_t,int16_t);
double SquareRootFunction(int32_t);
int16_t ABSFunction(int8_t);
void ClearScreen();

using namespace std;

static int password;
static int k,choice;
static int value,value1,value2;

int main(void){
	
k=3;	
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, k);
system("color F1");	
static CONSOLE_FONT_INFOEX  fontgfx;
fontgfx.cbSize = sizeof(CONSOLE_FONT_INFOEX);
HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
GetCurrentConsoleFontEx(hOut, 0, &fontgfx);
fontgfx.FontWeight = 700;
fontgfx.dwFontSize.X = 30;
fontgfx.dwFontSize.Y = 30;
SetCurrentConsoleFontEx(hOut, NULL, &fontgfx);

cout<<"Hello User!\n"<<endl;	
cout<<"Here you have a Universal Calculator!\n"<<endl;
password:
cout<<"Enter please 5-digit password to continue!"<<endl;
cin>>password;
cout<<"\nPassword introduced is : "<<password<<endl;
if (password == 12345){
	ClearScreen();
	cout<<"Welcome!"<<endl;
	cout<<"Here you have Calculator Menu : \n"<<endl;
	menu:
		cout<<"1. Addition (x+y)."<<endl;
		cout<<"2. Substraction (x-y)."<<endl;
		cout<<"3. Multiplication (x*y)."<<endl;
		cout<<"4. Division (x/y)."<<endl;
		cout<<"5. Power (x^y)."<<endl;
		cout<<"6. Square Root ((x)^(1/n))."<<endl;
		cout<<"7. ABS Value |x|."<<endl;
		cout<<"8. Exit."<<endl;
		cout<<"\nEnter a choice :"<<endl;
		cin>>choice;
		cout<<"You entered : "<<choice<<endl;
	switch(choice){
			case 1:{
			    int value1,value2;
				ClearScreen();
				cout<<"You have chosen Addition (x+y)."<<endl;
				cout<<"Enter value no.1"<<endl;
				cin>>value1;
				cout<<"Enter value no.2"<<endl;
				cin>>value2;
				int Result1 = AdditionFunction(value1,value2);
				cout<<"\nResult is : x+y = "<<Result1<<endl;
				this_thread::sleep_for(chrono::milliseconds(3000) );
				ClearScreen();
				goto menu;
				}break;
				
			case 2:{
				ClearScreen();
				cout<<"You have chosen Substraction (x-y)."<<endl;
				cout<<"Enter value no.1"<<endl;
				cin>>value1;
				cout<<"Enter value no.2"<<endl;
				cin>>value2;
				int Result2 = SubstractionFunction(value1,value2);
				cout<<"\nResult is : x-y = "<<Result2<<endl;
				this_thread::sleep_for(chrono::milliseconds(3000) );
				ClearScreen();
				goto menu;
			}break;
			
			case 3:{
				ClearScreen();
				cout<<"You have chosen Multiplication (x*y)."<<endl;
				cout<<"Enter value no.1"<<endl;
				cin>>value1;
				cout<<"Enter value no.2"<<endl;
				cin>>value2;
				int Result3 = MultiplicationFunction(value1,value2);
				cout<<"\nResult is : x*y = "<<Result3<<endl;
				this_thread::sleep_for(chrono::milliseconds(3000) );
				ClearScreen();
				goto menu;
			}break;
			
			case 4:{
				ClearScreen();
				cout<<"You have chosen Division (x/y)."<<endl;
				cout<<"Enter value no.1"<<endl;
				cin>>value1;
				cout<<"Enter value no.2"<<endl;
				cin>>value2;
				int Result4 = DivisionFunction(value1,value2);
				cout<<"\nResult is : x/y = "<<Result4<<endl;
				this_thread::sleep_for(chrono::milliseconds(3000) );
				ClearScreen();
				goto menu;
			}break;
			
			case 5:{
				ClearScreen();
				cout<<"You have chosen Power (x^y)."<<endl;
				cout<<"Enter value no.1"<<endl;
				cin>>value1;
				cout<<"Enter value no.2"<<endl;
				cin>>value2;
				int Result5 = PowerFunction(value1,value2);
				cout<<"\nResult is : x/y = "<<Result5<<endl;
				this_thread::sleep_for(chrono::milliseconds(3000) );
				ClearScreen();
				goto menu;
			}break;
			
			case 6:{
				ClearScreen();
				cout<<"You have chosen Square Root ((x)^(1/n))."<<endl;
				cout<<"Enter value for Square Root."<<endl;
				cin>>value;
				int Result6 = SquareRootFunction(value);
				cout<<"\nResult is : ((x)^(1/n)) = "<<Result6<<endl;
				this_thread::sleep_for(chrono::milliseconds(3000) );
				ClearScreen();
				goto menu;
			}break;
			
			case 7:{
				ClearScreen();
				cout<<"You have chosen ABS Value |x|."<<endl;
				cout<<"Enter value for ABS Value |x|."<<endl;
				cin>>value;
				int Result7 = ABSFunction(value);
				cout<<"\nResult is : |x| = "<<Result7<<endl;
				this_thread::sleep_for(chrono::milliseconds(3000) );
				ClearScreen();
				goto menu;
			}break;
			
			case 8:{
				ClearScreen();
				cout<<"You have selected Exit."<<endl;
				this_thread::sleep_for(chrono::milliseconds(3000) );
				ClearScreen();
				cout<<"Have a nice day!"<<endl;
				exit(1);
			}break;
			
			default :{
				ClearScreen();
				cout<<"You have chosen wrong option !"<<endl;
				cout<<"Note!<< Choose option from 1 to 8 !"<<endl;
				this_thread::sleep_for(chrono::milliseconds(3000) );
				ClearScreen();
				goto menu;
				break;
			}
		}
}else if(password != 12345){
	
	cout<<"Wrong password ! Try again."<<endl;
	this_thread::sleep_for(chrono::milliseconds(3000) );	
	ClearScreen();
	goto password;
	
}else {
	
	cout<<"Fatal Error..."<<endl;
	exit(1);
	
}
	
return 0;
}
int32_t AdditionFunction(int16_t value1,int16_t value2){
	
	static int16_t Sum;
	Sum = value1 + value2;
	
return Sum;	
}
int32_t SubstractionFunction(int16_t value1,int16_t value2){
	
	static int16_t Substraction;
	Substraction = value1 - value2;
	
return Substraction;	
}
int32_t MultiplicationFunction(int16_t value1,int16_t value2){
	
	static int16_t Multiplication;
	Multiplication = value1 * value2;
	
return Multiplication;	
}
float DivisionFunction(int16_t value1,int16_t value2){
	
	float Division;
	Division = value1 / value2;

return Division;	
}
int16_t PowerFunction(int16_t value,int16_t exponent){
	
    int32_t Result = 1;
	
	for(exponent;exponent>0;exponent--){
		
		Result = Result*value;
	}
return Result;
}
double SquareRootFunction(int32_t value0){
	
	double SquareRoot,val;
	
	SquareRoot = value0 / 2;
	val = 0;
	
	while(SquareRoot != val){
		
		val = SquareRoot;
		SquareRoot = (value0 / val + val)/2;
	}	
}
int16_t ABSFunction(int8_t value){
	
	static int16_t ABSResult;
	
	if(value<0){
		
		ABSResult = value*(-1);
		
	}else if(value>0){
		
		ABSResult = value;
		
	}else{
		
		cout<<"Something went wrong"<<endl;
		
	}
return ABSResult;	
}
void ClearScreen(){
	
	system("CLS");

return;
}
