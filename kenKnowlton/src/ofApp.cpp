#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	img.load("Knowlton-Ken.jpg");
	img_12.load("12.png");
	img_28.load("28.png");
	img_36.load("36.png");
	img_40.load("40.png");
	img_54.load("54.png");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	
	listOfBrightness.clear();
		
	// Iterate over the list and display numbers
	//ofScale(scale_float, scale_float);
	for (int i = 0; i < img.getWidth(); i += 20) {
		for (int j = 0; j < img.getHeight(); j += 40) {
			ofColor color = img.getColor(i, j);
			float brightness = color.getBrightness();

			float radius = ofMap(brightness, 0, 255, 0, 9);
			radius *= (mouseX/100) ;

			if (radius < 5) {
				img_12.draw(i, j);
			}
			else if (radius >= 5 && radius < 6) {
				img_28.draw(i, j);
			}
			else if (radius >= 6 && radius < 7) {
				
				img_36.draw(i, j);
			}
			else if (radius >= 7 && radius < 8) {
				img_40.draw(i, j);
			}
			else {
				//ofScale(scale_float, scale_float);
				img_54.draw(i, j);
			}


			ofSetColor(255);
			listOfBrightness.push_back(brightness);
		}
	}
	
	//listOfBrightness.sort();
	ofSetColor(255);
	//img.draw(500, 0);

	

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	cout << listOfBrightness.size();
	cout << "values" << endl;
	for (int val : listOfBrightness)
		cout << val << ",";
	cout << endl;
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
