include "./vendor/premake/premake_customization/solution_items.lua"
include "Dependencies.lua"

workspace "Atum"
	architecture "x86_64"
	startproject "Atumnut"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

	solution_items
	{
		".editorconfig"
	}

	flags
	{
		"MultiProcessorCompile"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

group "Dependencies"
	include "vendor/premake"
	include "Atum/vendor/GLFW"
	include "Atum/vendor/Glad"
	include "Atum/vendor/imgui"
	include "Atum/vendor/yaml-cpp"
group ""

include "Atum"
include "Sandbox"
include "Atumnut"
