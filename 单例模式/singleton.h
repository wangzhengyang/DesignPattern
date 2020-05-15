#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton{
private:
    static Singleton *instance;
    Singleton(){}
public:
    static Singleton* GetInstance(){
        if(instance == nullptr){
            instance = new Singleton();
        }
        return instance;
    }
};

Singleton *Singleton::instance = nullptr;
#endif
