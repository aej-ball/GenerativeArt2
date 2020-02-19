#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    font.load("AmalfiCoast.ttf", 32);
    
    
    curvedSegmentPolyline.curveTo(600, ofGetHeight()/2);
    curvedSegmentPolyline.curveTo(600, ofGetHeight()/2);
    curvedSegmentPolyline.curveTo(560, 487);
    curvedSegmentPolyline.curveTo(460, 450);
    curvedSegmentPolyline.curveTo(490, 540);
    curvedSegmentPolyline.curveTo(290, 610);
    curvedSegmentPolyline.curveTo(220, 615);
    curvedSegmentPolyline.curveTo(165, 650);
    curvedSegmentPolyline.curveTo(165, 650);
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofDrawLine(ofGetWidth()/3, ofGetHeight()/4, ofGetWidth()/3, ofGetHeight()/3 * 2);
    
    ofNoFill();
    ofDrawBezier(ofGetWidth()/3, ofGetHeight()/3 * 2, 750, ofGetHeight()/2, 600, ofGetHeight()/4, ofGetWidth()/4*2, ofGetHeight()/3);
    ofDrawBezier(ofGetWidth()/4*2, ofGetHeight()/3, 525, 250, 300, 400, ofGetWidth()/4*3, ofGetHeight()/3*2);
    ofDrawLine(ofGetWidth()/4*3, ofGetHeight()/3*2, 600, ofGetHeight()/2);
    
    curvedSegmentPolyline.draw();
    

    font.drawString("Alexander", 165, 650);

    
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
