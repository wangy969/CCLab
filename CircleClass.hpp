//
//  CircleClass.hpp
//  cclabfinal
//
//  Created by Kim Wang on 2017/12/4.
//
//

#ifndef CircleClass_hpp
#define CircleClass_hpp

#include <stdio.h>
#include "ofMain.h"

class CircleClass{
public:
    void setup();
    void draw();
    void update();
    void Pressed(int key);
    ofParameterGroup circleParameters;
    ofParameter<float> size;
    ofParameter<int> red;
    ofParameter<int> green;
    ofParameter<int> blue;
    ofParameter<float> random;

    
    ofSoundPlayer beat;
    float*fftSmooth;
    int bands;
};

#endif /* CircleClass_hpp */
