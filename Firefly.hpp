//
//  Dog.hpp
//  of class2
//
//  Created by Kim Wang on 2017/11/8.
//
//

#ifndef firefly_hpp
#define firefly_hpp

#include <stdio.h>

#include "ofMain.h"

class Firefly{
    
public:
    
    Firefly();
    
    void setup();
    void update();
    void draw();
    void sit();
    ofColor getFurcolor();
    
    string name;
    ofPoint position;
    ofPoint velocity;
    ofPoint acceleration;
    
    int alpha;
    float radius;
    
private:
    ofColor furColor;
};

#endif /* Firefly_hpp */
