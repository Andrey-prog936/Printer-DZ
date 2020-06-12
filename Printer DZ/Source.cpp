#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
using namespace std;

template<typename T>
class Queue
{
private:
    T* arr;
    int size;
    int counter;
public:
    Queue() : size(0), arr(NULL), counter(0)
    {   }
    Queue(int size)
    {
        this->size = size;
        arr = new T[this->size];
        counter = 0;
    }
    ~Queue()
    {
        delete[] arr;
    }
    void addElement(T Element)
    {
        if (this->checkQueue() != false)
        {
            this->arr[this->counter] = Element;
            this->counter++;
        }
    }
    void deleteElementQueue()
    {
        if (this->counter != 0)
        {
            T* tmp = new T[this->counter]();
            for (int i = 0; i < this->counter; i++)
            {
                tmp[i] = this->arr[i];
                this->arr[i] = 0;
            }
            for (int i = 0; i < this->counter - 1; i++)
            {
                this->arr[i] = tmp[i + 1];
            }
            this->counter--;
            delete[] tmp;
        }
        else
        {
            this->checkQueue();
        }
    }
    void deleteElementQueueRing()
    {
        if (this->counter != 0)
        {
            T temp = this->arr[0];
            for (int i = 1; i < this->counter; i++)
            {
                this->arr[i - 1] = this->arr[i];
            }
            this->arr[this->counter - 1] = temp;
        }
        else
        {
            this->checkQueue();
        }
    }
    void deleteElementQueuePriority()
    {
        ////////////////problem///////////////////
    }
    bool checkQueue()
    {
        if (this->counter < this->size)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
    void showQueue()
    {
        this->checkQueue();
        for (int i = 0; i < this->counter; i++)
        {
            cout << this->arr[i] << "   ";
        }
        cout << endl;
    }
    T GetFirst()
    {
        return this->arr[0];
    }
    T GetLast()
    {
        cout << "Last element in queue -> " << this->arr[this->counter - 1] << endl;
    }
    void queueRand(int min, int max)
    {
        //////////problem/////
    }
    int sizeQueue()
    {
        cout << "size queue -> " << this->size << endl;
        cout << "Elements in queue -> " << this->counter << endl;
        return this->size;
    }
    void deleteQueue()
    {
        for (int i = 0; i < this->counter; i++)
        {
            arr[i] = 0;
        }
        this->counter = 0;
    }

};
class Time
{
private:
    int minutes;
    int hours;
    int seconds;
public:
    Time() :minutes(0), hours(0), seconds(0) 
    {   }
    Time(int h, int m, int s) 
    {
        this->hours = h;
        this->minutes = m;
        this->seconds = s;
    }
    void show()
    {
        cout << "Time -> " << hours << ":" << minutes << ":" << seconds << endl;
    }
    void setHours(int h)
    {
        if (h <= 12 && h >= 0 || h <= 24 && h >= 0)
        {
            this->hours = h;
        }
    }
    void setMinutes(int m)
    {
        if (m <= 60 && m >= 0)
        {
            this->minutes = m;
        }
    }
    void setSeconds(int s)
    {
        if (s <= 60 && s >= 0)
        {
            this->seconds = s;
        }
    }
    int getHours()
    {
        return this->hours;
    }
    int getMinutes()
    {
        return this->minutes;
    }
    int getSeconds()
    {
        return this->seconds;
    }
};
class Document
{
private:
    string name;
    int sizee;
    Time* time;
    int priority;
public:
    Document() :name(""), sizee(0), time(0), priority(0)
    {   }
    Document(string name, int age, int numberSheets, Time* time, int priority)
    {
        this->name = name;
        this->sizee = age;
        this->time = time;
        this->priority = priority;
    }
    void show()
    {
        cout << "User" << endl;
        cout << "Name: " << this->getName() << endl;
        cout << "size: " << this->getAge() << endl;
        this->time->show();
        cout << "Priority: " << this->getPriority() << endl;
    }
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return this->name;
    }
    void setAge(int age)
    {
        this->sizee = age;
    }
    int getAge()
    {
        return this->sizee;
    }
    void setTime(int h, int m, int s)
    {
        this->time->setHours(h);
        this->time->setMinutes(m);
        this->time->setSeconds(s);
    }
    Time& getTime()
    {
        return *time;
    }
    void setPriority(int priority)
    {
        this->priority = priority;
    }
    int getPriority()
    {
        return this->priority;
    }
};
int main()
{
   

	system("pause");
}