#ifndef COMMANDMODEL_H
#define COMMANDMODEL_H

#include <QUndoCommand>


class QVTKFramebufferObjectRenderer;

class CommandModel : public QUndoCommand
{
public:
	CommandModel(){}
	virtual ~CommandModel(){}

	virtual bool isReady();
	virtual void execute();
	virtual bool addToStack();

protected:
	QVTKFramebufferObjectRenderer *m_vtkFboRenderer;
};

#endif // COMMANDMODEL_H
