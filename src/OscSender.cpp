//
//  OscSender.cpp
//  ofxMSAControlFreak example-tutorial
//
//  Created by Memo Akten on 10/02/2013.
//
//

#include "ofxMSAControlFreakOsc/src/OscSender.h"


namespace msa {
    namespace controlfreak {
        namespace osc {
            
            //--------------------------------------------------------------
            void Sender::setup(string hostaddress, int port) {
                oscSender.setup(hostaddress, port);
            }
            
            //--------------------------------------------------------------
            void Sender::update() {
                ofxOscBundle b;
                for(int i=0; i<controllers.size(); i++) {
                    osc::Controller *controller = static_cast<osc::Controller*>(controllers[i]);
                    if(controller && controller->shouldUpdate()) {
                        ofxOscMessage m;
                        m.setAddress(controller->address);
                        float f = controller->bNormalized ? controller->param->getNormalized() : (float)controller->param->value();
                        m.addFloatArg(f);
                        b.addMessage(m);
                    }
                }
                if(b.getBundleCount() > 0) oscSender.sendBundle(b);
            }
            
            //--------------------------------------------------------------
            void Sender::add(Parameter *p, bool bOnlyUpdateOnChange, string address, bool bNormalized) {
                
            }


        }
    }
}
