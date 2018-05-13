#pragma once

#include "NoTargetItem.h"

class QTimer;

namespace qge{

class RainOfSpearsAbility;

class ItemRainOfSpears : public NoTargetItem
{
public:
    ItemRainOfSpears();

    virtual void use_();
public slots:
    RainOfSpearsAbility* ability_;
};

}
