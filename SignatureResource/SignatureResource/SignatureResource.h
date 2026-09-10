
/*

NS@Tech @2026
SignatureResource - SignatureResource.h

Required
- C++ 20
- libhat ( https://github.com/BasedInc/libhat )


本ライブラリはコードを直接プロジェクトに追加されることを想定しています

この関数を使う場合は、対応するIDのSignatureをSignatureDataに登録する必要があります
使用する箇所でこのファイルのみを include してください
ポインタはアプリ終了時まで安全です

*/

#pragma once
#include "SignatureID.h"
#include <libhat/signature.hpp>

namespace NS {
namespace SignatureResource {

	const hat::signature_view* getSignature(const SignatureID& id);

} // namespace SignatureResource
} // namespace NS
