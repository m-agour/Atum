#pragma once

#include <memory>

#include "Core.h"

// This ignores all warnings raised inside External headers
#pragma warning(push, 0)
#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/sinks/basic_file_sink.h"

#pragma warning(pop)

namespace Atum
{
	class ATUM_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}// Core log macros
#define ATUM_CORE_TRACE(...)    ::Atum::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define ATUM_CORE_INFO(...)     ::Atum::Log::GetCoreLogger()->info(__VA_ARGS__)
#define ATUM_CORE_WARN(...)     ::Atum::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define ATUM_CORE_ERROR(...)    ::Atum::Log::GetCoreLogger()->error(__VA_ARGS__)
#define ATUM_CORE_CRITICAL(...) ::Atum::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define ATUM_TRACE(...)         ::Atum::Log::GetClientLogger()->trace(__VA_ARGS__)
#define ATUM_INFO(...)          ::Atum::Log::GetClientLogger()->info(__VA_ARGS__)
#define ATUM_WARN(...)          ::Atum::Log::GetClientLogger()->warn(__VA_ARGS__)
#define ATUM_ERROR(...)         ::Atum::Log::GetClientLogger()->error(__VA_ARGS__)
#define ATUM_CRITICAL(...)      ::Atum::Log::GetClientLogger()->critical(__VA_ARGS__)
