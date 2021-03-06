#include "PadSeqApplication.h"
#include "MainWindow.h"

void PadSeqApplication::initialise(const String& commandLine)
{
	// This method is where you should put your application's initialisation code..

	mainWindow = new MainWindow(getApplicationName());
}

void PadSeqApplication::shutdown()
{
	// Add your application's shutdown code here..

	mainWindow = nullptr; // (deletes our window)
}

void PadSeqApplication::systemRequestedQuit()
{
	// This is called when the app is being asked to quit: you can ignore this
	// request and let the app carry on running, or call quit() to allow the app to close.
	quit();
}

void PadSeqApplication::anotherInstanceStarted(const String& commandLine)
{
	// When another instance of the app is launched while this one is running,
	// this method is invoked, and the commandLine parameter tells you what
	// the other instance's command-line arguments were.
}
