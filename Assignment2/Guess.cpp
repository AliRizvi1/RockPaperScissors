//
//  Guess.cpp
//  Assignment2
//
//  Created by Ali Rizvi on 10/29/18.
//  Copyright © 2018 Ali Rizvi. All rights reserved.
//

#include "Guess.hpp"
#include <iostream>


int Guess::compare(const Guess &other) const {
    //Return 0 if they're the same, -1 if this wins, and 1 if other wins
    if (this->guess == other.guess) {
        return 0;
    }
    //I have included some defaults because I was getting an error that there was a possibility the function might not return anything
    else if (this->guess == 'P')
    {
        switch(other.guess) {
            case 'R':
                return(-1);
            case 'S':
                return(1);
            default:
                std::cout<<"Invalid letter. Please try again.";
                return(NULL);
        }
        
        
    }
    else if (this->guess == 'R') {
        switch(other.guess) {
            case 'P':
                return(1);
            case 'S':
                return(-1);
            default:
                std::cout<<"Invalid letter. Please try again.";
                return(NULL);
        }
    }
    
    else if (this->guess == 'S') {
        switch(other.guess) {
            case 'P':
                return(-1);
            case 'R':
                return(1);
            default:
                std::cout<<"Invalid letter. Please try again.";
                return(NULL);
        }
    }
    else {
        std::cout<<"Invalid letter. Please try again.";
        return(NULL);
    }
}
