#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(255, 255, 255);

	float i = 0;
	while (i < TWO_PI) { // make a heart
		float r = (2 - 2 * sin(i) + sin(i)*sqrt(abs(cos(i))) / (sin(i) + 1.4)) * -80;
		float x = ofGetWidth() / 2 + cos(i) * r;
		float y = ofGetHeight() / 2 + sin(i) * r;
		line.addVertex(ofVec3f(x, y, 0));
		i += 0.005*HALF_PI*0.5;
	}
	line.close();

	/*
	
	
	
	// Create single cross

	float offset = mouseY;
	ofSeedRandom(mouseX);
	ofSetColor(0);
	ofNoFill();
	
	// Cross
	ofBeginShape();
	ofVertex(200, 200);
	ofVertex(250, 200 + ofRandom(-offset, offset));
	ofVertex(300, 200);
	ofEndShape(true);
	
	ofBeginShape();
	ofVertex(200 + ofRandom(-offset, offset), 400);
	ofVertex(200 - ofRandom(-offset, offset), 100);
	ofEndShape();
	*/

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
