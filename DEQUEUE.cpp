#include <iostream>
using namespace std;

class Node
{
public:
  int val;
  Node *next, *prev;

  Node(int value)
  {
    val = value;
    next = prev = nullptr;
  }
};
class Dequeue
{
public:
  int size;
  Node *front, *rear;

  Dequeue()
  {
    size = 0;
    front = rear = nullptr;
  }

  bool isEmpty()
  {
    return size == 0;
  }

  void pushBack(int val)
  {
    if (isEmpty())
    {
      front = rear = new Node(val);
      size++;
    }
    else
    {
      rear->next = new Node(val);
      rear->next->prev = rear;
      rear = rear->next;
      size++;
    }
    cout << val << ":pushed back in dequeue" << endl;
  }

  void pushFront(int val)
  {
    if (isEmpty())
    {
      front = rear = new Node(val);
      size++;
    }
    else
    {
      front->prev = new Node(val);
      front->prev->next = front;
      front = front->prev;
      size++;
    }
    cout << val << ":pushed front in dequeue" << endl;
  }

  void popBack()
  {
    if (isEmpty())
    {
      cout << "Queue is empty" << endl;
      return;
    }
    else
    {
      if (rear == front)
      {
        cout << rear->val << ":popped back from dequeue" << endl;
        delete rear;
        front = rear = NULL;
      }
      else
      {
        cout << rear->val << ":popped back from dequeue" << endl;
        rear = rear->prev;
        delete rear->next;
        rear->next = NULL;
        size--;
      }
    }
  }

  void popFront()
  {
    if (rear == front)
    {
      cout << rear->val << ":popped front from dequeue" << endl;
      delete rear;
      front = rear = NULL;
    }
    else
    {
      cout << rear->val << ":popped back from dequeue" << endl;
      cout << front->val << ":popped front from dequeue" << endl;
      front = front->next;
      delete front->prev;
      front->prev = NULL;
      size--;
    }
  }
  int issSize()
  {
    return size;
  }

  int getFront()
  {
    if (isEmpty())
    {
      return -1;
    }
    return front->val;
  }

  int getBack()
  {
    if (isEmpty())
    {
      return -1;
    }
    return rear->val;
  }
};
int main()
{
  Dequeue D;
  D.pushBack(20);
  D.pushBack(30);
  D.pushFront(80);
  D.pushBack(97);
  D.pushFront(11);

  cout << D.size << endl;
  cout << D.getFront() << endl;
  cout << D.getBack() << endl;

  D.popBack();
  D.popFront();
  cout << D.getFront() << endl;
  cout << D.getBack() << endl;
  D.popBack();
  D.popFront();
  D.popBack();
  D.popFront();

  return 0;
}
