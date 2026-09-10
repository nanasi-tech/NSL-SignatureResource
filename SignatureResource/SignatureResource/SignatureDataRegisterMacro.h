
/*

NS@Tech @2026
SignatureResource - SignatureDataRegisterMacro.h

SignatureDataへのデータ追加を簡単にするマクロです
ライブラリ外部からincludeされることを想定していません

*/

#pragma once
#include "SignatureID.h"
#include <libhat/signature.hpp>

#define SIGNATURE(id, sig)														\
	{																			\
		id,																		\
		[]() {																	\
				static constexpr auto _sig = hat::compile_signature<sig>();		\
				return hat::signature_view(_sig);								\
			}()																	\
	},
