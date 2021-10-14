#pragma once

class Slider01LookAndFeel : public LookAndFeel_V4
{
    
public:
    
    void drawRotarySlider (Graphics &g,
                           int x,
                           int y,
                           int width,
                           int height,
                           float sliderPos,
                           float rotaryStartAngle,
                           float rotaryEndAngle,
                           Slider &slider)
    {
        float diameter = jmin(width, height);
        float radius = diameter / 2;
        float centreX = x + width / 2;
        float centreY = y + height / 2;
        float rx = centreX - radius;
        float ry = centreY - radius;
        float angle = rotaryStartAngle + (sliderPos * (rotaryEndAngle - rotaryStartAngle));
        
        Rectangle<float> dialArea (rx, ry, diameter, diameter);
        
        g.setColour(Colours::black);
        g.fillEllipse(dialArea);
        
        g.setColour(Colours::white);
        
        Path dialTick;
        dialTick.addRectangle(0, -radius, 10.0f, radius * 0.75);
        
        g.fillPath(dialTick, AffineTransform::rotation(angle).translated(centreX, centreY));
    }
    
};
