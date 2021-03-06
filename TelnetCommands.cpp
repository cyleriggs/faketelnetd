// AUTOGENERATED FILE
#include <iostream>
#include <map>
#include <sstream>
#include <string>
using namespace std;

#include "TelnetCommands.h"

string telnetCommandAsStr( unsigned char c ) {
	map<unsigned char,string> strmap;
	strmap.insert( pair<unsigned char,string>(240,"TELNET_COMMAND_SE") );
	strmap.insert( pair<unsigned char,string>(241,"TELNET_COMMAND_NOP") );
	strmap.insert( pair<unsigned char,string>(242,"TELNET_COMMAND_DM") );
	strmap.insert( pair<unsigned char,string>(243,"TELNET_COMMAND_BRK") );
	strmap.insert( pair<unsigned char,string>(244,"TELNET_COMMAND_IP") );
	strmap.insert( pair<unsigned char,string>(245,"TELNET_COMMAND_AO") );
	strmap.insert( pair<unsigned char,string>(26,"TELNET_COMMAND_AYT") );
	strmap.insert( pair<unsigned char,string>(236,"TELNET_COMMAND_EOF") );
	strmap.insert( pair<unsigned char,string>(237,"TELNET_COMMAND_SUSP") );
	strmap.insert( pair<unsigned char,string>(238,"TELNET_COMMAND_ABORT") );
	strmap.insert( pair<unsigned char,string>(247,"TELNET_COMMAND_EC") );
	strmap.insert( pair<unsigned char,string>(248,"TELNET_COMMAND_EL") );
	strmap.insert( pair<unsigned char,string>(249,"TELNET_COMMAND_GA") );
	strmap.insert( pair<unsigned char,string>(250,"TELNET_COMMAND_SB") );
	strmap.insert( pair<unsigned char,string>(251,"TELNET_COMMAND_WILL") );
	strmap.insert( pair<unsigned char,string>(252,"TELNET_COMMAND_WONT") );
	strmap.insert( pair<unsigned char,string>(253,"TELNET_COMMAND_DO") );
	strmap.insert( pair<unsigned char,string>(254,"TELNET_COMMAND_DONT") );
	strmap.insert( pair<unsigned char,string>(255,"TELNET_COMMAND_IAC") );

	if( strmap.find(c) != strmap.end() ) { 
		return strmap[c];
	} else {
		stringstream ss;
		ss << (int)c;
		string s;
		ss >> s;
		return s;
	}
}

