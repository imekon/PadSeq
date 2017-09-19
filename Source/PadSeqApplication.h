#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "MainWindow.h"

//==============================================================================
class PadSeqApplication : public JUCEApplication
{
public:
	//==============================================================================
	PadSeqApplication() {}

	const String getApplicationName() override { return ProjectInfo::projectName; }
	const String getApplicationVersion() override { return ProjectInfo::versionString; }
	bool moreThanOneInstanceAllowed() override { return true; }

	//==============================================================================
	void initialise(const String& commandLine) override;
	void shutdown() override;

	//==============================================================================
	void systemRequestedQuit() override;
	void anotherInstanceStarted(const String& commandLine) override;

private:
	ScopedPointer<MainWindow> mainWindow;
};

