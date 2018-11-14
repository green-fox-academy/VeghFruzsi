#ifndef INC_05_COUNTER_COUNTER_H
#define INC_05_COUNTER_COUNTER_H


class Counter {
public:
    Counter();
    Counter(int number);

    void add(int number);
    void add();
    int get();
    void reset();

private:
    int _initNum;
    int _number;

};


#endif //INC_05_COUNTER_COUNTER_H
