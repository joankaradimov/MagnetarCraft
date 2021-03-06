#include <Windows.h>
#include <vector>

#include "CallSitePatch.h"

CallSitePatch::CallSitePatch(void* destination_address, void* function) :
	BasePatch(destination_address),
	function((BYTE*)function)
{
}

size_t CallSitePatch::length()
{
	return sizeof(CALL_INSTRUCTION_OPCODE) + sizeof(function);
}

void CallSitePatch::apply()
{
	ptrdiff_t jmp_offset = function - destination_address - length();
	*destination_address = CALL_INSTRUCTION_OPCODE;
	*((ptrdiff_t*)(destination_address + 1)) = jmp_offset;
}
