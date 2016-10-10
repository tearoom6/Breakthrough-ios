#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// System.Action
struct Action_t3771233898;

#include "mscorlib_System_Array1146569071.h"
#include "System_Core_System_Action3771233898.h"

#pragma once
// System.Action[]
struct ActionU5BU5D_t1643143343  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Action_t3771233898 * m_Items[1];

public:
	inline Action_t3771233898 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Action_t3771233898 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Action_t3771233898 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
