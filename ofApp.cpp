#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    circleGroup.reset();
    parameterGroup.add(circleGroup.circleParameters);
//    parameterGroup.add(circles.circleParameters);
    gui.setup(parameterGroup);
    fire.load("fire.png");
    
    int numcircle = 1500;
    for(int i=0;i<numcircle;i++){
        CircleClass newcircle;
        newcircle.reset();
        circles.push_back(newcircle);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i=0;i<circles.size();i++){
        circles[i].update();
        circles[i].circleParameters.getInt("red") = circleGroup.circleParameters.getInt("red") ;
        circles[i].circleParameters.getInt("green") = circleGroup.circleParameters.getInt("green") ;
        circles[i].circleParameters.getInt("blue") = circleGroup.circleParameters.getInt("blue") ;
        circles[i].circleParameters.getInt("radius") = circleGroup.circleParameters.getInt("radius") ;
        
//        if(circles[i].velocityx <= 0) {
//            circles[i].circleParameters.getInt("velocityx") = circleGroup.circleParameters.getInt("velocityx")*-1 ;
//        } else {
//            circles[i].circleParameters.getInt("velocityx") = circleGroup.circleParameters.getInt("velocityx") ;
//        }
//        
//        if(circles[i].velocityy <= 0) {
//            circles[i].circleParameters.getInt("velocityy") = circleGroup.circleParameters.getInt("velocityy") *-1 ;
//        } else {
//            circles[i].circleParameters.getInt("velocityy") = circleGroup.circleParameters.getInt("velocityy") ;
//        }


    //circleGroup.update();
        if(circles[i].position.x<0||circles[i].position.x>ofGetWidth()){
            circles[i].velocity.x *=-1;
        }
        if(circles[i].position.y<0||circles[i].position.y>ofGetHeight()){
            circles[i].velocity.y *=-1;
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){    
    ofBackgroundGradient(ofColor(60,60,60), ofColor(10,10,10));
    for(int i=0;i<circles.size();i++){
        circles[i].draw();
    }
    gui.draw();
    fire.draw(ofGetMouseX()-20,ofGetMouseY()-20,40,40);
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
