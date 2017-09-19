#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

class PadModel;

class PadComponent : public Component
{
public:
	PadComponent();

	void paint(Graphics&) override;
	void resized() override;
	void setPadModel(PadModel *padModel);
	void mouseDown(const MouseEvent& event) override;

private:
	const int cellSize = 32;
	const int cellGap = 10;

	PadModel *padModel;

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(PadComponent)
};