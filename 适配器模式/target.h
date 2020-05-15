#ifndef TARGET_H
#define TARGET_H

class Target{
public:
    Target(){}
    virtual ~Target(){}

    virtual void interface1() = 0;
    virtual void interface2() = 0;
};

#endif
