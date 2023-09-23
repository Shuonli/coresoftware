#include "TowerInfov2.h"

void TowerInfov2::Reset()
{
    TowerInfov1::Reset(); // Call base class Reset to ensure _time and _energy are reset
    for(int i = 0; i < nsample; ++i) {
        _waveform[i] = 0;
    }
}

void TowerInfov2::Clear(Option_t*)
{
    TowerInfov1::Clear(); // Call base class Clear to ensure _time and _energy are cleared
    for(int i = 0; i < nsample; ++i) {
        _waveform[i] = 0;
    }
}

int16_t TowerInfov2::get_waveform_value(int index) const
{
    if(index >= 0 && index < nsample) {
        return _waveform[index];
    }
    return -1;
}

void TowerInfov2::set_waveform_value(int index, int16_t value)
{
    if(index >= 0 && index < nsample) {
        _waveform[index] = value;
    }
}
