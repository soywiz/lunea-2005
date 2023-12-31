/*  $Id: irc_numerics.h,v 1.2 2003/07/20 22:38:31 grumbel Exp $
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
*/

#ifndef irc_numerics
#define irc_numerics

/*
	E=EFnet hybrid-6rc4
	I=IRCnet 2.10.3
	i=IRCnet, reserved according to Undernet (sic) numerics headers
	U=Undernet u2.10.07
	D=DALnet bahamut 1.4.8
*/

enum CL_IRCNumerics
{
	RPL_WELCOME = 1, // IEUD
	RPL_YOURHOST = 2, // IEUD
	RPL_CREATED = 3, // IEUD
	RPL_MYINFO = 4, // IEUD
	RPL_BOUNCE = 5, // I
	RPL_MAP = 5, // U
	RPL_PROTOCTL = 5, // D
	RPL_MAPMORE = 6, // U
	RPL_MAPEND = 7, // U
	RPL_SNOMASK = 8, // U
	RPL_STATMEMTOT = 9, // U
	RPL_STATMEM = 010, // U
	RPL_YOURCOOKIE = 014, // i
	RPL_TRACELINK = 200, // IEUD
	RPL_TRACECONNECTING = 201, // IEUD
	RPL_TRACEHANDSHAKE = 202, // IEUD
	RPL_TRACEUNKNOWN = 203, // IEUD
	RPL_TRACEOPERATOR = 204, // IEUD
	RPL_TRACEUSER = 205, // IEUD
	RPL_TRACESERVER = 206, // IEUD
	RPL_TRACESERVICE = 207, // IEU
	RPL_TRACENEWTYPE = 208, // IEUD
	RPL_TRACECLASS = 209, // IEUD
	RPL_TRACERECONNECT = 210, // I
	RPL_STATSLINKINFO = 211, // IEUD
	RPL_STATSCOMMANDS = 212, // IEUD
	RPL_STATSCLINE = 213, // IEUD
	RPL_STATSNLINE = 214, // IEUD
	RPL_STATSILINE = 215, // IEUD
	RPL_STATSKLINE = 216, // IEUD
	RPL_STATSQLINE = 217, // IED
	RPL_STATSPLINE_U = 217, // U
	RPL_STATSYLINE = 218, // IEUD
	RPL_ENDOFSTATS = 219, // IEUD
	RPL_STATSPLINE_E = 220, // E
	RPL_UMODEIS = 221, // IEUD
	RPL_STATSBLINE_ED = 222, // ED
	RPL_STATSELINE = 223, // ED
	RPL_STATSFLINE = 224, // ED
	RPL_STATSDLINE_E = 225, // E
	RPL_STATSZLINE = 225, // D
	RPL_STATSCOUNT = 226, // D
	RPL_STATSGLINE_D = 227, // D
	RPL_SERVICEINFO = 231, // IU
	RPL_ENDOFSERVICES = 232, // IU
	RPL_SERVICE = 233, // IU
	RPL_SERVLIST = 234, // IEUD
	RPL_SERVLISTEND = 235, // IEUD
	RPL_STATSIAUTH = 239, // I
	RPL_STATSVLINE = 240, // I
	RPL_STATSLLINE = 241, // IEUD
	RPL_STATSUPTIME = 242, // IEUD
	RPL_STATSOLINE = 243, // IEUD
	RPL_STATSHLINE = 244, // IEUD
	RPL_STATSSLINE = 245, // IEuD
	RPL_STATSPING = 246, // I
	RPL_STATSTLINE = 246, // U
	RPL_STATSULINE_D = 246, // D
	RPL_STATSBLINE_I = 247, // I
	RPL_STATSGLINE_U = 247, // U
	RPL_STATSXLINE = 247, // E
	RPL_STATSDEFINE = 248, // I
	RPL_STATSULINE_EU = 248, // EU
	RPL_STATSDEBUG = 249, // IEUD
	RPL_STATSDLINE_I = 250, // I
	RPL_STATSCONN = 250, // EUD
	RPL_LUSERCLIENT = 251, // IEUD
	RPL_LUSEROP = 252, // IEUD
	RPL_LUSERUNKNOWN = 253, // IEUD
	RPL_LUSERCHANNELS = 254, // IEUD
	RPL_LUSERME = 255, // IEUD
	RPL_ADMINME = 256, // IEUD
	RPL_ADMINLOC1 = 257, // IEUD
	RPL_ADMINLOC2 = 258, // IEUD
	RPL_ADMINEMAIL = 259, // IEUD
	RPL_TRACELOG = 261, // IEUD
	RPL_TRACEEND = 262, // I
	RPL_ENDOFTRACE = 262, // ED
	RPL_TRACEPING = 262, // U
	RPL_TRYAGAIN = 263, // I
	RPL_LOAD2HI = 263, // ED
	RPL_LOCALUSERS = 265, // ED
	RPL_GLOBALUSERS = 266, // ED
	RPL_SILELIST = 271, // UD
	RPL_ENDOFSILELIST = 272, // UD
	RPL_STATSDELTA = 274, // i
	RPL_STATSDLINE = 275, // UD
	RPL_GLIST = 280, // U
	RPL_ENDOFGLIST = 281, // U
	RPL_HELPHDR = 290, // D
	RPL_HELPOP = 291, // D
	RPL_HELPTLR = 292, // D
	RPL_HELPHLP = 293, // D
	RPL_HELPFWD = 294, // D
	RPL_HELPIGN = 295, // D
	RPL_NONE = 300, // IEUD
	RPL_AWAY = 301, // IEUD
	RPL_USERHOST = 302, // IEUD
	RPL_ISON = 303, // IEUD
	RPL_TEXT = 304, // IEUD
	RPL_UNAWAY = 305, // IEUD
	RPL_NOWAWAY = 306, // IEUD
	RPL_USERIP = 307, // U
	RPL_WHOISREGNICK = 307, // D
	RPL_WHOISADMIN = 308, // D
	RPL_WHOISSADMIN = 309, // D
	RPL_WHOISSVCMSG = 310, // D
	RPL_WHOISUSER = 311, // IEUD
	RPL_WHOISSERVER = 312, // IEUD
	RPL_WHOISOPERATOR = 313, // IEUD
	RPL_WHOWASUSER = 314, // IEUD
	RPL_ENDOFWHO = 315, // IEUD
	RPL_WHOISCHANOP = 316, // IED
	RPL_WHOISIDLE = 317, // IEUD
	RPL_ENDOFWHOIS = 318, // IEUD
	RPL_WHOISCHANNELS = 319, // IEUD
	RPL_LISTSTART = 321, // IEUD
	RPL_LIST = 322, // IEUD
	RPL_LISTEND = 323, // IEUD
	RPL_CHANNELMODEIS = 324, // IEUD
	RPL_UNIQOPIS = 325, // I
	RPL_NOCHANPASS = 326, // i
	RPL_CHPASSUNKNOWN = 327, // i
	RPL_CREATIONTIME = 329, // EUD
	RPL_NOTOPIC = 331, // IEUD
	RPL_TOPIC = 332, // IEUD
	RPL_TOPICWHOTIME = 333, // EUD
	RPL_LISTUSAGE = 334, // U
	RPL_COMMANDSYNTAX = 334, // D
	RPL_CHANPASSOK = 338, // i
	RPL_BADCHANPASS = 339, // i
	RPL_INVITING = 341, // IEUD
	RPL_SUMMONING = 342, // IED
	RPL_INVITELIST = 346, // I
	RPL_ENDOFINVITELIST = 347, // I
	RPL_EXCEPTLIST = 348, // IE
	RPL_ENDOFEXCEPTLIST = 349, // IE
	RPL_VERSION = 351, // IEUD
	RPL_WHOREPLY = 352, // IEUD
	RPL_NAMREPLY = 353, // IEUD
	RPL_WHOSPCRPL = 354, // U
	RPL_KILLDONE = 361, // IEUD
	RPL_CLOSING = 362, // IEUD
	RPL_CLOSEEND = 363, // IEUD
	RPL_LINKS = 364, // IEUD
	RPL_ENDOFLINKS = 365, // IEUD
	RPL_ENDOFNAMES = 366, // IEUD
	RPL_BANLIST = 367, // IEUD
	RPL_ENDOFBANLIST = 368, // IEUD
	RPL_ENDOFWHOWAS = 369, // IEUD
	RPL_INFO = 371, // IEUD
	RPL_MOTD = 372, // IEUD
	RPL_INFOSTART = 373, // IEUD
	RPL_ENDOFINFO = 374, // IEUD
	RPL_MOTDSTART = 375, // IEUD
	RPL_ENDOFMOTD = 376, // IEUD
	RPL_YOUREOPER = 381, // IEUD
	RPL_REHASHING = 382, // IEUD
	RPL_YOURESERVICE = 383, // ID
	RPL_MYPORTIS = 384, // IEUD
	RPL_NOTOPERANYMORE = 385, // IEUD
	RPL_TIME = 391, // IEUD
	RPL_USERSSTART = 392, // IED
	RPL_USERS = 393, // IED
	RPL_ENDOFUSERS = 394, // IED
	RPL_NOUSERS = 395, // IED
	ERR_NOSUCHNICK = 401, // IEUD
	ERR_NOSUCHSERVER = 402, // IEUD
	ERR_NOSUCHCHANNEL = 403, // IEUD
	ERR_CANNOTSENDTOCHAN = 404, // IEUD
	ERR_TOOMANYCHANNELS = 405, // IEUD
	ERR_WASNOSUCHNICK = 406, // IEUD
	ERR_TOOMANYTARGETS = 407, // IEUD
	ERR_NOSUCHSERVICE = 408, // I
	ERR_NOCOLORSONCHAN = 408, // D
	ERR_NOORIGIN = 409, // IEUD
	ERR_NORECIPIENT = 411, // IEUD
	ERR_NOTEXTTOSEND = 412, // IEUD
	ERR_NOTOPLEVEL = 413, // IEUD
	ERR_WILDTOPLEVEL = 414, // IEUD
	ERR_BADMASK = 415, // I
	ERR_TOOMANYMATCHES = 416, // I
	ERR_QUERYTOOLONG = 416, // U
	ERR_UNKNOWNCOMMAND = 421, // IEUD
	ERR_NOMOTD = 422, // IEUD
	ERR_NOADMININFO = 423, // IEUD
	ERR_FILEERROR = 424, // IED
	ERR_TOOMANYAWAY = 429, // D
	ERR_NONICKNAMEGIVEN = 431, // IEUD
	ERR_ERRONEUSNICKNAME = 432, // IEUD
	ERR_NICKNAMEINUSE = 433, // IEUD
	ERR_SERVICENAMEINUSE = 434, // ID
	ERR_SERVICECONFUSED = 435, // I
	ERR_BANONCHAN = 435, // D
	ERR_NICKCOLLISION = 436, // IEUD
	ERR_UNAVAILRESOURCE = 437, // IE
	ERR_BANNICKCHANGE = 437, // UD
	ERR_DEAD = 438, // I
	ERR_NICKTOOFAST = 438, // U
	ERR_NCHANGETOOFAST = 438, // D
	ERR_TARGETTOOFAST = 439, // UD
	ERR_SERVICESDOWN = 440, // D
	ERR_USERNOTINCHANNEL = 441, // IEUD
	ERR_NOTONCHANNEL = 442, // IEUD
	ERR_USERONCHANNEL = 443, // IEUD
	ERR_NOLOGIN = 444, // IED
	ERR_SUMMONDISABLED = 445, // IED
	ERR_USERSDISABLED = 446, // IED
	ERR_NOTREGISTERED = 451, // IEUD
	ERR_IDCOLLISION = 452, // i
	ERR_NICKLOST = 453, // i
	ERR_HOSTILENAME = 455, // D
	ERR_NEEDMOREPARAMS = 461, // IEUD
	ERR_ALREADYREGISTRED = 462, // IEUD
	ERR_NOPERMFORHOST = 463, // IEUD
	ERR_PASSWDMISMATCH = 464, // IEUD
	ERR_YOUREBANNEDCREEP = 465, // IEUD
	ERR_YOUWILLBEBANNED = 466, // IEUD
	ERR_KEYSET = 467, // IEUD
	ERR_INVALIDUSERNAME = 468, // U
	ERR_ONLYSERVERSCANCHANGE = 468, // D
	ERR_CHANNELISFULL = 471, // IEUD
	ERR_UNKNOWNMODE = 472, // IEUD
	ERR_INVITEONLYCHAN = 473, // IEUD
	ERR_BANNEDFROMCHAN = 474, // IEUD
	ERR_BADCHANNELKEY = 475, // IEUD
	ERR_BADCHANMASK = 476, // IEUD
	ERR_MODELESS = 477, // E
	ERR_NOCHANMODES = 477, // I
	ERR_NEEDREGGEDNICK = 477, // D
	ERR_BANLISTFULL = 478, // IEUD
	ERR_BADCHANNAME = 479, // ED
	ERR_NOPRIVILEGES = 481, // IEUD
	ERR_CHANOPRIVSNEEDED = 482, // IEUD
	ERR_CANTKILLSERVER = 483, // EUD
	ERR_DESYNC = 484, // ED
	ERR_ISCHANSERVICE = 484, // U
	ERR_UNIQOPPRIVSNEEDED = 485, // I
	ERR_CHANTOORECENT = 487, // i
	ERR_TSLESSCHAN = 488, // i
	ERR_VOICENEEDED = 489, // U
	ERR_NOOPERHOST = 491, // IEUD
	ERR_NOSERVICEHOST = 492, // I
	ERR_UMODEUNKNOWNFLAG = 501, // IEUD
	ERR_USERSDONTMATCH = 502, // IEUD
	ERR_GHOSTEDCLIENT = 503, // ED
	ERR_LAST_ERR_MSG = 504, // ED
	ERR_SILELISTFULL = 511, // UD
	ERR_NOSUCHGLINE = 512, // U
	ERR_TOOMANYWATCH = 512, // D
	ERR_BADPING = 513, // U
	ERR_TOOMANYDCC = 514, // D
	ERR_LISTSYNTAX = 521, // D
	ERR_WHOSYNTAX = 522, // D
	ERR_WHOLIMEXCEED = 523, // D
	RPL_LOGON = 600, // D
	RPL_LOGOFF = 601, // D
	RPL_WATCHOFF = 602, // D
	RPL_WATCHSTAT = 603, // D
	RPL_NOWON = 604, // D
	RPL_NOWOFF = 605, // D
	RPL_WATCHLIST = 606, // D
	RPL_ENDOFWATCHLIST = 607, // D
	RPL_DCCSTATUS = 617, // D
	RPL_DCCLIST = 618, // D
	RPL_ENDOFDCCLIST = 619, // D
	RPL_DCCINFO = 620, // D
	ERR_NUMERIC_ERR = 999 // D
};

#endif