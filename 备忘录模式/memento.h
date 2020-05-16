#ifndef MEMENTO_H
#define MEMENTO_H

class Memento{
private:
    int state;
public:
    Memento(int s):state(s){}
    ~Memento(){}

    int GetData(){return state;}
};

#endif
