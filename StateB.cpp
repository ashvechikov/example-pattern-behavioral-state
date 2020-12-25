#include "StateB.h"
#include "StateA.h"
#include "Context.h"
#include <iostream>

StateB::StateB()
{
}


StateB::~StateB()
{
}

// �������� ��������� �� ������
void StateB::Handle(Context* context) {
	cout << GetNameOfState().c_str()<<endl;
	context->SetState(new StateA());

}

string StateB::GetNameOfState() const
{
	return "StateB";
}
