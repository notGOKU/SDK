﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ability_102251_BP

#include "Basic.hpp"

#include "Ability_102251_BP_classes.hpp"
#include "Ability_102251_BP_parameters.hpp"


namespace SDK
{

// Function Ability_102251_BP.Ability_102251_BP_C.ExecuteUbergraph_Ability_102251_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_102251_BP_C::ExecuteUbergraph_Ability_102251_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_102251_BP_C", "ExecuteUbergraph_Ability_102251_BP");

	Params::Ability_102251_BP_C_ExecuteUbergraph_Ability_102251_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ability_102251_BP.Ability_102251_BP_C.SetAbilityExtraWidget_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InExtraWidget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UAbility_102251_BP_C::SetAbilityExtraWidget_1(class UUserWidget* InExtraWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_102251_BP_C", "SetAbilityExtraWidget_1");

	Params::Ability_102251_BP_C_SetAbilityExtraWidget_1 Parms{};

	Parms.InExtraWidget = InExtraWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ability_102251_BP.Ability_102251_BP_C.SetAbilityStatusWidget_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InUserWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UAbility_102251_BP_C::SetAbilityStatusWidget_1(class UUserWidget* InUserWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_102251_BP_C", "SetAbilityStatusWidget_1");

	Params::Ability_102251_BP_C_SetAbilityStatusWidget_1 Parms{};

	Parms.InUserWidget = InUserWidget;

	UObject::ProcessEvent(Func, &Parms);
}

}

