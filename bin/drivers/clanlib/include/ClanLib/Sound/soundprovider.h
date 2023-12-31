/*  $Id: soundprovider.h,v 1.5 2004/02/01 20:28:56 mbn Exp $
**
**  ClanLib Game SDK
**  Copyright (C) 2003  The ClanLib Team
**  For a total list of contributers see the file CREDITS.
**
**  This library is free software; you can redistribute it and/or
**  modify it under the terms of the GNU Lesser General Public
**  License as published by the Free Software Foundation; either
**  version 2.1 of the License, or (at your option) any later version.
**
**  This library is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
**  Lesser General Public License for more details.
**
**  You should have received a copy of the GNU Lesser General Public
**  License along with this library; if not, write to the Free Software
**  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307  USA
**
*/

//! clanSound="Audio Mixing"
//! header=sound.h

#ifndef header_soundprovider
#define header_soundprovider

#if _MSC_VER > 1000
#pragma once
#endif

#include "../Core/System/mutexsharedptr.h"

class CL_SoundProvider_Session;
class CL_SoundProvider_Generic;

//: Sound provider.
//- !group=Sound/Audio Mixing!
//- !header=sound.h!
//- <p>Interface to sound sources. Used by the CL_SoundBuffer class to
//- start and stop playback.</p>
class CL_SoundProvider
{
//! Construction:
public:
	CL_SoundProvider();

	CL_SoundProvider(const CL_SoundProvider &copy);

	virtual ~CL_SoundProvider();

//! Operations:
public:
	//: Called by CL_SoundBuffer when a new session starts.
	//return: The soundbuffer session to be attached to the newly started session.
	virtual CL_SoundProvider_Session *begin_session() = 0;

	//: Called by CL_SoundBuffer when a session has finished. After this call,
	//- <p>CL_SoundBuffer will not access the session anymore. It can safely be deleted
	//- here (and in most cases should be delete here).</p>
	virtual void end_session(CL_SoundProvider_Session *session) = 0;

//! Implementation:
private:
	CL_MutexSharedPtr<CL_SoundProvider_Generic> impl;
};

#endif
