// Copyright (C) 2008, 2009, 2010 GlavSoft LLC.
// All rights reserved.
//
//-------------------------------------------------------------------------
// This file is part of the TightVNC software.  Please visit our Web site:
//
//                       http://www.tightvnc.com/
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//-------------------------------------------------------------------------
//

#ifndef _BYTE_BUFFER_H_
#define _BYTE_BUFFER_H_

#include "util/CommonHeader.h"

class ByteBuffer
{
public:
  ByteBuffer();
  ByteBuffer(const char *buffer, size_t size);
  virtual ~ByteBuffer();

  const char *getBytes() const;

  size_t getSize() const;

  void setBytes(const char *buffer, size_t size);

  void appendBytes(const char *buffer, size_t size);

protected:
  void releaseBuffer();

protected:
  char *m_buffer;
  size_t m_size;
};

#endif