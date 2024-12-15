// Fill out your copyright notice in the Description page of Project Settings.


#include "BFL_EditorUtils.h"


UWorld* UBFL_EditorUtils::GetWorldContextObject()
{
	if (UWorld* World = GEditor->GetEditorWorldContext().World())
	{
		return World;
	}
	
	return nullptr;
}
