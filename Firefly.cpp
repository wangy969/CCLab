//
//  Dog.cpp
//  of class2
//
//  Created by Kim Wang on 2017/11/8.
//
//

#include "Firefly.hpp"
Firefly::Firefly(){

}

void Firefly::setup(){
    
    position.set(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
    alpha=ofRandom(255);
}

void Firefly::update(){
    acceleration.x=ofRandom(-6,2);
    acceleration.y=ofRandom(-6,2);
    velocity.x = ofRandom(2)+acceleration.x;
    velocity.y = ofRandom(2)+acceleration.y;
    position += velocity;
    radius = ofRandom(8);

}

void Firefly::draw(){
    
    ofSetColor(250, ofRandom(200,250), ofRandom(250),alpha);
    ofDrawCircle(position.x, position.y, radius);
}

void Firefly::sit(){
    
}

ofColor
Firefly::getFurcolor(){
    return furColor;
}
