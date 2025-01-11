#pragma once
#include "TreapNode.h"

//! \brief ����� ��� ������������� ������ Treap.
class Treap
{
private:
    //! \brief ��������� �� �������� ���� ������ Treap.
    TreapNode* _root;

    //! \brief ��������� ������ �� ��� ��������� �� ��������� �����.
    //! \param current ������� ����.
    //! \param key ���� ��� ����������.
    //! \param left ��������� �� ����� ��������� (���������).
    //! \param right ��������� �� ������ ��������� (���������).
    void Split(TreapNode* current, int key, TreapNode*& left, TreapNode*& right);

    //! \brief ���������� ��� ������ Treap � ����.
    //! \param left ����� ���������.
    //! \param right ������ ���������.
    //! \return ��������� �� ����� ����������� ������.
    TreapNode* Merge(TreapNode* left, TreapNode* right);

    //! \brief ���������������� ���������� ���� � ������ Treap.
    //! \param current ������� ����.
    //! \param key ���� ��� ����������.
    //! \return ��������� �� �������� ���� ����� ����������.
    TreapNode* AddOptimized(TreapNode* current, int key);

    //! \brief ���������������� �������� ���� �� ������ Treap.
    //! \param current ������� ����.
    //! \param key ���� ��� ��������.
    //! \return ��������� �� �������� ���� ����� ��������.
    TreapNode* RemoveOptimized(TreapNode* current, int key);

    //! \brief ����� ���� � �������� ���������.
    //! \param node ����, � �������� ���������� �����.
    //! \param data �������� ��� ������.
    //! \return ��������� �� ��������� ���� ��� nullptr, ���� ���� �� ������.
    TreapNode* Search(TreapNode* node, int data);

    //! \brief ������� ������, ������������ ������.
    //! \param current ������� ���� ��� �������.
    void Clear(TreapNode* current);

public:
    //! \brief �����������. ������� ������ ������ Treap.
    Treap();

    //! \brief ����������. ������� ��� ���� ������ Treap.
    ~Treap();

    //! \brief ������������������ ���������� ���� � ������.
    //! \param key ���� ��� ����������.
    void AddUnoptimized(int key);

    //! \brief ������������������ �������� ���� �� ������.
    //! \param key ���� ��� ��������.
    void RemoveUnoptimized(int key);

    //! \brief ���������������� ���������� ���� � ������.
    //! \param key ���� ��� ����������.
    void AddOptimized(int key);

    //! \brief ���������������� �������� ���� �� ������.
    //! \param key ���� ��� ��������.
    void RemoveOptimized(int key);

    //! \brief ����� ���� � �������� ���������.
    //! \param data �������� ��� ������.
    //! \return ��������� �� ��������� ���� ��� nullptr, ���� ���� �� ������.
    TreapNode* Search(int data);

    //! \brief ��������� ��������� ���� ������.
    //! \return ��������� �� �������� ����.
    TreapNode* GetRoot();
};
