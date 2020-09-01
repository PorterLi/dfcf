#include "dingvoice.h"

DingVoice::DingVoice(QObject *parent) : QObject(parent)
{
    state = 0;
}

DingVoice::~DingVoice()
{
    if(sound != nullptr){
        delete sound;
    }
}

void DingVoice::dingVoice()
{
    if(state == 0){
        sound = new QSound(":voice/chime");
        sound->play();
    }else{
        sound->play();
    }
}
