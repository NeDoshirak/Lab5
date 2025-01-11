#pragma once

//! \brief ��������� ��� ������������� ���� ��������� ������.
struct BinaryTreeNode
{
public:
    //! \brief ��������, ���������� � ����.
    int Value;

    //! \brief ��������� �� ����� �������� ����.
    BinaryTreeNode* Left;

    //! \brief ��������� �� ������ �������� ����.
    BinaryTreeNode* Right;

    //! \brief ����������� ��� �������� ���� � �������� ���������.
    //! \param value ��������, ������� ����� ��������� � ����.
    BinaryTreeNode(int value);
};
