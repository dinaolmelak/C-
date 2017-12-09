#include <iostream>
#include <iomanip>
using namespace std;



void identify(char);

int main()
{
	string input;
	long wl;
	//take in the input word from the user 
	cout<<"Please input a word:\n";
	cin>>input;
	wl=input.length()-1;
	cout<<"This are the words for the string:\n";
	
	//maybe you might add a comment like this here too
	//loop over the world
	for(int d=0;d<=wl;d++)
	{
		//get a charactor
		char letter=input.at(d);
		cout<<setw(13);
		//match a charactor with a word
		identify(letter);
	}
	return 0;
}

//function that match a character from the word
void identify(char input)
{
	if (input=='A'||input=='a')
	{
		cout<<"Alpha"<<endl;
	}
	else if (input=='B'||input=='b')
	{
		cout<<"Bravo"<<endl;
	}
	else if (input=='C'||input=='c')
	{
		cout<<"Charlie"<<endl;
	}
	else if (input=='D'||input=='d')
	{
		cout<<"Delta"<<endl;
	}
	else if (input=='E'||input=='e')
	{
		cout<<"Echo"<<endl;
	}
	else if (input=='F'||input=='f')
	{
		cout<<"Foxtrot"<<endl;
	}
	else if (input=='G'||input=='g')
	{
		cout<<"Golf"<<endl;
	}
	else if (input=='H'||input=='h')
	{
		cout<<"Hotel"<<endl;
	}
	else if (input=='I'||input=='i')
	{
		cout<<"India"<<endl;
	}
	else if (input=='J'||input=='j')
	{
		cout<<"Juliet"<<endl;
	}
	else if (input=='K'||input=='k')
	{
		cout<<"Kilo"<<endl;
	}
	else if (input=='L'||input=='l')
	{
		cout<<"Lima"<<endl;
	}
	else if (input=='M'||input=='m')
	{
		cout<<"Mike"<<endl;
	}
	else if (input=='N'||input=='n')
	{
		cout<<"November"<<endl;
	}
	else if (input=='O'||input=='o')
	{
		cout<<"Oscar"<<endl;
	}
	else if (input=='P'||input=='p')
	{
		cout<<"Papa"<<endl;
	}
	else if (input=='Q'||input=='q')
	{
		cout<<"Quebec"<<endl;
	}
	else if (input=='R'||input=='r')
	{
		cout<<"Romeo"<<endl;
	}
	else if (input=='S'||input=='s')
	{
		cout<<"Sierra"<<endl;
	}
	else if (input=='T'||input=='t')
	{
		cout<<"Tango"<<endl;
	}
	else if (input=='U'||input=='u')
	{
		cout<<"Uniform"<<endl;
	}
	else if (input=='V'||input=='v')
	{
		cout<<"Victor"<<endl;
	}
	else if (input=='W'||input=='w')
	{
		cout<<"Whiskey"<<endl;
	}
	else if (input=='X'||input=='x')
	{
		cout<<"X-ray"<<endl;
	}
	else if (input=='Y'||input=='y')
	{
		cout<<"Yankee"<<endl;
	}
	else if (input=='Z'||input=='z')
	{
		cout<<"Zulu"<<endl;
	}
	else
	{
		cout<<"special or symbol charactore not recongized!" <<endl;
}
