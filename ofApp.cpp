#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){

    ofSetWindowShape(800,800);
    circleGroup.setup();
    parameterGroup.add(circleGroup.circleParameters);
    
    gui.setup(parameterGroup);
    
    ofColor colorOne(69, 60, 103);
    ofColor colorTwo(117, 184, 226);
    ofBackgroundGradient(colorOne, colorTwo, OF_GRADIENT_CIRCULAR);
    

}

//--------------------------------------------------------------
void ofApp::update(){
    circleGroup.update();
}

//--------------------------------------------------------------
void ofApp::draw(){

    
    circleGroup.draw();
    gui.draw();
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    circleGroup.Pressed(key);
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

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
