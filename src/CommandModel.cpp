#include "CommandModel.h"


bool CommandModel::isReady()
{
	return true;
}

void CommandModel::execute()
{
	this->redo();
}

bool CommandModel::addToStack()
{
	return true;
}
