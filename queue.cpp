# ifndef DLL_QUEUE
# define DLL_QUEUE

# include <iostream>
# include <list>

using namespace std;

template<class T>
class LL_STACK
{
    public:
    LLQueue()
    {

    }

    void clear()
    {
        lst.clear();
    }

    bool isEmpty() const 
    {
        return lst.empty();
    }

    T& front()
    {
        return lst.front();
    }

    T dequeue()
    {
        if isEmpty()
        {
            return 0;
        }
        else
        {
            T ele = lst.front();
            lst.pop_front();
            return ele;
        }
    }

    void enqueue(const T& ele)
    {
        lst.push_back(ele);
    }

    private:
    list<T> lst;
};

# endif