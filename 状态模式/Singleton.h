#ifndef SINGLETON_H
#define SINGLETON_H

template<class T>
class Singleton{
private:
    static T* instance;
    Singleton(){}
public:
    static T* GetInstance(){
        if(instance == nullptr){
            instance = new T();
        }
        return instance;
    }
};

template<class T>T* Singleton<T>::instance = nullptr;

#endif
