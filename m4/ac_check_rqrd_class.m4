##### http://autoconf-archive.cryp.to/ac_check_rqrd_class.html
#
# SYNOPSIS
#
#   AC_CHECK_RQRD_CLASS
#
# DESCRIPTION
#
#   AC_CHECK_RQRD_CLASS tests the existence of a given Java class,
#   either in a jar or in a '.class' file and fails if it doesn't
#   exist. Its success or failure can depend on a proper setting of the
#   CLASSPATH env. variable.
#
#   Note: This is part of the set of autoconf M4 macros for Java
#   programs. It is VERY IMPORTANT that you download the whole set,
#   some macros depend on other. Unfortunately, the autoconf archive
#   does not support the concept of set of macros, so I had to break it
#   for submission. The general documentation, as well as the sample
#   configure.in, is included in the AC_PROG_JAVA macro.
#
# LAST MODIFICATION
#
#   2000-07-19
#
# COPYLEFT
#
#   Copyright (c) 2000 Stephane Bortzmeyer <bortzmeyer@pasteur.fr>
#
#   This program is free software; you can redistribute it and/or
#   modify it under the terms of the GNU General Public License as
#   published by the Free Software Foundation; either version 2 of the
#   License, or (at your option) any later version.
#
#   This program is distributed in the hope that it will be useful, but
#   WITHOUT ANY WARRANTY; without even the implied warranty of
#   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
#   General Public License for more details.
#
#   You should have received a copy of the GNU General Public License
#   along with this program; if not, write to the Free Software
#   Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
#   02111-1307, USA.
#
#   As a special exception, the respective Autoconf Macro's copyright
#   owner gives unlimited permission to copy, distribute and modify the
#   configure scripts that are the output of Autoconf when processing
#   the Macro. You need not follow the terms of the GNU General Public
#   License when using or distributing such scripts, even though
#   portions of the text of the Macro appear in them. The GNU General
#   Public License (GPL) does govern all other use of the material that
#   constitutes the Autoconf Macro.
#
#   This special exception to the GPL applies to versions of the
#   Autoconf Macro released by the Autoconf Macro Archive. When you
#   make and distribute a modified version of the Autoconf Macro, you
#   may extend this special exception to the GPL to apply to your
#   modified version as well.

AC_DEFUN([AC_CHECK_RQRD_CLASS],[
CLASS=`echo $1|sed 's/\./_/g'`
AC_CHECK_CLASS($1)
if test "$HAVE_LAST_CLASS" = "no"; then
true
fi
])
