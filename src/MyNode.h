#pragma once

#include <iostream>

class MyNode
{
public:
	int data;
	MyNode* next;

	MyNode(int d)
	{
		data = d;
		next = NULL;
	}

	void Append(int d)
	{
		MyNode* n = this;
		MyNode* end = new MyNode(d);

		while (n->next != NULL)
		{
			n = n->next;
		}

		n->next = end;
	}

	void Delete(int d)
	{
		MyNode* n = this;
		MyNode* temp;

		while (n->next != NULL)
		{
			if (n->next->data == d)
			{
				temp = n->next;
				n->next = n->next->next;
				delete temp;
				return;
			}
			else
				n = n->next;
		}
	}
};