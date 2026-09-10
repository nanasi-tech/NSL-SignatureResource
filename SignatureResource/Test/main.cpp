#include <SignatureResource/SignatureResource.h>

#include <iostream>
#include <cstddef>
#include <iomanip>

using namespace NS;

SignatureResource::SignatureID sigId = "MyExampleSignature";

int main() {
	std::cout << "NS@Tech @2026 SignatureResource Test" << std::endl;

	// Get Signature
	auto* sig_view = SignatureResource::getSignature(sigId);
	if (!sig_view) {
		std::cout << "Signature \"" << sigId << "\" not found!" << std::endl;
		return -1;
	}
	std::cout << "Find Signature!" << std::endl;

	// ‚©‚È‚èŽG‚Èo—Í Ž„‚Å‚È‚­‚Ä‚àŒ©“¦‚³‚È‚¢‚Ë
	std::cout << sigId << ": ";
	for (auto& byte : *sig_view) {
		if ((char)byte.mask() != 0x00) {
			std::cout
				<< std::uppercase
				<< std::hex
				<< std::setw(2)
				<< std::to_integer<unsigned int>(byte.value())
				<< ' ';
		}
		else {
			std::cout << "??" << ' ';
		}
	}
	std::cout << std::endl;

	return 0;
}