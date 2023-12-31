/*  $Id: xml_token_save.h,v 1.4 2004/02/01 04:31:55 mbn Exp $
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

//! clanCore="XML"
//! header=core.h

#ifndef header_xml_token_save
#define header_xml_token_save

#if _MSC_VER > 1000
#pragma once
#endif

#include "../System/sharedptr.h"
#include "xml_token.h"
#include <string>

class CL_XMLTokenSave_Generic;
class CL_XMLTokenString;

//: XML token in a XML file.
//- !group=Core/XML!
//- !header=core.h!
class CL_XMLTokenSave : public CL_XMLToken
{
//! Construction:
public:
	CL_XMLTokenSave();

	CL_XMLTokenSave(const CL_XMLTokenSave &copy);
	
	virtual ~CL_XMLTokenSave();
	
//! Attributes:
public:

	//: Returns the token type.
	virtual TokenType get_type() const;
	
	//: Returns the token variant.
	virtual TokenVariant get_variant() const;
	
	//: Returns the name of the token.
	virtual std::string get_name() const;
	
	//: Returns the value of the token.
	virtual std::string get_value() const;
	
	//: Returns number of attributes.
	virtual int get_attributes_number() const;

	//: Returns the attribute name and value for attribute with specified index.
	virtual std::pair<std::string, std::string> get_attribute(int attribute_num) const;

//! Operations:
public:
	//: Sets the type of the token.
	void set_type(TokenType type);

	//: Sets if token ends with a slash.
	void set_variant(TokenVariant variant);

	//: Sets the name of the token.
	void set_name(const std::string & name);

	//: Sets the value of the token.
	void set_value(const std::string & value);
	
	//: Attaches attribute to token.
	void set_attribute(const std::string & name, const std::string & value);

//! Implementation:
private:
	CL_SharedPtr<CL_XMLTokenSave_Generic> impl;
};

#endif
