#pragma once
#include "Actions\Action.h"

//Add Ellipse Action class
class AddEllipseAction: public Action
{
private:
	Point P1; //Ellipse center
	GfxInfo EllipseGfxInfo;
public:
	AddEllipseAction(ApplicationManager *pApp);

	//Reads Ellipse parameters
	virtual void ReadActionParameters();
	
	//Add Ellipse to the ApplicationManager
	virtual void Execute() ;

	
};

