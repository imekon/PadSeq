/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PadComponent.h"

//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainComponent : public Component
{
public:
    //==============================================================================
    MainComponent();
    ~MainComponent();

    void paint (Graphics&) override;
    void resized() override;

private:
    //==============================================================================
	const int topMargin = 30;

	ScopedPointer<PadComponent> padComponent;
	ScopedPointer<Button> newButton;
	ScopedPointer<Button> loadButton;
	ScopedPointer<Button> saveButton;
	ScopedPointer<Label> label1;
	ScopedPointer<ComboBox> modeList;
	ScopedPointer<Label> label2;
	ScopedPointer<ComboBox> scaleList;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
