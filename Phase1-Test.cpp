#include "GUI\Input.h"
#include "GUI\Output.h"

//This is a test code to test the Input and Output classes
//Peter Ashraf
//Omar Elzahar 
//Hussein Elhawary 
//Youssef Zaki  
int main()
{
	 
	Point P;

	//Create Input and Output objects to test
	Output *pOut = new Output();;
	Input *pIn = pOut->CreateInput();

	//Starting the test
	pOut->PrintMessage("This demo is to test input and output classes, Click anywhere to start the test");
	pIn->GetPointClicked(P);	//Wait for any click


	//pIn->GetValue(pOut);

	///////////////////////////////////////////////////////////////////////////////////
	// TEST 1:	Create The FULL Tool bar, the drawing area and the status bar		 //
	//			This has already been done through the constrcutor of class Output	 //
	///////////////////////////////////////////////////////////////////////////////////

	pOut->PrintMessage("TEST1: Drawing Tool bar and Status bar, Click anywhere to continue");
	pIn->GetPointClicked(P);	//Wait for any click

	
	///////////////////////////////////////////////////////////////////////////////////
	// TEST 2:	Drawing all the Statements with all possible states:				 //
	//			Normal, highlighted, empty, filled with code						 //
	//			Also drawing connectors												 //
	///////////////////////////////////////////////////////////////////////////////////
	
	pOut->PrintMessage("TEST2: Now we will show that Output class can draw any statement in any status, Click anywhere to continue");
	pIn->GetPointClicked(P);	//Wait for any click

	/// 2.1- Assignment statement test
	//Drawing assignment statements in all posible states
	
	pOut->PrintMessage("Drawing Simple Assignment statements, Click to continue");
	
	//Drawing empty assignment statement
	P.x = 100;	P.y = 100;
	pOut->DrawAssign(P,UI.ASSGN_WDTH, UI.ASSGN_HI, " = ");

	//Drawing a resized empty assignment statement
	P.x = 100;	P.y = 200;
	pOut->DrawAssign(P,80, UI.ASSGN_HI, " = ");

	//Drawing edited (non-empty) assignment statement
	P.x = 100;	P.y = 300;
	pOut->DrawAssign(P,UI.ASSGN_WDTH, UI.ASSGN_HI, "Salary = 3000");

	//Drawing highlighted assignment statement
	P.x = 100;	P.y = 400;
	pOut->DrawAssign(P, UI.ASSGN_WDTH, UI.ASSGN_HI," ", true);
	

	pIn->GetPointClicked(P);	//Wait for any click
	pOut->ClearDrawArea();

	///2.2- Variable assignment & single operator assignment
	pOut->PrintMessage("Drawing other Assignment statements, Click to continue");

	//TODO: Add code to draw other types of assignment statements here
	//Drawing empty assignment statement
	P.x = 100;	P.y = 100;
	pOut->DrawAssign(P, UI.ASSGN_WDTH, UI.ASSGN_HI, "x = y");

	//Drawing a resized empty assignment statement
	P.x = 100;	P.y = 200;
	pOut->DrawAssign(P, 80, UI.ASSGN_HI, "x = y + z ");

	//Drawing edited (non-empty) assignment statement
	P.x = 100;	P.y = 300;
	pOut->DrawAssign(P, UI.ASSGN_WDTH, UI.ASSGN_HI, "A = A - 1");

	//Drawing highlighted assignment statement
	P.x = 100;	P.y = 400;
	pOut->DrawAssign(P, UI.ASSGN_WDTH, UI.ASSGN_HI, "x = 2 / y ", true);

	pIn->GetPointClicked(P);	//Wait for any click
	pOut->ClearDrawArea();

	/// 2.3- Conditional statement test
	//Drawing Conditional statements in all posible states
	pOut->PrintMessage("Drawing Conditional Statement, Click to continue");
	
	//TODO: Add code to draw different Conditional statements here
	P.x = 100;	P.y = 100;
	pOut->DrawCondtionalStat(P, UI.ASSGN_WDTH, UI.ASSGN_HI, "  = ");
	P.x = 100;	P.y = 200;
	pOut->DrawCondtionalStat(P, UI.ASSGN_WDTH, UI.ASSGN_HI, "salary < 3000");
	P.x = 100;	P.y = 300;
	pOut->DrawCondtionalStat(P, 90 , UI.ASSGN_HI, "");
	P.x = 100;	P.y = 400;
	pOut->DrawCondtionalStat(P, UI.ASSGN_WDTH , UI.ASSGN_HI, "x > y",true);
	
	pIn->GetPointClicked(P);	//Wait for any click
	pOut->ClearDrawArea();

	/// 2.4- Read statement test
	//Drawing Read statements in all posible states
	//TODO: Add code to draw different Read statements here
	pOut->PrintMessage("Drawing Read Statement, Click to continue");
	P.x = 100;	P.y = 100;
	pOut->DrawRead(P, UI.ASSGN_WDTH, UI.ASSGN_HI, "price");
	P.x = 100;	P.y = 200;
	pOut->DrawRead(P, 70, 100, "price2");
	P.x = 100;	P.y = 400;
	pOut->DrawRead(P, UI.ASSGN_WDTH, UI.ASSGN_HI, "Selected Price",1);
	
	
	pIn->GetPointClicked(P);	//Wait for any click
	pOut->ClearDrawArea();

	/// 2.5- Write statement test
	//Drawing Write statements in all posible states
	//TODO: Add code to draw different Write statements here
	pOut->PrintMessage("Drawing Write Statement, Click to continue");
	P.x = 100;	P.y = 150;
	pOut->DrawWrite(P, UI.ASSGN_WDTH, UI.ASSGN_HI, "Total");
	P.x = 100;	P.y = 300;
	pOut->DrawWrite(P, 100, 100, "Total2");
	P.x = 100;	P.y = 500;
	pOut->DrawWrite(P, UI.ASSGN_WDTH, UI.ASSGN_HI, "Selected Total", 1);

	
	pIn->GetPointClicked(P);	//Wait for any click
	pOut->ClearDrawArea();


	/// 2.6- Start & End statements test
	//Drawing Start & End statements in all posible states
	pOut->PrintMessage("Drawing Start & End Statements, Click to continue");
	
	//TODO: Add code to draw different Start & End statements here
	P.x = 100;	P.y = 100;
	pOut->DrawStart(P, UI.ASSGN_WDTH, UI.ASSGN_HI, false);
	P.x = 100;	P.y = 300;
	pOut->DrawEnd(P, UI.ASSGN_WDTH, UI.ASSGN_HI, false);
	pIn->GetPointClicked(P);	//Wait for any click
	pOut->ClearDrawArea();


	/// 2.7- Connector test
	//Drawing Connector in all posible states
	//TODO: Add code to draw different Connectors here

	pOut->PrintMessage("Drawing Connector, Click to continue");
	Point Q;
	P.x = 50;
	Q.x = P.x ;
	Q.y = P.y + 100;
	pOut->DrawConnector(P, Q, false);

	P.x = 800;
	Q.x = P.x;
	Q.y = P.y + 100;
	pOut->DrawConnector(Q, P, false);

	P.x = 300;
	P.y = 300;

	Q.x = P.x +100;
	Q.y +=100;
	pOut->DrawConnector(Q, P, false);

	P.x = 100;
	P.y = 400;

	Q.x = P.x+200;
	Q.y = P.y;
	pOut->DrawConnector(P, Q, false);

	P.x = 550;
	P.y = 260;

	Q.x +=400;
	Q.y = P.y + 100;
	pOut->DrawConnector(P, Q, false);
	
	P.x = 100;
	P.y = 400;

	Q.x = P.x + 200;
	Q.y = P.y;
	pOut->DrawConnector(P, Q, false);
	
	P.x = 430;
	P.y = 190;

	Q.x += 40;
	Q.y = P.y + 50;
	pOut->DrawConnector(P, Q, false);
	
	
	
	pIn->GetPointClicked(P);	//Wait for any click
	pOut->ClearDrawArea();


	///////////////////////////////////////////////////////////////////////////////////
	// TEST 3: Read strings and a value from the user
	///////////////////////////////////////////////////////////////////////////////////
	pOut->PrintMessage("TEST3: Now Time to test class Input, Click anywhere to continue");
	pIn->GetPointClicked(P);	//Wait for any click
	
	pOut->PrintMessage("Testing Input ability to read strings and values");

	//TODO: Add code here to 
	// 1- Read a string from the user and print it
	string out=pIn->GetString(pOut);
	P.x = 100;	P.y = 100;
	pOut->DrawWrite(P, UI.ASSGN_WDTH, UI.ASSGN_HI, out, false);
	
	// 2- Read a double value from the user and print it
	double dummy;
	dummy = pIn->GetValue(pOut);
	P.x = 100;	P.y = 400;
	pOut->DrawWrite(P, UI.ASSGN_WDTH, UI.ASSGN_HI, to_string(dummy), true);

	pIn->GetPointClicked(P);	//Wait for any click
	pOut->ClearDrawArea();

	///////////////////////////////////////////////////////////////////////////////////
	// TEST 4: Check for the user action											 //
	///////////////////////////////////////////////////////////////////////////////////
	pOut->PrintMessage("TEST4: Testing Input ability to detect User Action, click anywhere");

	ActionType ActType;
	
	//TODO:  You must add a case for each action
	do
	{
		ActType = pIn->GetUserAction();

		switch (ActType)
		{
			case ADD_SMPL_ASSIGN:
				pOut->PrintMessage("Action: add assignment statement , Click anywhere");
				 pIn->GetPointClicked(P);
				pOut->DrawAssign(P, UI.ASSGN_WDTH, UI.ASSGN_HI,pIn->GetString(pOut));
				break;

			case START:
				pOut->PrintMessage("Action: add start, Click anywhere");
				pIn->GetPointClicked(P);
				pOut->DrawStart(P, UI.ASSGN_WDTH, UI.ASSGN_HI);
				break;

			case END:
				pOut->PrintMessage("Action: add end, Click anywhere");
				pIn->GetPointClicked(P);
				pOut->DrawEnd(P, UI.ASSGN_WDTH, UI.ASSGN_HI);
				break;

			case READ:
				pOut->PrintMessage("Action: add read, Click anywhere");
				pIn->GetPointClicked(P);
				pOut->DrawRead(P, UI.ASSGN_WDTH, UI.ASSGN_HI,pIn->GetString(pOut));
				break;

			case WRITE:
				pOut->PrintMessage("Action: add write, Click anywhere");
				pIn->GetPointClicked(P);
				pOut->DrawWrite(P, UI.ASSGN_WDTH, UI.ASSGN_HI, pIn->GetString(pOut));
				break;


			case ADD_CONDITION:
				pOut->PrintMessage("Action: add conditional statement , Click anywhere");
				pIn->GetPointClicked(P);
				pOut->DrawCondtionalStat(P, UI.ASSGN_WDTH, UI.ASSGN_HI, pIn->GetString(pOut));
				break;

			case ADD_CONNECTOR:
				pOut->PrintMessage("Action: add a connector , Click twice to connect 2 points");
				pIn->GetPointClicked(P);
				pIn->GetPointClicked(Q);
				pOut->DrawConnector(P,Q,0);
				break;

			case SELECT:
				pOut->PrintMessage("Action: a click on the Drawing area, Click anywhere");
				break;
			
			case STATUS:
				pOut->PrintMessage("Action: a click on the Status Bar, Click anywhere");
				break;
 
			case DSN_TOOL:
				pOut->PrintMessage("Action: a click on the Design Tool Bar, Click anywhere");
				break;

			case SIM_MODE:
				pOut->PrintMessage("Action: Switch to Simulation Mode, creating simualtion tool bar");
				pOut->CreateSimulationToolBar();
				break;

			case DSN_MODE:
				pOut->PrintMessage("Action: Switch to Design Mode, creating Design tool bar");
				pOut->CreateDesignToolBar();
				break;


			case EXIT:				
				break;
		}
	}while(ActType != EXIT);


	/// Exiting
	pOut->PrintMessage("Action: EXIT, test is finished, click anywhere to exit");
	pIn->GetPointClicked(P);


	delete pIn;
	delete pOut;	
	return 0;
}


