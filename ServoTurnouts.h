/*
 *  © 2020, Maik Ranke. All rights reserved.
 *  
 *  This is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  It is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with CommandStation.  If not, see <https://www.gnu.org/licenses/>.
 */
#ifndef SERVO_TURNOUTS
#define SERVO_TURNOUTS
#include "Turnouts.h"

#ifdef USE_SERVO_TURNOUTS
  #include "config_ServoTurnouts.h"

  #define _T_ Turnout::create

  class ServoTurnouts
  {
  public:
    static void Setup() {TURNOUTS};

  private:
  };
#endif


#endif