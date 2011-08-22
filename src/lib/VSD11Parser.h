/* libvisio
 * Copyright (C) 2011 Fridrich Strba <fridrich.strba@bluewin.ch>
 * Copyright (C) 2011 Eilidh McAdam <tibbylickle@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA  02111-1301 USA
 */

#ifndef __VSD11PARSER_H__
#define __VSD11PARSER_H__

#include <stdio.h>
#include <iostream>
#include <libwpd/libwpd.h>
#include <libwpg/libwpg.h>
#include "VSDXParser.h"
#include "VSDInternalStream.h"

namespace libvisio
{

class VSD11Parser : public VSDXParser
{
public:
  explicit VSD11Parser(WPXInputStream *input, libwpg::WPGPaintInterface *painter);
  ~VSD11Parser();
private:
  bool getChunkHeader(WPXInputStream *input);
  void readText(WPXInputStream *input);
  void readCharIX(WPXInputStream *input);
  void readFillAndShadow(WPXInputStream *input);

  void readFillStyle(WPXInputStream *input);
  void readCharIXStyle(WPXInputStream *input);

  VSD11Parser();
  VSD11Parser(const VSDXParser&);
  VSD11Parser &operator=(const VSDXParser&);
};

} // namespace libvisio

#endif // __VSD11PARSER_H__
