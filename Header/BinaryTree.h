#pragma once
#include "BinaryTreeNode.h"
#include <iostream>

//! \brief ����� ��� ������������� ��������� ������.
class BinaryTree
{
private:
	//! \brief ��������� �� �������� ���� ������.
	BinaryTreeNode* _root;

	//! \brief ����������� ���������� �������� � ������.
	//! \param node ����, � ������� ����������� ��������.
	//! \param value ��������, ������� ����� ��������.
	void Add(BinaryTreeNode*& node, int value);

	//! \brief ����������� ����� ���� � �������� ���������.
	//! \param node ����, � �������� ���������� �����.
	//! \param value �������� ��� ������.
	//! \return ��������� �� ��������� ���� ��� nullptr, ���� �������� �� �������.
	BinaryTreeNode* Search(BinaryTreeNode* node, int value);

	//! \brief �������� ���� � �������� ���������.
	//! \param node ����, � ������� ����������� ��������.
	//! \param value �������� ��� ��������.
	//! \return ��������� �� ����� �������� ���� ���������.
	BinaryTreeNode* RemoveNode(BinaryTreeNode* node, int value);

	//! \brief ����� ���� � ����������� ���������.
	//! \param node ����, � �������� ���������� �����.
	//! \return ��������� �� ���� � ����������� ���������.
	BinaryTreeNode* FindMinNode(BinaryTreeNode* node);

	//! \brief ����� ���� � ������������ ���������.
	//! \param node ����, � �������� ���������� �����.
	//! \return ��������� �� ���� � ������������ ���������.
	BinaryTreeNode* FindMaxNode(BinaryTreeNode* node);

	//! \brief ����������� �������� ���� ����� ������.
	//! \param current ����, ������� ����� �������.
	void Clear(BinaryTreeNode* current);

public:
	//! \brief ����������� �� ���������. ������� ������ ������.
	BinaryTree();

	//! \brief ����������. ������� ��� ���� ������.
	~BinaryTree();

	//! \brief ���������� �������� � ������.
	//! \param value �������� ��� ����������.
	void Add(int value);

	//! \brief ����� ������������ �������� � ������.
	//! \return ����������� �������� � ������.
	int FindMin();

	//! \brief ����� ������������� �������� � ������.
	//! \return ������������ �������� � ������.
	int FindMax();

	//! \brief �������� �������� �� ������.
	//! \param value �������� ��� ��������.
	void Remove(int value);

	//! \brief ����� ���� � �������� ���������.
	//! \param data �������� ��� ������.
	//! \return ��������� �� ��������� ���� ��� nullptr, ���� �������� �� �������.
	BinaryTreeNode* Search(int data);

	//! \brief ��������� ��������� �� �������� ���� ������.
	//! \return ��������� �� �������� ����.
	BinaryTreeNode* GetRoot();
};
