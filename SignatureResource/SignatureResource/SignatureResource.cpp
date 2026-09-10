
/*

NS@Tech @2026
SignatureResource - SignatureResource.cpp

インターフェースです
関数やプリプロセッサを閉じ込めるために分離しています

*/

// Option
#include "SignatureResourceOption.h"

#include "SignatureResource.h"
#include "SignatureFind.h"

namespace NS::SignatureResource {

	const hat::signature_view* getSignature(const SignatureID& id) {
		return findSignature(id);
	}

}
