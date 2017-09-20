#pragma once

// Deals wityh cells in the pad, their location and colour
class PadModel
{
public:
	PadModel() {}
	virtual ~PadModel() {}

	virtual int getNoteCount() = 0;
};

