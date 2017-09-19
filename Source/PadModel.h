#pragma once

class PadModel
{
public:
	PadModel() {}
	virtual ~PadModel() {}

	virtual int getBarCount() = 0;
	virtual int getNoteCount() = 0;
};

