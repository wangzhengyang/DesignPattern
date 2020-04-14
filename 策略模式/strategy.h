#ifndef _STRATEGY_H
#define _STRATEGY_H

class Strategy{
private:
	//...
public:
	Strategy(){}
	virtual ~Strategy(){}

	virtual void Algorithm() = 0;
};

#endif
