#ifndef CAT_H
#define CAT_H


class Cat
{
public:
    Cat();
    void playWith();
    void feed();
    void shower();
    void sleep();
    void meow();

private:
    int energy;
    int hunger;
    int mood;
};

#endif // CAT_H
