//
//  Human.hpp
//  Assignment2
//
//  Created by Ali Rizvi on 10/29/18.
//  Copyright © 2018 Ali Rizvi. All rights reserved.
//

#ifndef Human_hpp
#define Human_hpp

#include <stdio.h>
#include <iostream>
#include "Player.hpp"
#include <string>
#include "Guess.hpp"

using namespace std;

class Human : public Player {
public:
    string name;
    Human(string initialName) : Player(3) {
        name = initialName;
        //initialize the base class score to 3
    }
    
    string getName() {
        return name;
    }
    
    Guess getGuess() const {
        char c;
        cout<<endl;
        cin>>c;
        
        //If c is an integer
        //How do you tell that c is an integer?
        //if (!cin) {something something
        
        
        Guess object = Guess(c);
        return(object);
        
        
    }
};

#endif /* Human_hpp */
