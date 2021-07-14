#include "ofApp.h"
#include "ofAppRunner.h"
#include "ofMath.h"
#include <algorithm>

//--------------------------------------------------------------
void ofApp::setup() {
  ofBackground(255);
  ofSetFrameRate(60);
  for (int i = 0; i < 100; i++) {
    float x = ofMap(ofRandom(0, 1), 0, 1, 0, ofGetWidth());
    float y = ofMap(ofRandom(0, 1), 0, 1, 0, ofGetHeight());
    circles.push_back(glm::vec2(x, y));
  }
}

//--------------------------------------------------------------
void ofApp::update() {
  for (auto& circle : circles) {
    circle.x += 10;
    circle.y += ofRandom(-10, 10);
    if (circle.x - 50 > ofGetWidth()) {
      circle.x = -50;
    }
  }
}

//--------------------------------------------------------------
void ofApp::draw() {
  ofSetColor(0, 0, 0);
  for (auto circle : circles) {
    ofDrawCircle(circle.x, circle.y, 10);
  }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {}
