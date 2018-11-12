//
//  Functions.h
//  Game
//
//  Created by Prime Lee on 01/01/2018.
//  Copyright © 2018 Prime Lee. All rights reserved.
//

#ifndef Functions_h
#define Functions_h
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include "Univ.h"
#include <iostream>

void showLogo(sf::Event event,sf::Sprite *sprite){
    int x = event.mouseMove.x, y = event.mouseMove.y;
    if(event.type == sf::Event::MouseMoved){
    if(x>=130&&x<=711&&y>=81&&y<=504){
        sprite->setPosition(x,y);
        //std::cout <<x<<' '<<y;
    }
    else if(x<130&&y>=81&&y<=504){
        sprite->setPosition(130,y);
    }
    else if(x<=130&&y<81){
        sprite->setPosition(130,81);
    }
    else if(x<130&&y>504){
        sprite->setPosition(130,504);
    }
    else if(x>=130&&x<=711&&y<81){
        sprite->setPosition(x,81);
    }
    else if(x>=130&&x<=711&&y>504){
        sprite->setPosition(x,504);
    }
    else if(x>711&&y<81){
        sprite->setPosition(711,81);
    }
    else if(x>711&&y>504){
        sprite->setPosition(711,504);
    }
    else if(x>711&&y>=81&&y<=504){
        sprite->setPosition(711,y);
    }
    }
    else
        return;
}

bool attackOK(sf::Sprite sprite,int x,int y){
    int ax=sprite.getPosition().x;
    int ay=sprite.getPosition().y;
    if(ax>x-40&&ax<x+40&&ay>y-40&&ay<y+40)
        return true;
    else return false;
    
}

#endif /* Functions_h */
