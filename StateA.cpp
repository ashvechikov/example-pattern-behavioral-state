#include "StateA.h"
#include"StateB.h"
#include "Context.h"
#include <iostream>

StateA::StateA()
{
}


StateA::~StateA()
{
}

// �������� ��������� �� ������
void StateA::Handle(Context* context) {
	cout << GetNameOfState().c_str()<<endl;
	context->SetState(new StateB());

}
string StateA::GetNameOfState() const
{
	return "StateA";
}
