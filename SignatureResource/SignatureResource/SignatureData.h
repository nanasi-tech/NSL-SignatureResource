
/*

NS@Tech @2026
SignatureResource - SignatureFind.h

SignatureData‚©‚çSignatureID‚ªˆê’v‚·‚é‚à‚Ì‚ð’T‚µ‚Ü‚·
ƒ‰ƒCƒuƒ‰ƒŠŠO•”‚©‚çinclude‚³‚ê‚é‚±‚Æ‚ð‘z’è‚µ‚Ä‚¢‚Ü‚¹‚ñ

*/

#pragma once
#include "SignatureID.h"
#include <libhat/signature.hpp>

#if defined(NS_SIGRESOURCE_USE_HASH_MAP)

	#include <unordered_map>
	namespace NS {
	namespace SignatureResource {

		using SignatureData = std::unordered_map<SignatureID, hat::signature_view>;

	} // namespace SignatureResource
	} // namespace NS

#elif defined(NS_SIGRESOURCE_USE_VECTOR)

	#include <vector>
	namespace NS {
	namespace SignatureResource {

		using SignatureData = std::vector<
			std::pair<
				SignatureID, 
				hat::signature_view
			>
		>;

	} // namespace SignatureResource
	} // namespace NS

#else

	#error Select Signature Resource Data Type

#endif

namespace NS {
namespace SignatureResource {

	const SignatureData& getSignatureData();

} // namespace SignatureResource
} // namespace NS