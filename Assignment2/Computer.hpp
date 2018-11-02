//
//  Computer.hpp
//  Assignment2
//
//  Created by Ali Rizvi on 10/29/18.
//  Copyright © 2018 Ali Rizvi. All rights reserved.
//

#ifndef Computer_hpp
#define Computer_hpp

#include <stdio.h>
#include <iostream>
#include "Player.hpp"
#include "Guess.hpp"

using namespace std;

class Computer : public Player {
public:
    Computer() : Player(5) {
        
    }
    
    Guess getGuess() const {
        Guess object = Guess();
        return(object);
    }
};

#endif /* Computer_hpp */
