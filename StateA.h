#pragma once
#include "BaseState.h"

class StateA : public BaseState
{
public:
	StateA();
	~StateA();
	
	// �������� ��������� �� ������
	void Handle(Context* context);
	string GetNameOfState() const;
};

