#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	// Based on Artwork by Vera Molnar, Certains se chevauchant 1987
	// WEB URL http://www.veramolnar.com/diapo.php?y=1987

	ofBackground(255, 255, 255);
	ofSetColor(170,146,49,200);
	ofSetRectMode(OF_RECTMODE_CENTER);
	ofEnableAlphaBlending();

	int numRect = 36;
	ofSeedRandom(mouseX);

	for (int i = 0; i < numRect; i++) {
		// Remap int value to screenspace
		float x = ofMap(i, 0, numRect, 20, 780);

		// Top Rectangles
		ofDrawRectangle(x, 0, 20, 700+ofRandom(0, 200));

		// Bottom Rectangles
		ofDrawRectangle(x, 800, 20, -(700 + ofRandom(0, 200)));
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
