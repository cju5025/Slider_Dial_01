#include "MainComponent.h"

MainComponent::MainComponent()
{
    setSize (500, 500);
    
    // TODO: add a text box later, or is that possible in the main plugin?
    
    addAndMakeVisible(mDial);
    mDial.setSliderStyle(Slider::SliderStyle::RotaryHorizontalVerticalDrag);
    mDial.setTextBoxStyle(Slider::NoTextBox, false, 0, 0);
    mDial.setLookAndFeel(&mSlider01LookAndFeel);
}

MainComponent::~MainComponent()
{
}

void MainComponent::paint (juce::Graphics& g)
{
    g.fillAll(Colours::white);
}

void MainComponent::resized()
{
    mDial.setBounds(getLocalBounds());
}
