/* 
	Copyright 2010 OpenRTMFP
 
	This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License received along this program for more
	details (or else see http://www.gnu.org/licenses/).

	This file is a part of Cumulus.
*/

#pragma once

#include "Cumulus.h"
#include "Logs.h"
#include "Poco/Timestamp.h"


namespace Cumulus {


class Trigger {
public:
	Trigger();
	virtual ~Trigger();

	bool raise();
	void start();
	void reset();
	void stop();
private:
	Poco::Timestamp	_timeInit;
	Poco::Int8		_cycle;
	Poco::UInt8		_time;
	bool			_running;

};

inline void Trigger::stop() {
	_running=false;
}


} // namespace Cumulus
