#include "..\Header\Menu.h"

void PrintBinaryTree(BinaryTreeNode* root, int space = 0, int levelIndent = 5)
{
    if (!root) return;

    space += levelIndent;

    PrintBinaryTree(root->Right, space);

    cout << endl;
    for (int i = levelIndent; i < space; ++i) cout << " ";
    cout << root->Value << endl;

    PrintBinaryTree(root->Left, space);
}

void PrintTreap(TreapNode* current, int space = 0, int levelIndent = 5)
{
    if (!current) return;

    space += levelIndent;

    PrintTreap(current->Right, space, levelIndent);

    cout << endl;
    for (int i = levelIndent; i < space; ++i) cout << " ";
    cout << current->Key << "(" << current->Priority << ")";

    PrintTreap(current->Left, space, levelIndent);
}

void ClearInput()
{
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int GetIntegerInput()
{
    int value;
    while (true)
    {
        if (cin >> value)
        {
            if (value < 0)
            {
                ClearInput();
                std::cout << "������� ��������������� �����. " << endl;
                continue;
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return value;
        }
        else
        {
            ClearInput();
        }
    }
}

void ShowMenu()
{
    int choice;

    do
    {
        cout << "�������� �� ��� ������\n";
        cout << "1. �������� ������.\n";
        cout << "2. ���������� ������.\n";
        cout << "0. �����.\n";

        choice = GetIntegerInput();

        switch (choice)
        {
        case 1:
        {
            ShowBinaryTreeMenu();
            break;
        }
        case 2:
        {
            ShowTreapMenu();
            break;
        }
        case 0:
        {
            break;
        }
        default:
        {
            cout << "������� ���������� ������.\n";
        }
        }
    } while (choice != 0);
}

void ClearTerminal()
{
    if (system("cls"))
    {
        system("clear");
    }
}

void ShowBinaryTreeMenu() 
{
    int choice;
    int value;
    BinaryTree* bt = new BinaryTree();
    BinaryTreeNode* btn;

    do
    {
        std::cout << "������ � �������� �������. ���� ��������: " << endl;
        std::cout << "1 - �������� �������.  " << endl;
        std::cout << "2 - ������� �������. " << endl;
        std::cout << "3 - ����� �������. " << endl;
        std::cout << "4 - ������� �������. " << endl;
        std::cout << "5 - ������� ��������. " << endl;
        std::cout << "6 - ������� ������. " << endl;
        std::cout << "0 - �����. " << endl;

        choice = GetIntegerInput();

        switch (choice)
        {
            case 1:
            {
                std::cout << "������� ������� ��� ����������: " << endl;

                value = GetIntegerInput();

                bt->Add(value);

                std::cout << "������� ��������!" << endl;
                break;
            }
            case 2:
            {
                std::cout << "������� ������� ��� ��������: " << endl;

                value = GetIntegerInput();

                bt->Remove(value);

                std::cout << "������� �����." << endl;
                break;
            }
            case 3:
            {
                std::cout << "������� ������� ��� ������: " << endl;

                value = GetIntegerInput();

                btn = bt->Search(value);

                if (btn != nullptr) 
                {
                    std::cout << "������� ������!" << endl;
                }
                else
                {
                    std::cout << "������� �������� ��� � ������. " << endl;
                }

                break;
            }
            case 4:
            {
                try 
                { 
                    std::cout << "����������� �������: "<< bt->FindMin() << endl;
                }
                catch (runtime_error)
                {
                    std::cout << "������ �����!" << endl;
                }
                break;
            }
            case 5:
            {
                try
                {
                    std::cout << "������������ �������: " << bt->FindMax() << endl;
                }
                catch (runtime_error)
                {
                    std::cout << "������ �����!" << endl;
                }
            break;
            }
            case 6:
            {
                std::cout << "��������� ������: " << endl;
                PrintBinaryTree(bt->GetRoot());
                break;
            }
            case 0:
            {
                break;
            }
            default:
            {
                std::cout << "������� ���������� ��������! " << endl;
                break;
            }
        }

        cout << endl;
    } while (choice != 0);

    ClearTerminal();
    delete bt;
}

void ShowTreapMenu() 
{
    int choice;
    int value;
    Treap* treap = new Treap();
    TreapNode* treapNode;

    do
    {
        std::cout << "������ � ���������� �������. ���� ��������: " << endl;
        std::cout << "1 - �������� ������� (���).  " << endl;
        std::cout << "2 - �������� ������� (�� ���.).  " << endl;
        std::cout << "3 - ������� ������� (���). " << endl;
        std::cout << "4 - ������� ������� ( �����). " << endl;
        std::cout << "5 - ����� �������. " << endl;
        std::cout << "6 - ������� ������. " << endl;
        std::cout << "0 - �����. " << endl;

        choice = GetIntegerInput();

        switch (choice)
        {
            case 1:
            {
                std::cout << "������� ������� ��� ����������: " << endl;

                value = GetIntegerInput();

                treap->AddOptimized(value);

                std::cout << "������� ��������!" << endl;
                break;
            }
            case 2:
            {
                std::cout << "������� ������� ��� ����������: " << endl;

                value = GetIntegerInput();

                treap->AddUnoptimized(value);

                std::cout << "������� ��������!" << endl;
                break;
            }
            case 3:
            {
                std::cout << "������� ������� ��� ��������: " << endl;

                value = GetIntegerInput();

                treap->RemoveOptimized(value);

                std::cout << "������� �����!" << endl;
                break;
            }
            case 4:
            {
                std::cout << "������� ������� ��� ��������: " << endl;

                value = GetIntegerInput();

                treap->RemoveUnoptimized(value);

                std::cout << "������� �����!" << endl;
                break;
            }
            case 5:
            {
                std::cout << "������� ������� ��� ������: " << endl;

                value = GetIntegerInput();

                treapNode = treap->Search(value);

                if (treapNode != nullptr)
                {
                    std::cout << "������� ������!" << endl;
                }
                else
                {
                    std::cout << "������� �������� ��� � ������. " << endl;
                }

                break;
            }
            case 6:
            {
                std::cout << "��������� ������: " << endl;
                PrintTreap(treap->GetRoot());
                break;
            }
            case 0:
            {
                break;
            }
            default:
            {
                std::cout << "������� ���������� ��������! " << endl;
                break;
            }
        }

        cout << endl;
    } while (choice != 0);

    ClearTerminal();
    delete treap;
};
