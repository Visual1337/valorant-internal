#pragma once
namespace Offsets
{
	constexpr auto
		State = 0x9182500,  //uworld_state 
		Key = State + 0x38,  //uworld_key 
		ProcessEvent = 0x3405390,
		StaticFindObject = 0x34435A0,
		TriggerVEH = 0x1C15C00,
		GetActorBounds = 0x486CC80;
}
namespace Offsets1
{
	constexpr auto

	LocalPawn1 = 0x460;
}
