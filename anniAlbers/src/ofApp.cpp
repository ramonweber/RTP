#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	int resolution = 200;
	
	ofBackground(234,235,221); //background washed yellow
	
	// Scatters Rectangles

	for (int k = 0; k < 10; k++) {
		int randomX = ofRandom(0, 450);
		int randomY = ofRandom(0, 450);
		int randomH = ofRandom(20, 100);
		ofSetColor(60, 23, 7);
		ofDrawRectangle(150 + randomX, 150 + randomY, 8, randomH);
	}

	
	// Draws Weave 

	for (int i = 0; i < resolution; i++) {

		
		int randomNumber = ofRandom(0, 4);
		int offset = i % 4;
		if (offset > randomNumber) {
			offset = 12 - offset;
		}

		for (int j = 0; j < resolution/2; j++) {
			int widthOfWhite = 4;
			int widthOfRed = 2; 
			if ((j + offset) % widthOfWhite < widthOfRed) { 
				ofSetColor(145, 12, 23,240); // RED
				ofDrawCircle(j * 3 + 100, i * 3 + 100, 2 );
			}
			else {
				ofSetColor(145, 12, 23, 50); // Light RED with Alpha
				ofDrawCircle(j * 3 + 100, i * 3  + 100, 3 );
			}

		}

		int randomNumber2 = ofRandom(0, 12);
		int offset2 = i % 4;
		if (offset2 > randomNumber2) {
			offset2 = 12 - offset2;
		}

		for (int j = (resolution/2); j < resolution; j++) {
			int widthOfWhite = 4;
			int widthOfRed = 2;
			if ((j + offset2) % widthOfWhite < widthOfRed) {
				ofSetColor(145, 12, 23,240); // RED
				ofDrawCircle(j * 3 + 100, i * 3 + 100, 2);
			}
			else {
				ofSetColor(145, 12, 23, 50); // Light RED with Alpha
				ofDrawCircle(j * 3 + 100, i * 3 + 100, 3);
			}
		}

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
