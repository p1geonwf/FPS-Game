#pragma once
#include <DX3D/Core/Base.h>
#include <DX3D/Core/Common.h>

namespace DX3D {
	class Window : public Base {
	public:
		explicit Window(const WindowDesc& desc);
		virtual ~Window() override;

	private:
		void* m_handle { };
	};



}

