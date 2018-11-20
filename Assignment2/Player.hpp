//
//  Player.hpp
//  Assignment2
//
//  Created by Ali Rizvi on 10/29/18.
//  Copyright © 2018 Ali Rizvi. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>

class Player {
private:
    int score;
    
public:
    Player(int initial) {
        score = initial;
    }
    
    int getScore() { return(score); }
    
    Player& operator--() {
        score -= 1;
        return(*this);
        
    }
};

#endif /* Player_hpp */
