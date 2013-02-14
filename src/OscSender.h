
#pragma once

#include "ofxMSAControlFreakOsc/src/OscController.h"

namespace msa {
    namespace controlfreak {
        namespace osc {
            
            class Sender : public ControllerManagerBase {
            public:
                void setup(string hostaddress, int port);
                void update();
                
                void add(Parameter *p, bool bOnlyUpdateOnChange, string address, bool bNormalized);
                
            protected:
                ofxOscSender oscSender;
            };
            
        }
    }
}