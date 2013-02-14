
#pragma once

#include "ofxMSAControlFreakOsc/src/OscController.h"

namespace msa {
    namespace controlfreak {
        namespace osc {
            
            class Receiver : public ControllerManagerBase {
            public:
                void setup(int port);
                void update();
                
                void add(Parameter *p, bool bOnlyUpdateOnChange, string address, bool bNormalized);
                
            protected:
                ofxOscSender oscSender;
            };
            
        }
    }
}