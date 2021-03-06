/*
 *   Copyright (C) 2010-2013 by Jonathan Naylor G4KLX
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef	IRCDDBGatewayConfigApp_H
#define	IRCDDBGatewayConfigApp_H

#include "IRCDDBGatewayConfigFrame.h"
#include "Defs.h"

#include <wx/wx.h>

class CIRCDDBGatewayConfigApp : public wxApp {

public:
	CIRCDDBGatewayConfigApp();
	virtual ~CIRCDDBGatewayConfigApp();

	virtual bool OnInit();
	virtual int  OnExit();
	
	virtual void OnInitCmdLine(wxCmdLineParser& parser);
	virtual bool OnCmdLineParsed(wxCmdLineParser& parser);

private:
	wxString                   m_name;
	wxString                   m_confDir;
	CIRCDDBGatewayConfigFrame* m_frame;
};

DECLARE_APP(CIRCDDBGatewayConfigApp)

#endif
