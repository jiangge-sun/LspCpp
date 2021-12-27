#pragma once

#include "LibLsp/JsonRpc/MessageJsonHandler.h"
#include "../ProjConfig.h"

namespace lsp {
	class LSP_EXPORT ProtocolJsonHandler : public MessageJsonHandler
	{
	public:
		ProtocolJsonHandler();
	};

}
