#pragma once
#include <cstdint>

namespace offsets
{
	//you can get these offsets referring to ryans tutorial!
	static constexpr inline uint64_t refOne = 0x76E130;
	static constexpr inline uint64_t refTwo = 0x75D160;
	static constexpr inline uint64_t refThree = 0x76B870;

	//you can get this inside dump, this is for ssl.
	static constexpr inline uint64_t notifyServerCertificate = 0x791BA50; //private class LegacyTlsAuthentication : Il2CppObject
}
