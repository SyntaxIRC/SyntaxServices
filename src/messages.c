/* src/messages.c
 *   Contains the base english translations
 *
 * Copyright (C) 2007-2008 Lee Hardy <leeh@leeh.co.uk>
 * Copyright (C) 2007-2008 ircd-ratbox development team
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * 1.Redistributions of source code must retain the above copyright notice,
 *   this list of conditions and the following disclaimer.
 * 2.Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the distribution.
 * 3.The name of the author may not be used to endorse or promote products
 *   derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 * 
 * $Id$
 */
#include "langs.h"

struct _lang_internal lang_internal[] = 
{
/* START_GENEXAMPLE_PARSING -- for genexample.pl in langs/ */
	/* general service */
	{ SVC_UNKNOWNCOMMAND,		"Invalid command %s::%s"				},
	{ SVC_SUCCESSFUL,		"%s::%s successful"					},
	{ SVC_SUCCESSFULON,		"%s::%s successful on %s"				},
	{ SVC_ISSUED,			"%s::%s issued"						},
	{ SVC_NEEDMOREPARAMS,		"Insufficient parameters to %s::%s"			},
	{ SVC_ISDISABLED,		"%s::%s is disabled"					},
	{ SVC_ISDISABLEDEMAIL,		"%s::%s is disabled as it cannot send emails"		},
	{ SVC_NOTSUPPORTED,		"%s::%s is not supported by your server"		},
	{ SVC_NOACCESS,			"No access to %s::%s"					},
	{ SVC_OPTIONINVALID,		"%s::%s option invalid"					},
	{ SVC_RATELIMITEDGENERIC,	"Temporarily unable to answer query. Please try again shortly."			},
	{ SVC_RATELIMITED,		"%s::%s rate-limited, try again shortly"		},
	{ SVC_RATELIMITEDHOST,		"%s::%s rate-limited for your host, try again shortly"	},
	{ SVC_NOTLOGGEDIN,		"%s::%s requires you are logged in"			},
	{ SVC_ENDOFLIST,		"End of list"						},
	{ SVC_ENDOFLISTLIMIT,		"End of list, limit reached"				},
	{ SVC_USECOMMANDSHORTCUT,	"Commands to this service must be issued via /%s instead of by name."		},
	{ SVC_INVALIDMASK,		"Invalid mask %s"					},

	/* general irc related */
	{ SVC_IRC_NOSUCHCHANNEL,	"Channel %s does not exist"				},
	{ SVC_IRC_CHANNELINVALID,	"Invalid channel %s"					},
	{ SVC_IRC_CHANNELNOUSERS,	"Channel %s has no users"				},
	{ SVC_IRC_NOSUCHSERVER,		"Server %s does not exist"				},
	{ SVC_IRC_SERVERNAMEINVALID,	"Invalid servername %s"					},
	{ SVC_IRC_ALREADYONCHANNEL,	"%s is already on channel %s"				},
	{ SVC_IRC_YOUALREADYONCHANNEL,	"You are already on channel %s"				},
	{ SVC_IRC_NOTINCHANNEL,		"%s is not in channel %s"				},
	{ SVC_IRC_YOUNOTINCHANNEL,	"You are not in channel %s"				},
	{ SVC_IRC_NOTOPPEDONCHANNEL,	"You are not opped on channel %s"			},

	/* email */
	{ SVC_EMAIL_INVALID,		"Email %s invalid"					},
	{ SVC_EMAIL_INVALIDIGNORED,	"Email %s invalid, ignoring"				},
	{ SVC_EMAIL_BANNEDDOMAIN,	"Email provider banned"					},
	{ SVC_EMAIL_TEMPUNAVAILABLE,	"Temporarily unable to send email, please try later"	},
	{ SVC_EMAIL_SENDFAILED,		"Unable to complete %s::%s due to problems sending email"	},

	/* service help */
	{ SVC_HELP_INDEXINFO,		"%s Help Index. Use HELP <command> for more information"			},
	{ SVC_HELP_TOPICS,		"Topics: %s"						},
	{ SVC_HELP_UNAVAILABLE,		"No help is available for this service"			},
	{ SVC_HELP_UNAVAILABLETOPIC,	"No help is available on %s"				},
	{ SVC_HELP_INDEXADMIN,		"Administrator commands:"				},

	/* userserv */
	{ SVC_USER_USERLOGGEDIN,	"%s has just authenticated as you (%s)"			},
	{ SVC_USER_REGISTERDISABLED,	"%s::%s is disabled, see %s"				},
	{ SVC_USER_ALREADYREG,		"Username %s is already registered"			},
	{ SVC_USER_NOTREG,		"Username %s is not registered"				},
	{ SVC_USER_NOWREG,		"Username %s registered"				},
	{ SVC_USER_NOWREGLOGGEDIN,	"Username %s registered, you are now logged in"		},
	{ SVC_USER_NOWREGEMAILED,	"Username %s registered, your activation token has been emailed"		},
	{ SVC_USER_REGDROPPED,		"Username %s registration dropped"			},
	{ SVC_USER_INVALIDUSERNAME,	"Username %s invalid"					},
	{ SVC_USER_INVALIDPASSWORD,	"Invalid password"					},
	{ SVC_USER_INVALIDLANGUAGE,	"Invalid language %s"					},
	{ SVC_USER_LONGPASSWORD,	"Password too long"					},
	{ SVC_USER_LOGINSUSPENDED,	"Login failed, username has been suspended"		},
	{ SVC_USER_LOGINUNACTIVATED,	"Login failed, username has not been activated.  Use %s::ACTIVATE first"	},
	{ SVC_USER_LOGINMAX,		"Login failed, username has %d logged in users"		},
	{ SVC_USER_ALREADYLOGGEDIN,	"You are already logged in"				},
	{ SVC_USER_NICKNOTLOGGEDIN,	"Nickname %s is not logged in"				},
	{ SVC_USER_SUSPENDED,		"Username %s is suspended"				},
	{ SVC_USER_NOEMAIL,		"Username %s does not have an email address"		},
	{ SVC_USER_CHANGEDPASSWORD,	"Username %s password changed"				},
	{ SVC_USER_CHANGEDOPTION,	"Username %s %s set to %s"				},
	{ SVC_USER_QUERYOPTION,		"Username %s %s is set to %s"				},
	{ SVC_USER_QUERYOPTIONALREADY,	"Username %s %s is already set to %s"			},
	{ SVC_USER_REQUESTISSUED,	"Username %s has been sent an email to confirm the %s request"			},
	{ SVC_USER_REQUESTPENDING,	"Username %s already has a pending %s request"		},
	{ SVC_USER_REQUESTNONE,		"Username %s does not have a pending %s request"	},
	{ SVC_USER_TOKENBAD,		"Username %s %s token is malformed"			},
	{ SVC_USER_TOKENMISMATCH,	"Username %s %s tokens do not match"			},
	{ SVC_USER_DURATIONTOOSHORT,	"Username %s has not been registered long enough to use %s::%s"			},
	{ SVC_USER_NOACCESSON,		"Username %s is flagged NOACCESS and cannot be added to channels"		},

	/* userserv::activate */
	{ SVC_USER_ACT_ALREADY,		"Username %s has already been activated for use"	},
	{ SVC_USER_ACT_COMPLETE,	"Username %s activated, you may now LOGIN"		},

	/* userserv::resetpass */
	{ SVC_USER_RP_LOGGEDIN,		"You cannot request a password reset whilst logged in"	},

	/* userserv::userlist */
	{ SVC_USER_UL_START,		"Username list matching %s, limit %u%s"			},

	/* 
	 * userserv::info 
	 * chanserv::info
	 * nickserv::info 
	 */
	{ SVC_INFO_REGDURATIONUSER,	"[%s] Username registered for %s"			},
	{ SVC_INFO_REGDURATIONCHAN,	"[%s] Channel registered to %s for %s"			},
	{ SVC_INFO_REGDURATIONNICK,	"[%s] Nickname registered to %s for %s"			},
	{ SVC_INFO_SUSPENDED,		"[%s] Suspended by %s (expires %s): %s"			},
	{ SVC_INFO_SUSPENDEDADMIN,	"[%s] Suspended by services admin (expires %s)%s%s"	},
	{ SVC_INFO_ACCESSLIST,		"[%s] Access list: %s"					},
	{ SVC_INFO_NICKNAMES,		"[%s] Registered nicknames: %s"				},
	{ SVC_INFO_EMAIL,		"[%s] Email: %s"					},
	{ SVC_INFO_URL,			"[%s] URL: %s"						},
	{ SVC_INFO_TOPIC,		"[%s] Topic: %s"					},
	{ SVC_INFO_SETTINGS,		"[%s] Settings: %s"					},
	{ SVC_INFO_ENFORCEDMODES,	"[%s] Enforced modes: %s"				},
	{ SVC_INFO_CURRENTLOGON,	"[%s] Currently logged on via:"				},

	/* nickserv */
	{ SVC_NICK_NOTONLINE,		"Nickname %s is not online"				},
	{ SVC_NICK_ALREADYREG,		"Nickname %s is already registered"			},
	{ SVC_NICK_NOTREG,		"Nickname %s is not registered"				},
	{ SVC_NICK_NOWREG,		"Nickname %s registered"				},
	{ SVC_NICK_CANTREGUID,		"You may not register your UID, please change to a real nickname"			},
	{ SVC_NICK_USING,		"Nickname %s is already in use by you"			},
	{ SVC_NICK_TOOMANYREG,		"You have already registered %d nicknames"		},
	{ SVC_NICK_LOGINFIRST,		"You must register a username with %s and log in before you can register your nickname"	},
	{ SVC_NICK_REGGEDOTHER,		"Nickname %s is not registered to you"			},
	{ SVC_NICK_CHANGEDOPTION,	"Nickname %s %s set to %s"				},
	{ SVC_NICK_QUERYOPTION,		"Nickname %s %s is set to %s"				},

	/* chanserv */
	{ SVC_CHAN_NOWREG,		"Channel %s registered"					},
	{ SVC_CHAN_NOTREG,		"Channel %s is not registered"				},
	{ SVC_CHAN_ALREADYREG,		"Channel %s is already registered"			},
	{ SVC_CHAN_CHANGEDOPTION,	"Channel %s %s set to %s"				},
	{ SVC_CHAN_UNSETOPTION,		"Channel %s %s unset"					},
	{ SVC_CHAN_QUERYOPTION,		"Channel %s %s is set to %s"				},
	{ SVC_CHAN_QUERYOPTIONALREADY,	"Channel %s %s is already set to %s"			},
	{ SVC_CHAN_LISTSTART,		"Channel list matching %s, limit %u%s"			},
	{ SVC_CHAN_ISSUSPENDED,		"Channel %s is suspended"				},
	{ SVC_CHAN_NOACCESS,		"Insufficient access to channel %s"			},
	{ SVC_CHAN_USERNOACCESS,	"User %s does not have access to channel %s"		},
	{ SVC_CHAN_USERALREADYACCESS,	"User %s already has access to channel %s"		},
	{ SVC_CHAN_USERHIGHERACCESS,	"User %s access level equal or higher to channel %s"	},
	{ SVC_CHAN_INVALIDACCESS,	"Access level %s invalid"				},
	{ SVC_CHAN_INVALIDAUTOLEVEL,	"Auto level %s invalid"					},
	{ SVC_CHAN_INVALIDSUSPENDLEVEL,	"Suspend level %s invalid"				},
	{ SVC_CHAN_USERSETACCESS,	"User %s access level %d set on channel %s"		},
	{ SVC_CHAN_USERREMOVED,		"User %s access removed on channel %s"			},
	{ SVC_CHAN_USERSETAUTOLEVEL,	"User %s autolevel %s set on channel %s"		},
	{ SVC_CHAN_USERSETSUSPEND,	"User %s suspend level %d set on channel %s"		},
	{ SVC_CHAN_USERSUSPENDREMOVED,	"User %s unsuspended on channel %s"			},
	{ SVC_CHAN_USERHIGHERSUSPEND,	"User %s suspend level higher on channel %s"		},
	{ SVC_CHAN_REQUESTPENDING,	"Channel %s already has a pending %s request"		},
	{ SVC_CHAN_REQUESTNONE,		"Channel %s does not have a pending %s request"		},
	{ SVC_CHAN_TOKENMISMATCH,	"Channel %s %s tokens do not match"			},
	{ SVC_CHAN_NOMODE,		"Channel %s does not have mode %s"			},
	{ SVC_CHAN_INVALIDMODE,		"Invalid mode %s"					},
	{ SVC_CHAN_ALREADYOPPED,	"You are already opped on channel %s"			},
	{ SVC_CHAN_ALREADYVOICED,	"You are already voiced on channel %s"			},
	{ SVC_CHAN_YOUNOTBANNED,	"You are not banned on channel %s"			},
	{ SVC_CHAN_USEDELOWNER,		"User %s is the owner of %s. Please use %s::DELOWNER instead"	},
	{ SVC_CHAN_BANSET,		"Ban %s level %d set on channel %s"			},
	{ SVC_CHAN_BANREMOVED,		"Ban %s removed on channel %s"				},
	{ SVC_CHAN_ALREADYBANNED,	"Ban %s already set on channel %s"			},
	{ SVC_CHAN_NOTBANNED,		"Ban %s not found on channel %s"			},
	{ SVC_CHAN_BANLISTFULL,		"Channel %s banlist full"				},
	{ SVC_CHAN_INVALIDBAN,		"Ban %s invalid"					},
	{ SVC_CHAN_BANHIGHERLEVEL,	"Ban %s level higher on channel %s"			},
	{ SVC_CHAN_BANHIGHERACCOUNT,	"Channel %s has a ban at a higher level than your access level"	},
	{ SVC_CHAN_BANLISTSTART,	"Channel %s ban list:"					},

	/* operserv */
	{ SVC_OPER_CONNECTIONSSTART,	"Current connections (%s)"				},
	{ SVC_OPER_CONNECTIONSEND,	"End of connections"					},
	{ SVC_OPER_SERVERNAMEMISMATCH,	"Servernames do not match"				},
	{ SVC_OPER_OSPARTACCESS,	"No access to %s::OSPART on channels joined through %s"	},
	{ SVC_OPER_IGNORENOTFOUND,	"Ignore %s not found"					},
	{ SVC_OPER_IGNOREALREADY,	"Ignore %s matches existing ignore %s"			},
	{ SVC_OPER_IGNORELIST,		"Ignore list:"						},

	/* banserv */
	{ SVC_BAN_ISSUED,		"Issued %s for %s"					},
	{ SVC_BAN_ALREADYPLACED,	"%s already placed on %s"				},
	{ SVC_BAN_NOTPLACED,		"%s not placed on %s"					},
	{ SVC_BAN_INVALID,		"Invalid %s: %s"					},
	{ SVC_BAN_LISTSTART,		"Ban list matching %s"					},
	{ SVC_BAN_NOPERMACCESS,		"No access to set a permanent %s"			},
	{ SVC_BAN_REGEXPSUCCESS,	"%s::ADDREGEXP successful on %s, issued %u kline(s)"	},
	{ SVC_BAN_TOOMANYMATCHES,	"Ban %s%s%s matches %u (> %d) users"			},
	{ SVC_BAN_TOOMANYREGEXPMATCHES,	"Expression %s matches %u (> %d) users"			},

	/* global */
	{ SVC_GLOBAL_WELCOMETOOLONG,	"Welcome message too long (%u > %u)"			},
	{ SVC_GLOBAL_WELCOMEINVALID,	"Welcome id invalid (%u >= %u)"				},
	{ SVC_GLOBAL_WELCOMESET,	"Welcome message %u set"				},
	{ SVC_GLOBAL_WELCOMENOTSET,	"Welcome message %u not set"				},
	{ SVC_GLOBAL_WELCOMEDELETED,	"Welcome message %u deleted"				},
	{ SVC_GLOBAL_WELCOMELIST,	"Welcome messages:"					},

	/* jupeserv */
	{ SVC_JUPE_ALREADYJUPED,	"Server %s is already juped"				},
	{ SVC_JUPE_NOTJUPED,		"Server %s is not juped"				},
	{ SVC_JUPE_ALREADYREQUESTED,	"%s::%s on %s already requested by your server"		},
	{ SVC_JUPE_PENDINGLIST,		"Pending jupes:"					},

	/* alis */
	{ SVC_ALIS_LISTSTART,		"Returning maximum of %d channel names matching '%s'"	},

	/* memoserv */
	{ SVC_MEMO_RECEIVED,		"You have received memo #%u from %s"			},
	{ SVC_MEMO_SENT,		"Memo to %s sent"					},
	{ SVC_MEMO_TOOMANYMEMOS,	"Unable to send memo to %s, user has reached maximum memo limit"	},
	{ SVC_MEMO_INVALID,		"Invalid memo number %s"				},
	{ SVC_MEMO_DELETED,		"Deleted memo #%u"					},
	{ SVC_MEMO_DELETEDALL,		"Deleted memos"						},
	{ SVC_MEMO_LIST,		"%u new memos, %u old memos"				},
	{ SVC_MEMO_LISTSTART,		"  New    Id    Date       Time  Sender"		},
	{ SVC_MEMO_READ,		"Id %u Sent %s Sender %s: %s"				},
	{ SVC_MEMO_UNREAD_COUNT,	"You  have %u new memo(s)"				},
/* STOP_GENEXAMPLE_PARSING -- for genexample.pl in langs/ */

	/* this must be last */
	{ SVC_LAST,		"\0"	},
};

