#include"gameRole.h"
#include"care_taker.h"
int main()
{
	GameRole* andysu = new GameRole();
	andysu->getInitState();  
	andysu->stateDisplay();


	RoleStateCaretaker* stateAdmin = new RoleStateCaretaker();
	stateAdmin->setRoleStateMemento(andysu->saveState());

	cout << "after fight BOSS's state" << endl;

	andysu->fight();
	andysu->stateDisplay();
	
	cout << "recovery state" << endl;

	andysu->recoveryState(stateAdmin->getMemento());
	andysu->stateDisplay();
	return 0;
}