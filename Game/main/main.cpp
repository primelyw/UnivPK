

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include "Functions.h"
#include <cstdlib>
#include <iostream>
#include "ResourcePath.hpp"

int main(int, char const**)
{
    
    // Create the main window
    //sf::RenderWindow window2(sf::VideoMode(200,400),"Game Statue");
    sf::RenderWindow window(sf::VideoMode(800, 600), "My Game");
    window.setPosition(sf::Vector2i(320,100));
    // window2.setPosition(sf::Vector2i(120,100));
    window.setFramerateLimit(1200);

    // Set the Icon
    sf::Image icon;
    if (!icon.loadFromFile(resourcePath() + "logop.png")) {
        return EXIT_FAILURE;
    }
    window.setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());

    // Load a sprite to display
    sf::Texture texture;
    if (!texture.loadFromFile(resourcePath() + "timg.jpeg")) {
        return EXIT_FAILURE;
    }
    sf::Sprite sprite(texture);

    // 标题
begin:
    sf::Font font;
    if (!font.loadFromFile(resourcePath() + "AmericanTypewriter.ttc")) {
        return EXIT_FAILURE;
    }
    sf::Text text1("Competition among", font, 40);
    sf::Text text2("Univ Union",font,40);
    sf::Text text3("Designed by Prime Lee",font,20);
    sf::Text text4("Start",font,20);
    sf::Text text5("Help",font,20);
    sf::Text text6("Li Yanwei    2017060901020",font,20);
    text6.setPosition(10,550);
    text1.setPosition(200, 20);
    text2.setPosition(290,80);
    text3.setPosition(550,550);
    text4.setPosition(300,200);
    text5.setPosition(467,200);
    text1.setFillColor(sf::Color(0,0,0,128));
    text2.setFillColor(sf::Color(0,0,0,128));
    text3.setFillColor(sf::Color(0,0,0,120));
    text4.setFillColor(sf::Color(0,0,0,120));
    text5.setFillColor(sf::Color(0,0,0,120));
    text6.setFillColor(sf::Color(0,0,0,120));
    

    //音乐
    sf::Music music;
    if (!music.openFromFile(resourcePath() + "nice_music.ogg")) {
        return EXIT_FAILURE;
    }

    // Play the music
    //music.play();


    // Start the game loop
    
        // Process events
        sf::Event event;
        while (window.waitEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            // Escape pressed: exit
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
                window.close();
            }
            if(event.type==sf::Event::MouseButtonPressed)
                std::cout<<"("<<event.mouseButton.x<<","<<event.mouseButton.y<<")"<<std::endl;
            // Clear screen
            window.clear(sf::Color(255,255,255));
            
            // Draw the sprite
            sprite.setPosition(40,200);
            window.draw(sprite);
            
            // Draw the string
            window.draw(text1);
            window.draw(text2);
            window.draw(text3);
            window.draw(text4);
            window.draw(text5);
            window.draw(text6);
            
            // Update the window
            window.display();
            if(event.type==sf::Event::MouseButtonPressed&&(event.mouseButton.x>300&&event.mouseButton.x<350&&event.mouseButton.y>205&&event.mouseButton.y<220)){
                window.clear();
                goto start;
            }
            if(event.type==sf::Event::MouseButtonPressed&&(event.mouseButton.x>467&&event.mouseButton.x<513&&event.mouseButton.y>204&&event.mouseButton.y<222)){
                window.clear();
                goto help;
            }

        }
    
    
help:
    text1.setString("Start");
    text1.setPosition(350,500);
    if (!texture.loadFromFile(resourcePath() + "specify3.png"))
        return EXIT_FAILURE;
    
    sprite.setTexture(texture);
    sprite.setPosition(100,50);
    
    while(window.waitEvent(event)){
        
        
        window.clear(sf::Color::White);
        
        window.draw(sprite);
        window.draw(text1);
        window.display();
        //显示鼠标坐标；
        if(event.type==sf::Event::MouseButtonPressed)
            std::cout<<"("<<event.mouseButton.x<<","<<event.mouseButton.y<<")"<<std::endl;
        if(event.type==sf::Event::Closed){
            window.close();
        }
        if(event.type==sf::Event::MouseButtonPressed&&(event.mouseButton.x>350&&event.mouseButton.x<444&&event.mouseButton.y>511&&event.mouseButton.y<541))
            goto start;
        for(int i=1; i<=10; i++);  for sdf 
    }
    
    
start:

    window.clear(sf::Color::White);
    window.display();
    sf::Texture Logo;
    sf::Texture Tsinghua;
    sf::Texture Peking;
    sf::Texture Nanda;
    sf::Texture Zhongda;
    sf::Texture backG;
    sf::Texture Rocket;
    sf::Texture Fire;
    sf::Texture Snow;
    sf::Texture Ginkgo;
    
    
    if (!Logo.loadFromFile(resourcePath() + "logoCopy2.png"))
        return EXIT_FAILURE;
    if (!Tsinghua.loadFromFile(resourcePath() + "tsinghuaCopy.png"))
        return EXIT_FAILURE;
    if (!backG.loadFromFile(resourcePath() + "backGround3.png"))
        return EXIT_FAILURE;
    if (!Peking.loadFromFile(resourcePath() + "pekingCopy.png"))
        return EXIT_FAILURE;
    if (!Zhongda.loadFromFile(resourcePath() + "zhongda2.png"))
        return EXIT_FAILURE;
    if (!Rocket.loadFromFile(resourcePath() + "rocketCopy.png"))
        return EXIT_FAILURE;
    if (!Nanda.loadFromFile(resourcePath() + "nandaCopy.png"))
        return EXIT_FAILURE;
    if (!Fire.loadFromFile(resourcePath() + "fire.png"))
        return EXIT_FAILURE;
    if (!Snow.loadFromFile(resourcePath() + "snow2.png"))
        return EXIT_FAILURE;
    if (!Ginkgo.loadFromFile(resourcePath() + "ginkgo.png"))
        return EXIT_FAILURE;
    

    sf::Sprite idt(Logo);
     idt.setOrigin(35,35);
    sf::Sprite ginkgo[4];
    ginkgo[0].setTexture(Ginkgo);
    ginkgo[1].setTexture(Ginkgo);
    ginkgo[2].setTexture(Ginkgo);
    ginkgo[3].setTexture(Ginkgo);
    for(int i=0; i<4; i++){
        ginkgo[i].setOrigin(156,113);
    }
    ginkgo[0].scale(0.2f,0.2f);
    ginkgo[1].scale(0.2f,0.2f);
    ginkgo[2].scale(0.2f,0.2f);
    ginkgo[3].scale(0.2f,0.2f);
    
    
    Univ tsinghua;{
    tsinghua.sprite.setTexture(Tsinghua);
    tsinghua.sprite.setOrigin(101,102);
    tsinghua.sprite.setPosition(50,540);
    tsinghua.sprite.scale(0.5f,0.5f);
        
    tsinghua.life=100;
    
    tsinghua.weapon[0].setTexture(Rocket);
    tsinghua.weapon[1].setTexture(Rocket);
    tsinghua.weapon[2].setTexture(Rocket);
    
    tsinghua.weapon[0].setOrigin(114,122);
    tsinghua.weapon[1].setOrigin(114,122);
    tsinghua.weapon[2].setOrigin(114,122);
    
    tsinghua.weapon[0].scale(0.5,0.5);
    tsinghua.weapon[1].scale(0.5,0.5);
    tsinghua.weapon[2].scale(0.5,0.5);
    
    tsinghua.weapon[1].rotate(20);
    tsinghua.weapon[2].rotate(50);
    
    tsinghua.weapon[0].setPosition(25,520);
    tsinghua.weapon[1].setPosition(25,520);
    tsinghua.weapon[2].setPosition(25,520);
    }
    
    Univ peking;{
        peking.sprite.setTexture(Peking);
        peking.sprite.setOrigin(99,95);
        peking.sprite.setPosition(730,530);
        peking.sprite.scale(0.7f,0.7f);
        
        peking.life=100;
        
        peking.weapon[0]=peking.sprite;
        peking.weapon[1]=peking.sprite;
        peking.weapon[2]=peking.sprite;
        
        peking.weapon[0].scale(0.4f,0.4f);
        peking.weapon[1].scale(0.4f,0.4f);
        peking.weapon[2].scale(0.4f,0.4f);
        
        peking.weapon[0].setPosition(730, 530);
        peking.weapon[1].setPosition(730, 530);
        peking.weapon[2].setPosition(730, 530);
        
    }
    
    Univ nanda;{
        nanda.sprite.setTexture(Nanda);
        nanda.sprite.setOrigin(79,57);
        nanda.sprite.setPosition(40,40);
        nanda.sprite.scale(0.5f,0.5f);
        
        nanda.life=100;
        
        nanda.weapon[0].setTexture(Fire);
        nanda.weapon[0].setOrigin(73, 155);
        nanda.weapon[1].setTexture(Fire);
        nanda.weapon[1].setOrigin(73, 155);
        nanda.weapon[2].setTexture(Fire);
        nanda.weapon[2].setOrigin(73, 155);
    
        nanda.weapon[0].scale(0.4f,0.4f);
        nanda.weapon[1].scale(0.4f,0.4f);
        nanda.weapon[2].scale(0.4f,0.4f);
        
        nanda.weapon[0].rotate(-60);
        nanda.weapon[1].rotate(-45);
        nanda.weapon[2].rotate(-20);
        
        nanda.weapon[0].setPosition(60, 57);
        nanda.weapon[1].setPosition(60, 57);
        nanda.weapon[2].setPosition(60, 57);
    }
    
    Univ zhongda;{
        zhongda.sprite.setTexture(Zhongda);
        zhongda.sprite.setOrigin(95,107);
        zhongda.sprite.setPosition(740,70);
        zhongda.sprite.scale(0.5f,0.5f);
        
        zhongda.life=100;
        
        zhongda.weapon[0].setTexture(Snow);
        zhongda.weapon[0].setOrigin(76, 72);
        zhongda.weapon[1].setTexture(Snow);
        zhongda.weapon[1].setOrigin(76, 72);
        zhongda.weapon[2].setTexture(Snow);
        zhongda.weapon[2].setOrigin(76, 72);
        
        zhongda.weapon[0].scale(0.35f,0.35f);
        zhongda.weapon[1].scale(0.35f,0.35f);
        zhongda.weapon[2].scale(0.35f,0.35f);
        
        zhongda.weapon[0].setPosition(740, 70);
        zhongda.weapon[1].setPosition(740,70);
        zhongda.weapon[2].setPosition(740,70);
    }
    
    
    
    
    sf::Sprite platform(backG);
    platform.setPosition(100,50);
    //生成随机数
    int a,b,c,d,e,f;
    //提高速度
    float speed[7];
    speed[0]=0,speed[1]=0.1,speed[2]=0.4,speed[3]=1,speed[4]=1.6,speed[5]=2.0,speed[6]=2.5;
    int boo[10];
    for(int i=0; i<10; i++){
        boo[i]=1;
    }
    sf::Clock clock;
    int level=0;
    bool attack=0;
    
    //测试部分
    
    
    //循环开始
    while(window.isOpen()){
        
        if(clock.getElapsedTime().asSeconds()>3&&boo[0]){
            level=1; boo[0]=0;
        }
        
        window.clear(sf::Color::White);
        
        //清华武器攻击轨迹及碰撞
        {
        if(tsinghua.weapon[0].getPosition().y<51){
            tsinghua.weapon[0].setPosition(50, 540);
        }
        if(tsinghua.weapon[1].getPosition().y<51){
            tsinghua.weapon[1].setPosition(50, 540);
        }
        if(tsinghua.weapon[2].getPosition().x>728){
            tsinghua.weapon[2].setPosition(50, 540);
        }
            
        if(clock.getElapsedTime().asSeconds()>20&&tsinghua.life>=0){
            if(clock.getElapsedTime().asSeconds()<20.1){
                tsinghua.weapon[0].setPosition(50, 540);
                tsinghua.weapon[1].setPosition(50, 540);
                tsinghua.weapon[2].setPosition(50, 540);
            }
        tsinghua.weapon[0].move(0.5*speed[level],-1*speed[level]);
        tsinghua.weapon[1].move(1.2*speed[level],-0.8*speed[level]);
        tsinghua.weapon[2].move(0.9*speed[level],-0.3*speed[level]);
        if(tsinghua.isCollapse(event.mouseMove.x, event.mouseMove.y)){
            std::cout<<"Collapse!"<<std::endl;
            goto begin;
        }
        }
        }//
        
        //北大武器攻击轨迹及碰撞
        {
            if(peking.weapon[0].getPosition().y<51){
                peking.weapon[0].setPosition(730, 530);
            }
            if(peking.weapon[1].getPosition().y<51){
                peking.weapon[1].setPosition(730, 530);
            }
            if(peking.weapon[2].getPosition().x<2){
                peking.weapon[2].setPosition(730, 530);
            }
            if(clock.getElapsedTime().asSeconds()>15&&peking.life>=0){
                if(clock.getElapsedTime().asSeconds()<15.1){
                    peking.weapon[0].setPosition(730, 530);
                    peking.weapon[1].setPosition(730, 530);
                    peking.weapon[2].setPosition(730, 530);
                }
            peking.weapon[0].move(-0.5*speed[level],-1*speed[level]);
            peking.weapon[1].move(-1.2*speed[level],-0.8*speed[level]);
            peking.weapon[2].move(-0.9*speed[level],-0.3*speed[level]);
            
            if(peking.isCollapse(event.mouseMove.x, event.mouseMove.y)){
                std::cout<<"Collapse!"<<std::endl;
                goto begin;
            }
            }
        
        }//
        
        //南大武器攻击轨迹及碰撞
        {
            if(nanda.weapon[0].getPosition().x>790){
                nanda.weapon[0].setPosition(60, 57);
            }
            if(nanda.weapon[1].getPosition().x>790){
                nanda.weapon[1].setPosition(60, 57);
            }
            if(nanda.weapon[2].getPosition().y>580){
                nanda.weapon[2].setPosition(60, 57);
            }
            
            if(clock.getElapsedTime().asSeconds()>5&&nanda.life>=0){
                if(clock.getElapsedTime().asSeconds()<5.1){
                    nanda.weapon[0].setPosition(60, 57);
                    nanda.weapon[1].setPosition(60, 57);
                    nanda.weapon[2].setPosition(60, 57);
                }
                nanda.weapon[0].move(1.5*speed[level],0.5*speed[level]);
                nanda.weapon[1].move(0.5*speed[level],0.5*speed[level]);
                nanda.weapon[2].move(0.5*speed[level],1.5*speed[level]);
                if(nanda.isCollapse(event.mouseMove.x, event.mouseMove.y)){
                    std::cout<<"Collapse!"<<std::endl;
                    goto begin;
                }
            }
            
        }//
        
        //中大武器攻击轨迹
        {
            if(zhongda.weapon[0].getPosition().x<5){
                zhongda.weapon[0].setPosition(740, 70);
            }
            if(zhongda.weapon[1].getPosition().x<5){
                zhongda.weapon[1].setPosition(740, 70);
            }
            if(zhongda.weapon[2].getPosition().y>580){
                zhongda.weapon[2].setPosition(740, 70);
            }
            if(clock.getElapsedTime().asSeconds()>10&&zhongda.life>=0){
                if(clock.getElapsedTime().asSeconds()<10.1){
                    zhongda.weapon[0].setPosition(740, 70);
                    zhongda.weapon[1].setPosition(740, 70);
                    zhongda.weapon[2].setPosition(740, 70);
                }
            zhongda.weapon[0].move(-2.0*speed[level],0.5*speed[level]);
            zhongda.weapon[1].move(-0.5*speed[level],0.5*speed[level]);
            zhongda.weapon[2].move(-0.5*speed[level],1.5*speed[level]);
                
            
            if(zhongda.isCollapse(event.mouseMove.x, event.mouseMove.y)){
                std::cout<<"Collapse!"<<std::endl;
                goto begin;
            }
            }
        }
        
        if(event.type == sf::Event::MouseButtonPressed){
            ginkgo[0].setPosition(event.mouseButton.x,event.mouseButton.y);
            ginkgo[1].setPosition(event.mouseButton.x,event.mouseButton.y);
            ginkgo[2].setPosition(event.mouseButton.x,event.mouseButton.y);
            ginkgo[3].setPosition(event.mouseButton.x,event.mouseButton.y);
           // std::cout<<"Space !"<<std::endl;
            attack=true;
        }
        
        window.draw(platform);
        //显示互+的图标
        
        //wp[0].sprite.setPosition(fordX2, -0.5*fordX2+355);
        //wp[1].sprite.setPosition(fordX, -2.0*fordX+355);
        showLogo(event,&idt);
        window.draw(idt);
        //银杏叶的运动及攻击;
        if(attack){
            ginkgo[0].move(0.5,-0.5);//zhongda
            ginkgo[1].move(0.5,0.5);//peking
            ginkgo[2].move(-0.5,-0.5);//南京
            ginkgo[3].move(-0.5,0.5);//tsnghua;
            
            ginkgo[0].rotate(0.3);
            ginkgo[1].rotate(-0.3);
            ginkgo[2].rotate(0.3);
            ginkgo[3].rotate(-0.3);
            
            if(attackOK(ginkgo[2],nanda.sprite.getPosition().x,nanda.sprite.getPosition().y)){
                if(clock.getElapsedTime().asSeconds()>5){
                nanda.life--;
                std::cout<<"攻击南京大学成功 南大剩余血量："<<nanda.life<<std::endl;
                }
            }
            if(attackOK(ginkgo[0],zhongda.sprite.getPosition().x,zhongda.sprite.getPosition().y)){
                if(clock.getElapsedTime().asSeconds()>10){
                zhongda.life--;
                std::cout<<"攻击中山大学成功 中大剩余血量："<<zhongda.life<<std::endl;
                }
            }
            if(attackOK(ginkgo[3],tsinghua.sprite.getPosition().x,tsinghua.sprite.getPosition().y)){
                if(clock.getElapsedTime().asSeconds()>15){
                tsinghua.life--;
                std::cout<<"攻击清华大学成功 清华剩余血量："<<tsinghua.life<<std::endl;
                }
            }
            if(attackOK(ginkgo[1],peking.sprite.getPosition().x,peking.sprite.getPosition().y)){
                if(clock.getElapsedTime().asSeconds()>20){
                peking.life--;
                std::cout<<"攻击北京大学成功 北大剩余血量："<<peking.life<<std::endl;
                }
            }
            
            window.draw(ginkgo[0]);
            window.draw(ginkgo[1]);
            window.draw(ginkgo[2]);
            window.draw(ginkgo[3]);
            
            if((ginkgo[0].getPosition().x>790||ginkgo[0].getPosition().y<2)&&(ginkgo[1].getPosition().x>790||ginkgo[1].getPosition().y>590)&&(ginkgo[2].getPosition().x<2||ginkgo[2].getPosition().y<2)&&(ginkgo[3].getPosition().x<5||ginkgo[3].getPosition().y>590)){
                attack=false;
            }
            
        }
        
        
        if(clock.getElapsedTime().asSeconds()>10&&zhongda.life>=0){
        window.draw(zhongda.sprite);
        window.draw(zhongda.weapon[0]);
        window.draw(zhongda.weapon[1]);
        window.draw(zhongda.weapon[2]);
        }
      
        if(clock.getElapsedTime().asSeconds()>5&&nanda.life>=0){
        window.draw(nanda.sprite);
        window.draw(nanda.weapon[0]);
        window.draw(nanda.weapon[1]);
        window.draw(nanda.weapon[2]);
        }
      
        if(clock.getElapsedTime().asSeconds()>15&&peking.life>=0){
        window.draw(peking.sprite);
        window.draw(peking.weapon[0]);
        window.draw(peking.weapon[1]);
        window.draw(peking.weapon[2]);
        }
        
       if(clock.getElapsedTime().asSeconds()>20&&tsinghua.life>=0){
        window.draw(tsinghua.sprite);
        window.draw(tsinghua.weapon[0]);
        window.draw(tsinghua.weapon[1]);
        window.draw(tsinghua.weapon[2]);
        }
        
        
        //window.draw(wp[0].sprite);
        //window.draw(wp[1].sprite);
        
        window.display();
        
        //判断level
        if(nanda.life<=0&&zhongda.life<=0&&peking.life<=0&&tsinghua.life<=0){
            level++;
            clock.restart();
            //满血复活：
            switch(level){
                case 2:
                    nanda.life=200;
                    zhongda.life=200;
                    tsinghua.life=200;
                    peking.life=200;
                    break;
                case 3:
                    nanda.life=300;
                    zhongda.life=300;
                    tsinghua.life=300;
                    peking.life=300;
                    break;
                case 4:
                    nanda.life=400;
                    zhongda.life=400;
                    tsinghua.life=400;
                    peking.life=400;
                    break;
                case 5:
                    nanda.life=500;
                    zhongda.life=500;
                    tsinghua.life=500;
                    peking.life=500;
                    break;
                case 6:
                    nanda.life=600;
                    zhongda.life=600;
                    tsinghua.life=600;
                    peking.life=600;
                    break;
                
            }
        }
        if(level==6){
            goto WIN;
        }
        
        
        while(window.pollEvent(event)){
            if (event.type == sf::Event::Closed||(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)) {
            window.close();
            }
            if(event.type==sf::Event::MouseButtonPressed){
                std::cout<<"("<<event.mouseButton.x<<","<<event.mouseButton.y<<")"<<std::endl;
            }
        }
    }
    
    
WIN:
        // Escape pressed: exit
    return EXIT_SUCCESS;
}
