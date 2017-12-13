//
//  main.cpp
//  guessing game
//
//  Created by Dinaol Melak on 12/12/17.
//  Copyright © 2017 Dinaol Melak. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <string>
using namespace std;
void start_game();
float number;
int main()
{
    string answer;
    cout<<setw(25)<<"Hidden Number Game\n";
    cout<<"Do you want to play?\n";
    cin>>answer;
    if (answer=="yes"||answer=="Yes")
    {
        start_game();
    }
    else if(answer=="no"||answer=="No")
    {
        cout<<"Thank you for your time!\n";
    }
    while(!((answer=="no"||answer=="No")||(answer=="yes"||answer=="Yes")))
    {
        cout<<"Incorrect Input\nPlease input your answer by typing either 'yes' or 'no'\n";
        cin>>answer;
        if (answer=="yes"||answer=="Yes")
        {
            start_game();
        }
        else if(answer=="no"||answer=="No")
        {
            cout<<"Thank you for your time!\n";
        }
    }
//    (rand()%100)+1;
    
    return 0;
}
void start_game()
{
    srand(time(NULL));
    int random_number=((rand()%100)+1);
    cout<<random_number;
    cout<<"******************Instructions*******************\n"
    <<"The objective of the game is to guess The Hidden Number.\n"
    <<"You have to keep on guessing until you finally get the number.\n"
    <<"The number is from 1-100\n"
    <<"Based on your guesses you will be instructed whether it is getting closer or not to the Hidden Number.\n"
    <<"Good Luck\n"
    <<"******************Instructions*******************\n"<<endl;
    cout<<"Please make your guess:...\n";
    cin>>number;
    while(number!=random_number)
    {
        while(number<random_number)
        {
            cout<<"The number you entered is less than the Hidden Number.\n";
            cin>>number;
        }
        while(number>random_number)
        {
            cout<<"The number you entered is greater than the Hidden Number.\n";
            cin>>number;
        }
    }
    if(number==random_number)
    {
        cout<<"Congragulations you have discovered the hidden number '"<<random_number
        <<"'\nYou won The Hidden Number game.\n";
    }
}
