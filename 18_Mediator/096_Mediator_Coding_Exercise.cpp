/*
Mediator Coding Exercise
Our system has any number of instances of Participant  classes. Each Participant has a value  integer, initially zero.

A participant can say()  a particular value, which is broadcast to all other participants.
At this point in time, every other participant is obliged to increase their value  by the value being broadcast.

Example:

Two participants start with values 0 and 0 respectively
Participant 1 broadcasts the value 3. We now have Participant 1 value = 0, Participant 2 value = 3
Participant 2 broadcasts the value 2. We now have Participant 1 value = 2, Participant 2 value = 3*/



#if 1 // Solution

#include <vector>
using namespace std;

struct IParticipant
{
    virtual void receive(int value) = 0;
};

struct Mediator
{
    vector<IParticipant*> participants;
    void say_all(const IParticipant* from, int value) {
        for (auto&& ip: participants) {
            if (ip != from) {
                ip->receive(value);
            }
        }
    }
};

struct Participant : IParticipant
{
    int value{0};
    Mediator& mediator;

    Participant(Mediator &mediator) : mediator(mediator)
    {
        mediator.participants.push_back(this);
    }

    void say(int value)
    {
        mediator.say_all(this, value);
    }

    void receive(int value) {
        this->value += value;
    }
};


#else // Initial

struct Participant : IParticipant
{
    int value{0};
    Mediator& mediator;

    Participant(Mediator &mediator) : mediator(mediator)
    {
        mediator.participants.push_back(this);
    }

    void say(int value)
    {
        // todo
    }
};
#endif
