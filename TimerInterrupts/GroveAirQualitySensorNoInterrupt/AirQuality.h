/*
  AirQuality library v1.0
  2010 Copyright (c) Seeed Technology Inc.  All right reserved.

  Original Author: Bruce.Qin

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
//==============================================================================
#ifndef __AIRQUALITY_H__
#define __AIRQUALITY_H__
//==============================================================================
#include "Arduino.h"
//==============================================================================
class AirQuality
{
  public:
    //--------------------------------------------------------------------------
    // Members
    uint16_t averaging_count = 0;        
    long vol_standard;
    int init_voltage;
    int first_vol;
    int last_vol;
    long temp;
    boolean timer_index;
    boolean error;
    //--------------------------------------------------------------------------
    // Methods
    void     init  (int pin);
    uint8_t  slope (void);
  private:
    //--------------------------------------------------------------------------
    // Members
    int _pin;
    //--------------------------------------------------------------------------
    // Methods
    void avgVoltage(void);
};
#endif
