#pragma once
#include <cstdint>

namespace offsets
{
	//you can get these offsets referring to ryans tutorial!
	static constexpr inline uint64_t refOne = 0x771CB0;
	static constexpr inline uint64_t refTwo = 0x760D10;
	static constexpr inline uint64_t refThree = 0x76F440;

	//you can get this inside dump, this is for ssl.
	static constexpr inline uint64_t notifyServerCertificate = 0x7982540; //private class LegacyTlsAuthentication : Il2CppObject
}