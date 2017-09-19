/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"


//==============================================================================
MainComponent::MainComponent()
{
    setSize (800, 768);

	newButton = new TextButton("new");
	newButton->setBounds(10, 10, 70, 22);
	newButton->setButtonText("New");
	addAndMakeVisible(newButton);

	loadButton = new TextButton("load");
	loadButton->setBounds(90, 10, 70, 22);
	loadButton->setButtonText("Load...");
	addAndMakeVisible(loadButton);

	saveButton = new TextButton("save");
	saveButton->setBounds(170, 10, 70, 22);
	saveButton->setButtonText("Save...");
	addAndMakeVisible(saveButton);

	label1 = new Label("label1", "Mode");
	label1->setBounds(250, 10, 70, 22);
	addAndMakeVisible(label1);

	modeList = new ComboBox("modeList");
	modeList->setBounds(300, 10, 100, 22);
	modeList->addItem("Major", 1);
	modeList->addItem("Minor", 2);
	addAndMakeVisible(modeList);

	label2 = new Label("label2", "Scale");
	label2->setBounds(410, 10, 70, 22);
	addAndMakeVisible(label2);

	static const char *scaleNames[12] = { "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B" };
	scaleList = new ComboBox("scaleList");
	scaleList->setBounds(460, 10, 70, 22);
	for(int i = 0; i < 12; i++)
	{
		scaleList->addItem(scaleNames[i], i + 1);
	}
	addAndMakeVisible(scaleList);

	padComponent = new PadComponent();
	padComponent->setBounds(0, topMargin, getWidth(), getHeight() - topMargin);
	addAndMakeVisible(padComponent);
}

MainComponent::~MainComponent()
{
}

void MainComponent::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));
}

void MainComponent::resized()
{
	if (padComponent)
		padComponent->setBounds(0, topMargin, getWidth(), getHeight() - topMargin);
}
