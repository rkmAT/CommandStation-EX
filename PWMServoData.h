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


// factor should be 1 / 50Hz / 4096 steps * 1000000 = 4,8828µs  in theory
// but on scope I got accurate values with 4.75µs/step
#define PCA9685_TIME_FACTOR   4.75    



// TOWER PRO SG90 settings
#define TOWER_PRO_SG90_NEUTRAL_POSITION_PULSE_WIDTH   1500
#define TOWER_PRO_SG90_PULSE_WIDTH_RANGE              2000


#define TURNOUT_NEUTRAL_POSITION_PULSE_WIDTH    TOWER_PRO_SG90_NEUTRAL_POSITION_PULSE_WIDTH
#define TURNOUT_SERVO_PULSE_WIDTH_RANGE         TOWER_PRO_SG90_PULSE_WIDTH_RANGE
