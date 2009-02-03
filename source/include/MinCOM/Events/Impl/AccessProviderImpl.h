/*
 * File name   : AccessProviderImpl.h
 *
 * Copyright (c) 2009 Scientific Software
 *
 * Modification History:
 * Date        Name                Description
 * 2009-01-30  Egor Pushkin        Initial version
 */

#ifndef ACCESSPROVIDERIMPL_H__MINCOM__INCLUDED_
#define ACCESSPROVIDERIMPL_H__MINCOM__INCLUDED_

namespace MinCOM
{

	class AccessProviderImpl 
		: public CommonImpl< IAccessProvider >
	{
	public:

		typedef std::map< Guid, IAccessPointPtr > AccessPoints_;

	public:

		AccessProviderImpl();

		// IAccessProvider section
		virtual result Advise(RefIid iid, IAccessPointRef accessPoint);

		virtual result Unadvise(RefIid iid);

		virtual IAccessPointPtr Find(RefIid iid);

		virtual result Spread(const CallData& call);

		protected:

		/**
		 * Tool provided for convenience. Use this tool if you are not going to 
		 * override default IAccessPoint behavior.
		 */
		IAccessPointPtr Advise(RefIid eventsIid);

	private:
		
		CoreMutex lock_;

		AccessPoints_ accessPoints_;

	};

	typedef AccessProviderImpl APImpl;

}

#endif // !ACCESSPROVIDERIMPL_H__MINCOM__INCLUDED_
