#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(255, 255, 255);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	// white background
	//ofBackground(255, 255, 255);
	
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
	//ofSeedRandom(mouseX);
	//for (int i = 0; i < 800; i++) {
	//	ofDrawCircle(i, 400 + ofRandom(-100,100), 2);
	//}

	/*for (int i = 0; i < 800; i++) {
		ofDrawCircle(i, 400 + ofSignedNoise(i*0.01, mouseX*0.1)*100, 2);
	}
	float scale = ofMap(mouseX, 0, ofGetWidth(), 0.001, 1);
	for (int i = 0; i < 160; i++) {
		for (int j = 0; j < 160; j++) {
			ofSetColor(ofNoise(i*0.02, j*0.02, mouseX * 0.01) * 255);
			ofDrawRectangle(i * 10, j * 10, 10, 10);
		}
	}*/
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
