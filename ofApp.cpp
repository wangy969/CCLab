#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    

    
    int numParticles = 200;
    for(int i=0; i<numParticles;i++){
        Firefly firefly;
        fireflies.push_back(firefly);
    }
    fireflyRestart();
}
//--------------------------------------------------------------
void ofApp::fireflyRestart(){
    //myFirefly.update();
    ofPoint position;
    position.set(ofRandomWidth(), ofRandomHeight());
    
    for(int i=0;i<fireflies.size();i++){
        fireflies[i].setup();
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    //myFirefly.update();
    
    for(int i=0;i<fireflies.size();i++){
        fireflies[i].update();
    }
    
    if(fireflies[fireflies.size()].position.x<0){
        fireflyRestart();
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    //myFirefly.draw();
    
    for(int i=0;i<fireflies.size();i++){
        fireflies[i].draw();
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
