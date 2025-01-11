#pragma once
#include <iostream>
#include "Treap.h"
#include "BinaryTree.h"

using namespace std;

//! \brief ����� ��������� ������ � ������� � �������� ��������.
//! \param root �������� ���� ��������� ������.
//! \param space ������� ������� �������.
//! \param levelIndent ��� ���������� ������� ��� ������� ������.
void PrintBinaryTree(BinaryTreeNode* root, int space, int levelIndent);

//! \brief ����� ������ Treap � ������� � �������� ��������.
//! \param current ������� ���� ������ Treap.
//! \param space ������� ������� �������.
//! \param levelIndent ��� ���������� ������� ��� ������� ������.
void PrintTreap(TreapNode* current, int space, int levelIndent);

//! \brief ����������� �������� ���� ���������.
void ShowMenu();

//! \brief ��������� �������������� ����� �� ������������.
//! \return ������������� ��������, ��������� �������������.
int GetIntegerInput();

//! \brief ������� ������������� ����� � ������.
void ClearInput();

//! \brief ����������� ���� ��� ������ � ������� Treap.
void ShowTreapMenu();

//! \brief ����������� ���� ��� ������ � �������� �������.
void ShowBinaryTreeMenu();

//! \brief ������� ��������� ��� �������� ����������� ������.
void ClearTerminal();
