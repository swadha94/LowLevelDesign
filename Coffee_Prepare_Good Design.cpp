#include<bits/stdc++.h>
using namespace std;

class BeveragePreparer
{
    public: 
    virtual void prepare();
};

class CappucinoPreparer : public BeveragePreparer
{
    public: 
    void prepare();
};

class EspressoPreparer : public BeveragePreparer 
{
    public: 
    void prepare();
};

class BeveragePrepareFactory
{
    map<string , BeveragePreparer>beveragePreparers;
    public: 
    BeveragePreparer getBeveragePreparer(string beverageName)
    {
        return beveragePreparers[beverageName];
    }
};

class CoffeeMachine
{
    BeveragePrepareFactory beveragePrepareFactory;
    public:
    void prepareBeverage(string BeverageName)
    {
        beveragePrepareFactory.getBeveragePreparer(BeverageName).prepare();
    }
};