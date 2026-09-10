
/*

NS@Tech @2026
SignatureResource - SignatureFind.h

SignatureData‚©‚çSignatureID‚ªˆê’v‚·‚é‚à‚Ì‚ð’T‚µ‚Ü‚·
ƒ‰ƒCƒuƒ‰ƒŠŠO•”‚©‚çinclude‚³‚ê‚é‚±‚Æ‚ð‘z’è‚µ‚Ä‚¢‚Ü‚¹‚ñ

*/

#pragma once
#include "SignatureData.h"

namespace NS {
namespace SignatureResource {

#if defined(NS_SIGRESOURCE_USE_HASH_MAP)

	inline const hat::signature_view* findSignature(const SignatureID& id) {
		auto& data = getSignatureData();
		if (auto it = data.find(id); it != data.end()) return &it->second;
		return nullptr;
	}

#elif defined(NS_SIGRESOURCE_USE_VECTOR)
	
	inline const hat::signature_view* findSignature(const SignatureID& id) {
		auto& data = getSignatureData();
		if (auto it = std::find_if(
			data.begin(), 
			data.end(), 
			[id](const auto& p) {
				return p.first == id;
			}); 
			it != data.end()) return &it->second;
		return nullptr;
	}

#endif

} // namespace SignatureResource
} // namespace NS
