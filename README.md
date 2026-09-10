# NSL-SignatureResource
本ライブラリは`libhat`の`signature_view`を効率的に管理する薄い本です  
`C++20`と[libhat](https://github.com/BasedInc/libhat)が必要です  
  
Signatureを追加しても依存ファイルがコロコロと再コンパイルされず、Signatureもまとめておいておける点が特徴です  

# 使い方
- プロジェクトに`/SignatureResource`にある`/SignatureResource`をフォルダごと追加してください
- プロジェクトに`libhat`を追加してください 
- `/SignatureResource/SignatureData.cpp`にSignatureを追加してください
- `/SignatureResource/SignatureResource.h`を使用するファイルでincludeしてください
- `NS::SignatureResource::getSignature`で`hat::signature_view`が取得できます

# 対応OS
Windows MSVCでしか検証してませんが、特に環境依存もないはずです。  
そのため`libhat`の実装に依存します

# 詳細情報
`getSignature`の返り値は生ポですが、改造したりしない限りは寿命は最初から最後までです  

あとは実装みろ定期
