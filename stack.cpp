# ifndef LL_STACK
# define LL_STACK

# include <list>
# include <iostream>

using namespace std;


template<class T>
class LLStack
{
    public:
    LLStack()
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

    T& topEle()
    {
        return lst.back();
    }

    T pop()
    {
        if isEmpty()
        {
            return 0;
        }
        else 
        {
            T ele = lst.back();
            lst.pop_back();
            return ele;
        }
    }

    void push(const T& ele)
    {
        lst.push_back(ele);
    }

    private:
    list<T> lst;
};

# endif