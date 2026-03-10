#include "Battery.h"
namespace prc4{
  Battery::~Battery()
{
    //dtor
}
    void Battery::drain(double amount){
        capacity-=amount;
    }

    void Battery::charge(){
        capacity = origin_cap;
    }

    double Battery::get_remaining_capacity(){
        return capacity;
    }

}
