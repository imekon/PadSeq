#include "PadComponent.h"

PadComponent::PadComponent() : padModel(nullptr)
{
}

void PadComponent::paint(Graphics &g)
{
	g.setColour(Colours::white);

	g.setColour(Colours::grey);

	for (int i = 0; i < 4; i++)
	{
		g.drawRect(cellGap + i * (cellSize + cellGap), cellGap, cellSize, cellSize);
	}

	for (int note = 0; note < 16; note++)
	{
		for (int bar = 0; bar < 16; bar++)
		{
			g.drawRect(cellGap + bar * (cellSize + cellGap), cellGap + (note + 1) * (cellSize + cellGap), cellSize, cellSize);
		}
	}
}

void PadComponent::resized()
{
}

void PadComponent::setPadModel(PadModel* padModel)
{
	this->padModel = padModel;
}

void PadComponent::mouseDown(const MouseEvent& event)
{
}

