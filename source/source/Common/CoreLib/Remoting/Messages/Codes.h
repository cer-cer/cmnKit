#ifndef CODES_H__REMOTING__COMMONKIT__INCLUDED_
#define CODES_H__REMOTING__COMMONKIT__INCLUDED_

namespace Remoting
{

	typedef enum tagCodes
	{

		MSGCODE_INST = 0x00010001,

		MSGCODE_INST_RESP,

		MSGCODE_INSTCHILD_DISP,

		MSGCODE_INSTCHILD_PROX,

		MSGCODE_INVOKE,

		MSGCODE_INVOKE_RESP,

	} 
	Codes;

	typedef enum tagProperties
	{

		MSGPROP_OBJCLSID = 0x00020001,

		MSGPROP_OBJPTRID,

		MSGPROP_CLIENTID,

		MSGPROP_RESPONSE,

		MSGPROP_DISPID,

		MSGPROP_IID,

		MSGPROP_RETVAL,

	} 
	Properties;

}

#endif // !CODES_H__REMOTING__COMMONKIT__INCLUDED_