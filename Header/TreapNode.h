#pragma once
#include <iostream>

//! \brief ��������� ��� ������������� ���� ������ Treap.
struct TreapNode
{
public:
    //! \brief ���� ����, ������������ ��� ������� � ������.
    int Key;

    //! \brief ��������� ����, ������������ ��� ���������� ������� ����.
    int Priority;

    //! \brief ��������� �� ����� �������� ����.
    TreapNode* Left;

    //! \brief ��������� �� ������ �������� ����.
    TreapNode* Right;

    //! \brief ����������� ��� �������� ���� � �������� ������.
    //! \param k ���� ��� ������ ����.
    TreapNode(int k);
};
