#pragma once

#include "jmsf/encodebuba/common_shared_library_support.h"


#if defined( JMSF_CULE_SHARED_INTERFACE_INTERNAL )
	#define JMSF_CULE_SHARED_INTERFACE JMSF_SHARED_EXPORT_CONVENTION
#else
	#define JMSF_CULE_SHARED_INTERFACE JMSF_SHARED_IMPORT_CONVENTION
#endif
