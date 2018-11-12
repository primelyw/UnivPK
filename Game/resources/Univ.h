//
//  weapon.h
//  Game
//
//  Created by Prime Lee on 01/01/2018.
//  Copyright © 2018 Prime Lee. All rights reserved.
//

#ifndef weapon_h
#define weapon_h
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
class Univ{
public:
    sf::Sprite sprite;
    sf::Sprite weapon[3];
    int life;
    bool isCollapse(int x,int y){
        if((x<=weapon[0].getPosition().x+18&&x>=weapon[0].getPosition().x-18&&y<=weapon[0].getPosition().y+18&&y>=weapon[0].getPosition().y-18)||(x<=weapon[1].getPosition().x+18&&x>=weapon[1].getPosition().x-18&&y<=weapon[1].getPosition().y+18&&y>=weapon[1].getPosition().y-18)||(x<=weapon[2].getPosition().x+18&&x>=weapon[2].getPosition().x-18&&y<=weapon[2].getPosition().y+18&&y>=weapon[2].getPosition().y-18))
            return true;
        else return false;
    }
    
};

#endif /* weapon_h */
