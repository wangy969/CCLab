//
//  CircleClass.cpp
//  cclabfinal
//
//  Created by Kim Wang on 2017/12/4.
//
//

#include "CircleClass.hpp"
void CircleClass::setup(){
    circleParameters.setName("circle controls");
    circleParameters.add(size.set("size", 1.5, 1.1, 4));
    circleParameters.add(red.set("red", 20, 0, 40));
    circleParameters.add(green.set("green", 20, 0, 40));
    circleParameters.add(blue.set("blue", 20, 0, 40));
    circleParameters.add(random.set("random", 0.1, 0.1, 2));

    
    beat.load("xiyouji.mp3");
    fftSmooth = new float [8192];
    
    for(int i=0;i<8192;i++){
        fftSmooth[i]=0;
    }
    
    bands=64;
    beat.setLoop(true);
    beat.setVolume(0.2);
}

void CircleClass::update(){
    ofSoundUpdate();
    float*value=ofSoundGetSpectrum(bands);
    for(int i=0;i<bands;i++){
        fftSmooth[i] *= 0.6f;
        if(fftSmooth[i]<value[i]){
            fftSmooth[i]=value[i];
        }
    }

}


void CircleClass::draw(){
    ofColor colorOne(48+red, 38+green, 85+blue);
    ofColor colorTwo(117+red, 184+green, 226+blue);
    ofBackgroundGradient(colorOne, colorTwo, OF_GRADIENT_CIRCULAR);
    
    ofSetColor(48+red, 125+green, 199+blue,100);
    for(int i=0;i<bands;i++){
        for(int a=0;a<360;a=a+10){
            ofDrawLine(sin(a)*1500/size+fftSmooth[i]*300*ofRandom(2*random)*size,
                       cos(a)*1500/size+fftSmooth[i]*300*ofRandom(2*random)*size,
                       ofGetWidth()/2,
                       ofGetHeight()/2);
        }
    }
    
    //ofSetColor(100, 210, 204,30);
    for(int i=0;i<bands;i++){
        for(int a=0;a<360;a=a+13){
            ofSetColor(100+red, 210+green, 204+blue,30*ofRandom(4));
            ofDrawLine(sin(a)*1500/size+fftSmooth[i]*100*ofRandom(10*random)*size,
                       cos(a)*1500/size+fftSmooth[i]*100*ofRandom(10*random)*size,
                       ofGetWidth()/2,
                       ofGetHeight()/2);
        }
    }
    
    //    ofSetColor(49, 14, 61,40);
    //    for(int i=0;i<bands;i++){
    //        ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, -(fftSmooth[i]*850));
    //    }
    
    ofSetColor(49+red, 14+green, 61+blue,40);
    for(int i=0;i<bands;i++){
        ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, -(fftSmooth[i]*250));
    }
    
    ofSetColor(49+red, 14+green, 61+blue,80);
    for(int i=0;i<bands;i++){
        ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, -(fftSmooth[i]*150));
    }
    
    ofSetColor(57+red, 109+green, 185+blue,200);
    for(int i=0;i<bands;i++){
        for(int a=0;a<360;a=a+65){
            ofDrawCircle(sin(a -(fftSmooth[i]*20))*100*size+ofGetWidth()/2,
                         cos(a -(fftSmooth[i]*20))*100*size+ofGetHeight()/2,
                         -(fftSmooth[i]*60)*ofRandom(2));
        }
    }
    
    ofSetColor(87+red, 143+green, 233+blue);
    for(int i=0;i<bands;i++){
        for(int a=0;a<360;a=a+45){
            ofDrawCircle(sin(a -(fftSmooth[i]*20))*150*size+ofGetWidth()/2,
                         cos(a -(fftSmooth[i]*20))*150*size+ofGetHeight()/2,
                         -(fftSmooth[i]*45));
        }
    }
    
    ofSetColor(87+red, 143+green, 173+blue);
    for(int i=0;i<bands;i++){
        for(int a=0;a<360;a=a+15){
            ofDrawCircle(sin(a -(fftSmooth[i]))*200*size+ofGetWidth()/2,
                         cos(a -(fftSmooth[i]))*200*size+ofGetHeight()/2,
                         -(fftSmooth[i]*30));
        }
    }
    
    ofSetColor(87+red, 143+green, 200+blue);
    for(int i=0;i<bands;i++){
        for(int a=0;a<360;a=a+15){
            ofDrawCircle(sin(a -(fftSmooth[i]))*260*size+ofGetWidth()/2,
                         cos(a -(fftSmooth[i]))*260*size+ofGetHeight()/2,
                         -(fftSmooth[i]*15));
        }
        // ofDrawCircle(positionx/fftSmooth[i]/100, positiony/fftSmooth[i]/100, 20);
    }
    
    //ofDrawCircle(positionx, positiony, 20);
    //gui.draw();

}

void CircleClass::Pressed(int key){
    
    switch (key) {
        case '1':
            beat.play();
            break;
            
        case '2':
            beat.stop();
            break;
    }
    
}
