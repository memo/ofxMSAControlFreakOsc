#pragma once

#include "ofxMSAControlFreak/src/ofxMSAControLFreak.h"
#include "ofxOsc.h"


namespace msa {
    namespace controlfreak {
        
        class OscController {
        public:
            void setup();
            
            void addSender(Parameter *p, string address);
            void addReceiver(Parameter *p, string address);
            
        private:
            ofxOscSender oscSender;
            ofxOscReceiver oscReceiver;
            
        };
        
    }
}