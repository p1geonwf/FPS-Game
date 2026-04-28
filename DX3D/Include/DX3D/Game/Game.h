#pragma once

#include <DX3D/Core/Core.h>
#include <DX3D/Core/Base.h>

namespace DX3D {
	class Game : public Base {
	public:
		explicit Game(const GameDesc& desc);
		virtual ~Game() override;

		virtual void run() final;

	private:
		std::unique_ptr<Logger> m_loggerPtr{};
		std::unique_ptr<GraphicsEngine> m_graphicsEngine { };
		std::unique_ptr<Window> m_display { };
		bool m_isRunning{ true };
	};
}

