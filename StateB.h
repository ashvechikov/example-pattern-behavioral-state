#pragma once

#include <string>
#include "BaseState.h"
using namespace std;

class StateB:public BaseState
{
public:
	StateB();
	~StateB();
	// �������� ��������� �� ������
	void Handle(Context* context);
	string GetNameOfState() const;
};

