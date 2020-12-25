#pragma once
#include "BaseState.h"

// ����� ���������
// ��� ���������� ��������� ����� ��������
class Context
{
	// ���������� ��� ����������� ���������
	BaseState* pCurrent = nullptr;
public:

	Context(BaseState* pTemp)
	{
		pCurrent = pTemp;
	}

	~Context()
	{
		if (pCurrent)
			delete pCurrent;
	}
public:
	// ���������� ���������� ���������
	BaseState* GetState()
	{
		return pCurrent;
	}
	// �������� ���������� ���������
	void SetState(BaseState* pTemp)
	{
		if (pCurrent)
			delete pCurrent;
		
		pCurrent = pTemp;
	}
	// ��������� ��������� �������� � ����������, �������� �������� ��������� ���������
	void Request()
	{
		pCurrent->Handle(this);
	}
};




