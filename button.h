#ifndef button_h  //ifndef and define make sure that you dont use library twice
#define button_h
#include "Arduino.h"  //Arduino.h means include all the arduino functions such as pinmode,HIGH,LOW ETC..

class button{    //Making a  class
    public:   // 'public:' and 'private:' refer to the security of the functions and variables listed in that set. Contents that are public can be 
	                                               //	accessed from a sketch for use, however private contents can only be
	                                               //	accessed from within the class itself.
    button(int pinone,int pintwo,int state);//pinone is button pin and pintwo is ledpin and state is the state ofmthe pusbutton(HIGH or LOW)

    void work();                 //Where the code works

    private:
    int _pinone, _pintwo,_state;

};

#endif  //ending the library
