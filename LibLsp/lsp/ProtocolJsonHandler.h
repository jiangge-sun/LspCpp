#pragma once

#include "LibLsp/JsonRpc/MessageJsonHandler.h"
namespace lsp {
	class __declspec(dllexport) ProtocolJsonHandler : public MessageJsonHandler
	{
	public:
		ProtocolJsonHandler();
	};

}
