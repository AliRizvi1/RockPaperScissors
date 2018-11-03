//
//  assn2.cpp
//  Assignment2
//
//  Created by Ali Rizvi on 10/29/18.
//  Copyright © 2018 Ali Rizvi. All rights reserved.
//

#include <iostream>
#include "Player.hpp"
#include "Human.hpp"
#include "Computer.hpp"
#include "Guess.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    cout<<"Player name: "<<endl;
    string tempName;
    cin>>tempName;
    cout<<"First to 0 wins!"<<endl;
    Human human(tempName);
    Computer computer;
    
    while (human.getScore() != 0 && computer.getScore() != 0) {
        cout<<"Enter (R,P,S): ";
        Guess humanGuess = human.getGuess();
        Guess compGuess = computer.getGuess();
        
        cout<<"Human:"<<humanGuess.getValue()<<" ";
        cout<<"Computer:"<<compGuess.getValue()<<endl;
        
        int result = humanGuess.compare(compGuess);
        switch (result) {
            case -1:
                human.operator--();
                break;
            case 1:
                computer.operator--();
                break;
        }
        
        cout<<"Human:"<<human.getScore()<<" ";
        cout<<"Computer:"<<computer.getScore()<<endl;
    }
    
    if (human.getScore() == 0)
        cout<<human.getName()<<" has won!"<<endl;
    else if (computer.getScore() == 0)
        cout<<"The computer won!"<<endl;
    else
        //Else case shouldn't be possible, included to avoid errors just in case.
        cout<<"It was a tie? How's that possible..."<<endl;
    
    
    return(0);
}
