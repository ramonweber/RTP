#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	gui.setup();
	gui.add(var_i_gui.setup("i", 0, -10, 10));
	gui.add(var_j_gui.setup("j",0.99, 0.9, 1.1));
}

//--------------------------------------------------------------
void ofApp::update(){
	
}

//--------------------------------------------------------------
void ofApp::draw(){
	
	float adder = 0.15;
	time += adder;

	ofBackground(255);

	ofSetColor(107,130,174);
	float xorig = 400;
	float yorig = 400;
	float radius = 200 - time;
	float angle = time;

	float x = xorig*0.9 + radius * cos(angle*var_j_gui);// (1 + ofMap(sin(ofGetElapsedTimef()), -1, 1, 0.01, 0.15)); // (1+ofMap(sin(ofGetElapsedTimef()), -1, 1, 0.01, 0.15)); x = xorig + radius * sin(1-time) * cos(angle);
	float y = yorig + radius * sin(angle);

	trail.addVertex(x, y);
	trail.draw();

	if (trail.size() > 5000) {
		trail.getVertices().erase(trail.getVertices().begin());
	}

	ofDrawCircle(x, y, 5);
	gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == ' ') {
		trail.clear();
		time = 0;
	}
	if (key == 'w') {
		var_i+= 0.01;
	}
	if (key == 's') {
		var_i-= 0.01;
	}

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
