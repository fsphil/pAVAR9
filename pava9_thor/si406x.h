
/* Copyright 2013 Philip Heron <phil@sanslogic.co.uk>                    */
/*                                                                       */
/* This program is free software: you can redistribute it and/or modify  */
/* it under the terms of the GNU General Public License as published by  */
/* the Free Software Foundation, either version 3 of the License, or     */
/* (at your option) any later version.                                   */
/*                                                                       */
/* This program is distributed in the hope that it will be useful,       */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of        */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         */
/* GNU General Public License for more details.                          */
/*                                                                       */
/* You should have received a copy of the GNU General Public License     */
/* along with this program.  If not, see <http://www.gnu.org/licenses/>. */

#ifndef _SI406X_H
#define _SI406X_H

#ifdef __cplusplus
extern "C" {
#endif

extern void si_init(void);
extern void si_radio_on(void);
extern void si_radio_off(void);
extern void si_set_frequency(uint32_t freq);
extern void si_set_channel(uint8_t channel);
extern void si_set_offset(int16_t offset);
extern void si_set_global_xo_tune(uint8_t tune_value);
extern int16_t si_get_temperature();

#ifdef __cplusplus
}
#endif

#endif

