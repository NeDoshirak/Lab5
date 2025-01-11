#pragma once

//! \brief Структура для представления узла бинарного дерева.
struct BinaryTreeNode
{
public:
    //! \brief Значение, хранящееся в узле.
    int Value;

    //! \brief Указатель на левый дочерний узел.
    BinaryTreeNode* Left;

    //! \brief Указатель на правый дочерний узел.
    BinaryTreeNode* Right;

    //! \brief Конструктор для создания узла с заданным значением.
    //! \param value Значение, которое будет храниться в узле.
    BinaryTreeNode(int value);
};
