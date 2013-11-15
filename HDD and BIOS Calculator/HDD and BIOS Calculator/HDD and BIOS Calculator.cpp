#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
	int i, analyzer;

	
	cout<<"             HDD AND BIOS Password Calculator for ACER and Sony VAIO"<<endl;
	cout<<"                                  Version 1.0"<<endl;
	cout<<endl;
	cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
	cout<<endl;
	cout<<" # To calculate the key-code of ACER license numbers press 1"<<endl;
	cout<<" # To calculate the key-code of Sony VAIO license number press 2"<<endl;
	cout<<"User_type: ";

	cin>>analyzer;
	string key;
	if(analyzer == 1)
	{
		cout<<endl;
		cout<<"Input your license number for ACER laptop which should be 8 digits long."<<endl;
		cout<<"Reminder: The digits of license number should be only numbers!"<<endl;
		cout<<endl;
		cout<<"License_number_input: ";

		cin>>key;

		for(int i=0; i<key.length(); i++)
		{
			if(key[i]!='0' && key[i]!='1' && key[i]!='2' && key[i]!='3' && key[i]!='4' && key[i]!='5' && key[i]!='6' && key[i]!='7' && key[i]!='8' && key[i]!='9')
			{
				cout<<"System Error 002: All digits of license number should be only numbers."<<endl;
				cout<<"#Please try again."<<endl;
				system ("PAUSE");
				return 0;
			}
		}

		if(key.length()!=8)
		{
			cout<<"  System Error 003: The lenght of the ACER laptops' license numbers should be"<<endl;
			cout<<"8 digit long"<<endl;
			cout<<"#Please try again"<<endl;
			system("PAUSE");
			return 0;
		}
		else
		{
			cout<<"- - - - - - - - - - - - - - - "<<endl;
			cout<<"Key_code_input: ";
			char a = key[0];
			char b = key[1];
			char c = key[2];
			char d = key[3];
			char e = key[4];
			char f = key[5];
			char g = key[6];
			char h = key [7]; 

			if(a=='0') cout<<1;
			if(a=='1') cout<<0;
			if(a=='2') cout<<3;
			if(a=='3') cout<<2;
			if(a=='4') cout<<5;
			if(a=='5') cout<<4;
			if(a=='6') cout<<7;
			if(a=='7') cout<<6;
			if(a=='8') cout<<3;
			if(a=='9') cout<<2;
		
			if(b=='0') cout<<5;
			if(b=='1') cout<<4;
			if(b=='2') cout<<3;
			if(b=='3') cout<<2;
			if(b=='4') cout<<1;
			if(b=='5') cout<<0;
			if(b=='6') cout<<9;
			if(b=='7') cout<<8;
			if(b=='8') cout<<7;
			if(b=='9') cout<<6;

			if(c=='0') cout<<9;
			if(c=='1') cout<<8;
			if(c=='2') cout<<1;
			if(c=='3') cout<<0;
			if(c=='4') cout<<5;
			if(c=='5') cout<<4;
			if(c=='6') cout<<7;
			if(c=='7') cout<<6;
			if(c=='8') cout<<7;
			if(c=='9') cout<<6;

			if(d=='0') cout<<6;
			if(d=='1') cout<<7;
			if(d=='2') cout<<8;
			if(d=='3') cout<<9;
			if(d=='4') cout<<2;
			if(d=='5') cout<<3;
			if(d=='6') cout<<4;
			if(d=='7') cout<<5;
			if(d=='8') cout<<8;
			if(d=='9') cout<<9;

			if(e=='0') cout<<8;
			if(e=='1') cout<<9;
			if(e=='2') cout<<0;
			if(e=='3') cout<<1;
			if(e=='4') cout<<2;
			if(e=='5') cout<<3;
			if(e=='6') cout<<4;
			if(e=='7') cout<<5;
			if(e=='8') cout<<0;
			if(e=='9') cout<<1;
		
			if(f=='0') cout<<0;
			if(f=='1') cout<<1;
			if(f=='2') cout<<8;
			if(f=='3') cout<<9;
			if(f=='4') cout<<4;
			if(f=='5') cout<<5;
			if(f=='6') cout<<2;
			if(f=='7') cout<<3;
			if(f=='8') cout<<2;
			if(f=='9') cout<<3;

			if(g=='0') cout<<2;
			if(g=='1') cout<<3;
			if(g=='2') cout<<0;
			if(g=='3') cout<<1;
			if(g=='4') cout<<8;
			if(g=='5') cout<<9;
			if(g=='6') cout<<6;
			if(g=='7') cout<<7;
			if(g=='8') cout<<0;
			if(g=='9') cout<<1;

			if(h=='0') cout<<6<<endl;
			if(h=='1') cout<<7<<endl;
			if(h=='2') cout<<4<<endl;
			if(h=='3') cout<<5<<endl;
			if(h=='4') cout<<0<<endl;
			if(h=='5') cout<<1<<endl;
			if(h=='6') cout<<8<<endl;
			if(h=='7') cout<<9<<endl;
			if(h=='8') cout<<8<<endl;
			if(h=='9') cout<<9<<endl;  
		}
	}
	else
		{
			if (analyzer == 2)
	{
			cout<<endl;
			cout<<"Input your license number for Sony VAIO laptop which should be 7 digits long."<<endl;
			cout<<"Reminder: The digits of license number should be only numbers!"<<endl;
			cout<<endl;
			cout<<"License_number_input: ";

			string code;
			cin>>code;

			for(int j=0; j<code.length(); j++)
			{
				if(code[j]!='0' && code[j]!='1' && code[j]!='2' && code[j]!='3' && code[j]!='4' && code[j]!='5' && code[j]!='6' && code[j]!='7' && code[j]!='8' && code[j]!='9')
				{
				cout<<"System Error 002: All digits of license number should be only numbers."<<endl;
				cout<<"#Please try again."<<endl;
				system("PAUSE");
				return 0;
				}
			}

			if(code.length()!=7)
			{
			cout<<"System Error 004: The lenght of the Sony VAIO laptops' license number should be 7 digit long"<<endl;
			cout<<"#Please try again."<<endl;
			system("PAUSE");
			return 0;
			}
			else
			{
			cout<<"- - - - - - - - - - - - - - - "<<endl;
			cout<<"Key_code_input: ";

			char first_bite=code[0];
			char second_bite=code[1];
			char third_bite=code[2];
			char forth_bite=code[3];
			char fifth_bite=code[4];
			char sixth_bite=code[5];
			char seventh_bite=code[6];

			if(first_bite=='0') cout<<0;
			if(first_bite=='1') cout<<9;
			if(first_bite=='2') cout<<8;
			if(first_bite=='3') cout<<7;
			if(first_bite=='4') cout<<6;
			if(first_bite=='5') cout<<5;
			if(first_bite=='6') cout<<4;
			if(first_bite=='7') cout<<3;
			if(first_bite=='8') cout<<2;
			if(first_bite=='9') cout<<1;

			if(second_bite=='0') cout<<8;
			if(second_bite=='1') cout<<7;
			if(second_bite=='2') cout<<6;
			if(second_bite=='3') cout<<5;
			if(second_bite=='4') cout<<4;
			if(second_bite=='5') cout<<3;
			if(second_bite=='6') cout<<2;
			if(second_bite=='7') cout<<1;
			if(second_bite=='8') cout<<0;
			if(second_bite=='9') cout<<9;
	
			if(third_bite=='0') cout<<7;
			if(third_bite=='1') cout<<6;
			if(third_bite=='2') cout<<5;
			if(third_bite=='3') cout<<4;
			if(third_bite=='4') cout<<3;
			if(third_bite=='5') cout<<2;
			if(third_bite=='6') cout<<1;
			if(third_bite=='7') cout<<0;
			if(third_bite=='8') cout<<9;
			if(third_bite=='9') cout<<8;
		
			if(forth_bite=='0') cout<<2;
			if(forth_bite=='1') cout<<1;
			if(forth_bite=='2') cout<<0;
			if(forth_bite=='3') cout<<9;
			if(forth_bite=='4') cout<<8;
			if(forth_bite=='5') cout<<7;
			if(forth_bite=='6') cout<<6;
			if(forth_bite=='7') cout<<5;
			if(forth_bite=='8') cout<<4;
			if(forth_bite=='9') cout<<3;
	
			if(fifth_bite=='0') cout<<1;
			if(fifth_bite=='1') cout<<0;
			if(fifth_bite=='2') cout<<9;
			if(fifth_bite=='3') cout<<8;
			if(fifth_bite=='4') cout<<7;
			if(fifth_bite=='5') cout<<6;
			if(fifth_bite=='6') cout<<5;
			if(fifth_bite=='7') cout<<4;
			if(fifth_bite=='8') cout<<3;
			if(fifth_bite=='9') cout<<2;

			if(sixth_bite=='0') cout<<2;
			if(sixth_bite=='1') cout<<1;
			if(sixth_bite=='2') cout<<0;
			if(sixth_bite=='3') cout<<9;
			if(sixth_bite=='4') cout<<8;
			if(sixth_bite=='5') cout<<7;
			if(sixth_bite=='6') cout<<6;
			if(sixth_bite=='7') cout<<5;
			if(sixth_bite=='8') cout<<4;
			if(sixth_bite=='9') cout<<3;
	
			if(seventh_bite=='0') cout<<6<<endl;
			if(seventh_bite=='1') cout<<5<<endl;
			if(seventh_bite=='2') cout<<4<<endl;
			if(seventh_bite=='3') cout<<3<<endl;
			if(seventh_bite=='4') cout<<2<<endl;
			if(seventh_bite=='5') cout<<1<<endl;
			if(seventh_bite=='6') cout<<0<<endl;
			if(seventh_bite=='7') cout<<9<<endl;
			if(seventh_bite=='8') cout<<8<<endl;
			if(seventh_bite=='9') cout<<7<<endl; 
			}	
	}
			else 
			{
				cout<<" System Error 001: Your input was wrong"<<endl;
				cout<<" It should be either 1 or 2"<<endl;
				cout<<" - - - - - - - - - - - - - -"<<endl;
				cout<<" #Try again";
			}
	}
	cout<<endl;
	system ("PAUSE");
	return 0;
}