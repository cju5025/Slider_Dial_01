#pragma once

#include <JuceHeader.h>
#include "Slider01LookAndFeel.h"

class MainComponent  : public juce::Component
{
public:

    MainComponent();
    ~MainComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    
    Slider mDial;
    Slider01LookAndFeel mSlider01LookAndFeel;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
