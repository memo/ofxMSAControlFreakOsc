
#pragma once

#include "ofxMSAControlFreak/src/ofxMSAControlFreak.h"
#include "ofxOsc.h"

namespace msa {
    namespace controlfreak {
        namespace osc {
            
            class Controller : public ControllerBase {
            public:
                string address;
                bool bNormalized;
                
                Controller(Parameter *p, bool bOnlyUpdateOnChange, string address, bool bNormalized)
                : ControllerBase(p, bOnlyUpdateOnChange), address(address), bNormalized(bNormalized) {}
            };
        }
    }
}