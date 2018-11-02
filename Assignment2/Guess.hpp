//
//  Guess.hpp
//  Assignment2
//
//  Created by Ali Rizvi on 10/29/18.
//  Copyright © 2018 Ali Rizvi. All rights reserved.
//

#ifndef Guess_hpp
#define Guess_hpp

#include <stdio.h>
#include <cstdlib>
#include <locale>
#include <ctime>

class Guess {
private:
    char guess;
    char arr[3] = {'R','P','S'};
public:
    Guess() {
        //Random is based off of the current time, therefore will be unique everytime.
        //This is not true, however if the user goes fast, therefore not allowing the time change to affect the guess
        //Still better, in my opinion, than using only the rand() method, which has the same seed everytime
        srand(time(NULL));
        int x = rand() % 2;
        guess = arr[x];
    }
    Guess(char letter) {
        letter = toupper(letter);
        if (letter == 'R') {
            guess = 'R';
        }
        else if (letter == 'P')
            guess = 'P';
        else
            guess = 'S';
        
    }
    Guess(int value) {
        if (value == 0)
            guess = 'R';
        else if (value == 1)
            guess = 'P';
        else
            guess = 'S';
    }
    
    char getValue() {
        return(guess);
    }

    int compare(const Guess &other) const;
    
    
};

#endif /* Guess_hpp */
