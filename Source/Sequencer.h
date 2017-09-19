#pragma once

class Sequencer
{
public:
	Sequencer();

	int getBar() const { return bar; }
	void setBar(int bar);

private:
	int bar;
};
