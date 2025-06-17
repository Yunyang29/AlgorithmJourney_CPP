// �� Date: 25/05/15
// 
// ʵ��һ�ֹ�è���еĽṹ��Ҫ�����£�
// �� �û����Ե���add������cat���dog���ʵ����������У�
// �� �û����Ե���pollAll�����������������е�ʵ�����ս����е��Ⱥ�˳�����ε�����
// �� �û����Ե���pollDog��������������dog���ʵ�����ս����е��Ⱥ�˳�����ε�����
// �� �û����Ե���pollCat��������������cat���ʵ�����ս����е��Ⱥ�˳�����ε�����
// �� �û����Ե���isEmpty���������������Ƿ���dog��cat��ʵ����
// �� �û����Ե���isDogEmpty���������������Ƿ���dog���ʵ����
// �� �û����Ե���isCatEmpty���������������Ƿ���cat���ʵ����

#include <iostream>
#include <stack>
#include "Queue&Stack.h"

using namespace std;
using namespace Queue_Stack;

void ReverseStack::reverse(stack<int>& s)
{
	if (s.empty())
	{
		return;
	}

	int bottom = getBottom(s);
	reverse(s);
	s.push(bottom);
}

int ReverseStack::getBottom(stack<int>& s)
{
	int val = s.top();
	s.pop();
	if (s.empty())
	{
		return val;
	}
	else
	{
		int bottom = getBottom(s);
		s.push(val);
		return bottom;
	}
}