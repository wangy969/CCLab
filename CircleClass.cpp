//
//  CircleClass.cpp
//  myCharmingSketch
//
//  Created by Kim Wang on 2017/11/16.
//
//

#include "CircleClass.hpp"

void CircleClass::reset(){
    circleParameters.setName("circlecontrols");
    
    circleParameters.add(red.set("red", 255,0,255));
    circleParameters.add(green.set("green", 255,0,255));
    circleParameters.add(blue.set("blue", 255,0,255));
    
    position.x=ofRandomWidth();
    position.y=ofRandomHeight();
    
//    circleParameters.add(posX.set("posX", 500, 0, 1000));
//    circleParameters.add(posY.set("posY", 600, 0, 800));
    
    circleParameters.add(radius.set("radius",2,0,100));
    
//    circleParameters.add(velocityx.set("velocityx",1,0,5));
//    circleParameters.add(velocityy.set("velocityy",1,0,5));
    
    velocity.x=ofRandom(-3.9,3.9);
    velocity.y=ofRandom(-3.9,3.9);
    drag = ofRandom(0.95, 0.998);
    force = ofPoint(0,0);
//    
//    position.x=posX;
//    position.y=posY;
}

void CircleClass::update(){
    red = circleParameters.getInt("red") ;
    green = circleParameters.getInt("green") ;
    blue = circleParameters.getInt("blue");
    radius = circleParameters.getInt("radius");
//    velocityx = circleParameters.getInt("velocityx");
//    velocityy = circleParameters.getInt("velocityy");
    cout << circleParameters.get("radius") << endl ;
//    posX+=velocityx;
//    posY+=velocityy;
    
    if(isAttracting){
        ofPoint attractPoint = ofPoint(ofGetMouseX(),ofGetMouseY());
        force = attractPoint-position;
        
        force.normalize();
        
        velocity *= drag;
        velocity += force*.3;
        
        position += velocity;
        
        
    }else{
        ofPoint attractPoint = ofPoint(ofGetMouseX(),ofGetMouseY());
        force = attractPoint-position;
        
        float distance = force.length();
        force.normalize();
        
        if(distance<150){
            velocity-=force*0.6;
            
        }
    }
    position+=velocity;
}

void CircleClass::draw(){
    ofSetColor(red, green, blue,ofRandom(255));
    ofDrawCircle(position.x, position.y, radius);
}
