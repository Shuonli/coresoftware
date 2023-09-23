#ifndef TOWERINFOV2_H
#define TOWERINFOV2_H

#include "TowerInfov1.h"

#include <cstdint> // For int16_t

class TowerInfov2 : public TowerInfov1
{
public:
    TowerInfov2() {}
    //TowerInfov2(TowerInfo& tower) : TowerInfov1(tower) {}
    ~TowerInfov2() override {}
    
    void Reset() override;
    void Clear(Option_t* = "") override;
    
    // Getter and setter for waveform
    int16_t get_waveform_value(int index) const;
    void set_waveform_value(int index, int16_t value);
    
private:
    static const int nsample = 31;
    int16_t _waveform[nsample] = {0};

};

#endif
