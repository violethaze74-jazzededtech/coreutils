/* Generate buffers of random data.

   Copyright (C) 2006-2021 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* Written by Paul Eggert.  */

#ifndef RANDREAD_H
# define RANDREAD_H 1

# include <stddef.h>

struct randread_source;

int randread_free (struct randread_source *) _GL_ATTRIBUTE_NONNULL ();
struct randread_source *randread_new (char const *, size_t)
  _GL_ATTRIBUTE_MALLOC _GL_ATTRIBUTE_DEALLOC (randread_free, 1)
  _GL_ATTRIBUTE_RETURNS_NONNULL;
void randread (struct randread_source *, void *, size_t)
  _GL_ATTRIBUTE_NONNULL ();
void randread_set_handler (struct randread_source *, void (*) (void const *))
  _GL_ATTRIBUTE_NONNULL ();
void randread_set_handler_arg (struct randread_source *, void const *)
  _GL_ATTRIBUTE_NONNULL ((1));

#endif
