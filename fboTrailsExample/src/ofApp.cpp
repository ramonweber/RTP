#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(0,0,0);
	ofSetFrameRate(60);

	//allocate our fbos.
	//providing the dimensions and the format for the,
	rgbaFbo.allocate(800, 800, GL_RGBA); // with alpha, 8 bits red, 8 bits green, 8 bits blue, 8 bits alpha, from 0 to 255 in 256 steps

	#ifdef TARGET_OPENGLES
	rgbaFboFloat.allocate(400, 400, GL_RGBA ); // with alpha, 8 bits red, 8 bits green, 8 bits blue, 8 bits alpha, from 0 to 255 in 256 steps
        ofLogWarning("ofApp") << "GL_RGBA32F_ARB is not available for OPENGLES.  Using RGBA.";
	#else
        rgbaFboFloat.allocate(800, 800, GL_RGBA32F_ARB); // with alpha, 32 bits red, 32 bits green, 32 bits blue, 32 bits alpha, from 0 to 1 in 'infinite' steps
	#endif

	// we can also define the fbo with ofFboSettings.
	// this allows us so set more advanced options the width (400), the height (200) and the internal format like this
	/*
	 ofFboSettings s;
	 s.width			= 400;
	 s.height			= 200;
	 s.internalformat   = GL_RGBA;
	 s.useDepth			= true;
	 // and assigning this values to the fbo like this:
	 rgbaFbo.allocate(s);
	 */


    // we have to clear all the fbos so that we don't see any artefacts
	// the clearing color does not matter here, as the alpha value is 0, that means the fbo is cleared from all colors
	// whenever we want to draw/update something inside the fbo, we have to write that inbetween fbo.begin() and fbo.end()

    rgbaFbo.begin();
	ofClear(255,255,255, 0);
    rgbaFbo.end();

	rgbaFboFloat.begin();
	ofClear(255,255,255, 0);
    rgbaFboFloat.end();

}

//--------------------------------------------------------------
void ofApp::update(){

    ofEnableAlphaBlending();

	//lets draw some graphics into our two fbos
    rgbaFbo.begin();
		drawFboTest();
    rgbaFbo.end();

    rgbaFboFloat.begin();
		drawFboTest();
	rgbaFboFloat.end();

}

//--------------------------------------------------------------
void ofApp::drawFboTest(){
	//we clear the fbo if c is pressed.
	//this completely clears the buffer so you won't see any trails
	if( ofGetKeyPressed('c') ){
		ofClear(255,255,255, 0);
	}

	//some different alpha values for fading the fbo
	//the lower the number, the longer the trails will take to fade away.
	fadeAmnt = 40;
	if(ofGetKeyPressed('1')){
		fadeAmnt = 1;
	}else if(ofGetKeyPressed('2')){
		fadeAmnt = 5;
	}else if(ofGetKeyPressed('3')){
		fadeAmnt = 15;
	}

	//1 - Fade Fbo

	//this is where we fade the fbo
	//by drawing a rectangle the size of the fbo with a small alpha value, we can slowly fade the current contents of the fbo.
	ofFill();
	//ofSetColor(0, 0, 0, fadeAmnt);
	ofSetColor(255,255,255, fadeAmnt);
	ofDrawRectangle(0,0,800,800);

	//2 - Draw graphics


	//ofBackground(255, 255, 255);
	//ofSetColor(0, 0, 0, 40);
	//ofSetColor(200, 255, 255);
	ofSetColor(170, 146, 49);
	ofSetRectMode(OF_RECTMODE_CENTER);
	ofEnableAlphaBlending();

	int numRect = 36;
	ofSeedRandom(mouseX);

	for (int i = 0; i < numRect; i++) {
		// Remap int value to screenspace
		float x = ofMap(i, 0, numRect, 20, 780);
		int rectw = 1; //def 20
		// Top Rectangles
		ofSetColor(170, 146, 49);
		ofDrawRectangle(x + ofRandom(0, 20)-10, 0, rectw, 400 + ofRandom(0, mouseY)); //500

		ofSetColor(255-170, 255-146, 255-49);
		// Bottom Rectangles
		ofDrawRectangle(x + ofRandom(0, 20)-10, 800, rectw, -(400 + ofRandom(0, mouseY))); // 500
	}

}

//--------------------------------------------------------------
void ofApp::draw(){

	rgbaFboFloat.draw(0, 0);

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
