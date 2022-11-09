#include "core.h"


//i'll minus the whole number by percent
float num_minus_persent(float whole_num, float percent){
    // whole_num - precent / 
    float pt = percent / 100;
    float result = whole_num - (pt*whole_num);

    return result;
}
