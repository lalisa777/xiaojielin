#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    myImage.load("pic.jpg");
    width = myImage.getWidth();
    height = myImage.getHeight();
}

//--------------------------------------------------------------
void ofApp::update(){
    
    myPixls.allocate(width,height,OF_IMAGE_COLOR);
    
    pix = myImage.getPixels();
    
    for(int i = 0; i < width * height * 3; i++)
    {
        if(pix[i] < mouseX)
        {
            myPixls[i] = 255-pix[i];
        }
        else
        {
            myPixls[i]=0;
        }
    }
    myTexture.allocate(myPixls);
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    myImage.draw(width,0);
    myTexture.draw(0,0);


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
