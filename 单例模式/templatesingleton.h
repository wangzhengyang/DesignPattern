#ifndef TEMPLATESINGLETON_H
#define TEMPLATESINGLETON_H

template <class T>
class TemplateSingleton{
private:
    static T *instance;
    TemplateSingleton(){}
public:
    static T* GetInstance(){
        if(instance == nullptr){
            instance = new T();
        }
        return instance;
    }
};

template<class T>T* TemplateSingleton<T>::instance = nullptr;

#endif
