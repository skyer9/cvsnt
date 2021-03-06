/*
	CVSNT Helper application API
    Copyright (C) 2004-5 Tony Hoyle and March-Hare Software Ltd

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License version 2.1 as published by the Free Software Foundation.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/
#ifndef CVSGUI__H
#define CVSGUI__H

class CCvsgui
{
public:
	CVSTOOLS_EXPORT CCvsgui() { }
	CVSTOOLS_EXPORT virtual ~CCvsgui() { }

	static CVSTOOLS_EXPORT bool Init(int& argc, char **&argv);
	static CVSTOOLS_EXPORT bool Active();
	static CVSTOOLS_EXPORT bool Close(int result);
	static CVSTOOLS_EXPORT int write(const char *buf, int len, bool isStderr, bool binary);
};

#endif
