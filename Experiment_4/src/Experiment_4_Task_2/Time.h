#ifndef TIME_H
#define TIME_H

class Time
{
    private:
        int hour;
        int minute;
        int second;

    public:
        Time(int h, int m, int s);
        void print() const;
        void tick();
};

#endif