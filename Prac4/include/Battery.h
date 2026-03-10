#ifndef BATTERY_H
#define BATTERY_H

namespace prc4{
class Battery
{
    private : double capacity;
     double origin_cap;
    public:
        Battery(double Capacity): capacity(Capacity),origin_cap(Capacity){}
        virtual ~Battery();
     void drain(double amount);
     void charge();
     double get_remaining_capacity();


};
}

#endif
