#include "ofApp.h"
ofImage cat;
ofImage dog;
ofSoundPlayer meow;
ofSoundPlayer wow;
ofSoundPlayer happy;
ofVec2f catPosition;
ofVec2f catVelocity;
ofVec2f dogPosition;
ofVec2f dogVelocity;
float n;

//--------------------------------------------------------------
void ofApp::setup(){
    catPosition.set(0, 0);
    dogPosition.set(ofGetWidth()/2, ofGetHeight()/2);
    cat.load("img/cat.png");
    dog.load("img/dog.png");
    meow.load("sound/meow.wav");
    wow.load("sound/wow.wav");
    happy.load("sound/happy.mp3");
    happy.play();
    ofSetBackgroundColor(249, 117, 139);
}

//--------------------------------------------------------------
void ofApp::update(){

    catPosition+=catVelocity;
    if(catPosition.x<0||catPosition.x>ofGetWidth()){
        catVelocity.x*=-1;
    }
    if(catPosition.y<0||catPosition.y>ofGetHeight()){
        catVelocity.y*=-1;
    }
    
    dogPosition+=dogVelocity;
    if(dogPosition.x<0||dogPosition.x>ofGetWidth()){
        dogVelocity.x*=-1;
    }
    if(dogPosition.y<0||dogPosition.y>ofGetHeight()){
        dogVelocity.y*=-1;
    }
    
    ofSetBackgroundColor(n, 117, 139);

}

//--------------------------------------------------------------
void ofApp::draw(){
    cat.draw(catPosition.x, catPosition.y,121,111);
    dog.draw(dogPosition.x, dogPosition.y,116,112);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key == 'z'){
        meow.play();
    } else if (key == 'x'){
        wow.play();
    }

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    n=ofRandom(255);

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    catVelocity.x += 5 - ofRandom(10);
    catVelocity.y += 5 - ofRandom(10);
    
    dogVelocity.x += 5 - ofRandom(10);
    dogVelocity.y += 5 - ofRandom(10);

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
//    meow.play();
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
