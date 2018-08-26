//  SuperTux
//  Copyright (C) 2006 Matthias Braun <matze@braunis.de>
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef HEADER_SUPERTUX_SCRIPTING_SPOTLIGHT_HPP
#define HEADER_SUPERTUX_SCRIPTING_SPOTLIGHT_HPP


#ifndef SCRIPTING_API
class Spotlight;
#endif

namespace scripting {

class Spotlight
{
public:
#ifndef SCRIPTING_API
  Spotlight(::Spotlight* spotlight);
#endif

  bool is_emitting() const; /**< returns true if it is emitting light */
  void set_emitting(bool emitting); /**< true: emmit light, false: extinguish */
  int get_speed() const; /**< returns the current rotation_speed */
  void set_speed(int rot_speed); /**< sets the rotation speed */
  void set_color(float red, float green, float blue, float alpha); /**< sets the color of the light using RGBA float values */

#ifndef SCRIPTING_API
  ::Spotlight* spotlight;

private:
  Spotlight(const Spotlight&);
  Spotlight& operator=(const Spotlight&);
#endif
};

}

#endif

/* EOF */