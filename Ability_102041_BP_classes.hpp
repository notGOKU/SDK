﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_102041_BP

#include "Basic.hpp"

#include "Marvel_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Ability_102041_BP.Ability_102041_BP_C
// 0x0000 (0x2AB0 - 0x2AB0)
class UAbility_102041_BP_C final : public UMarvelAbility_SelectTarget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ability_102041_BP_C">();
	}
	static class UAbility_102041_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbility_102041_BP_C>();
	}
};
static_assert(alignof(UAbility_102041_BP_C) == 0x000008, "Wrong alignment on UAbility_102041_BP_C");
static_assert(sizeof(UAbility_102041_BP_C) == 0x002AB0, "Wrong size on UAbility_102041_BP_C");

}

