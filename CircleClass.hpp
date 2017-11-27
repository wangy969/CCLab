//
//  CircleClass.hpp
//  myCharmingSketch
//
//  Created by Kim Wang on 2017/11/16.
//
//

#ifndef CircleClass_hpp
#define CircleClass_hpp

#include <stdio.h>
#include <ofMain.h>

class CircleClass{
public:
    void reset();
    void draw();
    void update();
    ofPoint force;
    float drag;
    bool isAttracting = true;
    
    ofPoint position;
    ofPoint velocity;
    
    ofParameter<int> getRed(){return red ;} ;
    
    ofParameterGroup circleParameters;
    ofParameter<int> red;
    ofParameter<int> green;
    ofParameter<int> blue;
    
    //ofParameter<int> posX;
    //ofParameter<int> posY;
//    int posX ;
//    int posY ;
    ofParameter<int> radius;
    
    //ofParameter<int> velocityx;
    //ofParameter<int> velocityy;
};

#endif /* CircleClass_hpp */
