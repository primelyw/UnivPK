//
//  Fuctions.h
//  Game
//
//  Created by Prime Lee on 01/01/2018.
//  Copyright © 2018 Prime Lee. All rights reserved.
//
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#ifndef Fuctions_h
#define Fuctions_h
void showLogo(x,y,sf::Sprite sprite){
    if(event.mouseMove.x>=130&&event.mouseMove.x<=711&&event.mouseMove.y>=81&&event.mouseMove.y<=504){
        sprite2.setPosition(event.mouseMove.x,event.mouseMove.y);
        window.draw(sprite2);
    }
    if(event.mouseMove.x<130&&event.mouseMove.y>=81&&event.mouseMove.y<=504){
        sprite2.setPosition(130,event.mouseMove.y);
        window.draw(sprite2);
    }
    if(event.mouseMove.x<=130&&event.mouseMove.y<81){
        sprite2.setPosition(130,81);
        window.draw(sprite2);
    }
    if(event.mouseMove.x<130&&event.mouseMove.y>504){
        sprite2.setPosition(130,504);
        window.draw(sprite2);
    }
    if(event.mouseMove.x>=130&&event.mouseMove.x<=711&&event.mouseMove.y<81){
        sprite2.setPosition(event.mouseMove.x,81);
        window.draw(sprite2);
    }
    if(event.mouseMove.x>=130&&event.mouseMove.x<=711&&event.mouseMove.y>504){
        sprite2.setPosition(event.mouseMove.x,504);
        window.draw(sprite2);
    }
    if(event.mouseMove.x>711&&event.mouseMove.y<81){
        sprite2.setPosition(711,81);
        window.draw(sprite2);
    }
    if(event.mouseMove.x>711&&event.mouseMove.y>504){
        sprite2.setPosition(711,504);
        window.draw(sprite2);
    }
    if(event.mouseMove.x>711&&event.mouseMove.y>=81&&event.mouseMove.y<=504){
        sprite2.setPosition(711,event.mouseMove.y);
        window.draw(sprite2);
    }

}

#endif /* Fuctions_h */
