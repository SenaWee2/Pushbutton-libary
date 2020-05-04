#include "Arduino.h"  //include earduino functions
#include "button.h"  //include the previous file button.h

button::button(int pinone,int pintwo,int state){
    pinMode(pinone, INPUT_PULLUP);//pinmode
	pinMode(pintwo, OUTPUT);

    _pinone = pinone; //making the private variables equal to the public
	_pintwo = pintwo;
	_state = state;
}

void button::work(){                   //the code
     _state = digitalRead(_pinone);
     if (_state == LOW) {
    
    digitalWrite(_pintwo, HIGH);
  } else {
    
    digitalWrite(_pintwo, LOW);
  }

}
