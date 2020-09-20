#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	font.load("framd.ttf", 300, true, true, true);
	colors = new ofColor[3];
	
	colors[0] = ofColor(207, 92, 29); // RED
	colors[1] = ofColor(244, 208, 1); // Yellow
	colors[2] = ofColor(76, 156, 57); // GREEN
	colors[3] = ofColor(42, 117, 175); // Blue
	colors[4] = ofColor(192, 120, 128); // Pink
	colors[5] = ofColor(244, 208, 1); // Yellow
	colors[6] = ofColor(76, 156, 57); // GREEN
	colors[7] = ofColor(42, 117, 175); // Blue
	colors[8] = ofColor(192, 120, 128); // Pink
	colors[9] = ofColor(207, 92, 29); // RED
	colors[10] = ofColor(42, 117, 175); // Blue

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(233, 235, 221);

	vector <ofPath> paths = font.getStringAsPoints("MITMEDIALAB");
	
	//ofSetColor(255, 255, 0, 100);
	ofTranslate(200, 500);
	for (int i = 0; i < paths.size(); i++) {
		// iterate through all letters
		paths[i].setPolyWindingMode(OF_POLY_WINDING_ODD);
		vector <ofPolyline> lines = paths[i].getOutline();
		vector <ofPolyline> b_lines = paths[i].getOutline();

		for (int j = 0; j < lines.size(); j++) {
			
			lines[j].setClosed(true);
			
			lines[j] = lines[j].getResampledBySpacing(3);
			b_lines[j] = b_lines[j].getResampledBySpacing(3);

			lines[j] = lines[j].getSmoothed(mouseX*0.1*i);


			ofBeginShape();
			//ofSetColor(colors[(int)ofRandom(0, 4)], 3);
			ofSetColor(colors[i], 3);
			
			for (int k = 0; k < lines[j].size(); k++) {
				
				// See openframeworks books, Graphics Example, Brush
				int maxRadius = 30;  
				int radiusStepSize = 5;  // Decrease for more circles (i.e. a more opaque brush)
				int maxOffsetDistance = i*(mouseY/10);  // test 1: 100// Increase for a larger spread of circles
				// draw smaller and smaller circles and layering (increasing) opaqueness
				//fSetColor(244, 208, 1, alpha);
				for (int radius = maxRadius; radius > 0; radius -= radiusStepSize) {
					float angle = ofRandom(ofDegToRad(360.0));
					float distance = ofRandom(maxOffsetDistance);
					float xOffset = cos(angle) * distance;
					float yOffset = sin(angle) * distance;
					
					ofDrawCircle(lines[j][k].x + xOffset - 100*i, lines[j][k].y + yOffset, radius);
				}
			}

			ofEndShape();
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
