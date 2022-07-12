#include <iostream>
using namespace std;

struct ListNode
{
    ListNode *last;
    int value;
    ListNode *next;
    int index;

    ListNode(int value)
    {
        this->last = nullptr;
        this->value = value;
        this->next = nullptr;
        this->index = 0;
    }

    ListNode(ListNode *last = nullptr, int value = 0, ListNode *next = nullptr, int index = 0)
    {
        this->last = last;
        this->value = value;
        this->next = next;
        this->index = index;
    }

    bool isCircular(ListNode *head)
    {
        if (head == nullptr)
            return false;
        else
        {
            ListNode *fast = head;
            ListNode *slow = head;
            while (fast != nullptr && fast->next != nullptr)
            {
                fast = fast->next->next;
                slow = slow->next;
                if (fast == slow)
                    return true;
            }
            return false;
        }
    }

    bool addNode(int newValue) //在链表尾部添加一个新的结点且值为value
    {
        ListNode newNode(newValue);
        ListNode *ptr = this;

        //先判断该链表不是循环链表
        ListNode *fast = this;
        ListNode *slow = this;
        while (fast != nullptr && fast->next != nullptr)
        {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow)
                return false;
        }

        //进行添加操作：找到最后一个节点，将其next指向newNode，并将newNode的last指向该节点。
        while (true)
        {
            if (ptr->next == nullptr)
            {
                ptr->next = &newNode;
                newNode.last = ptr;
                break;
            }
            else
            {
                ptr = ptr->next;
            }
        }
        return true;
    }

    void insertNode(int value)
    {
        ListNode newNode = ListNode(value);
        newNode.next = this->next;
        this->next->last = &newNode;
        newNode.last = this;
        this->next = &newNode;
    }

    bool insertList(ListNode *listhead)
    {
        //先判断插入的list不是循环链表
        ListNode *fast = listhead;
        ListNode *slow = listhead;
        while (fast != nullptr && fast->next != nullptr)
        {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow)
                return false;
        }

        ListNode *listtail = nullptr;
        if (fast == nullptr)
            listtail = fast;
        else
            listtail = fast->next;

        listtail->next = this->next;
        this->next->last = listtail;
        listhead->last = this;
        this->next = listhead;

        return true;
    }

    void deleteNode()
    {
        if (this == nullptr)
            return;
        ListNode *ptr = this;
        if (ptr->last != nullptr)
        {
            ptr->last->next = ptr->next;
        }
        if (ptr->next != nullptr)
        {
            ptr->next->last = ptr->last;
        }
        delete ptr;
        ptr = nullptr;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;

    ListNode *head = new ListNode;
    ListNode *ptr = head;

    for (int i = 1; i <= n; i++)
    {
        ptr->next = new ListNode(ptr, i, nullptr);
        ptr = ptr->next;
    }
    ptr->next = head->next;
    head = head->next;
    delete head->last;
    head->last = ptr;

    return 0;
}