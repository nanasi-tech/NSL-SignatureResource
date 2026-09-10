
/*

NS@Tech @2026
SignatureResource - SignatureData.cpp

このファイルの sigData に値を追加してください
他のファイルを触らない限りは、インターフェースを参照している他のファイルが再コンパイルされることはありません
ただこのファイルのコンパイルは重たいです

*/

// Option
#include "SignatureResourceOption.h"

#include "SignatureData.h"
#include "SignatureDataRegisterMacro.h"

namespace NS::SignatureResource {

	const SignatureData& getSignatureData() {
		static SignatureData sigData{
			SIGNATURE("MyExampleSignature", "E8 ?? ?? ?? ?? 48 ?? ??")
			SIGNATURE("MyNaming::Convention", "E8 ?? ?? ?? ?? 48 ?? ??")





		};

		return sigData;
	}

}