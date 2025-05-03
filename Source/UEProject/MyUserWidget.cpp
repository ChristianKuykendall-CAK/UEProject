// Fill out your copyright notice in the Description page of Project Settings.


#include "MyUserWidget.h"
#include "Components/TextBlock.h"

void UMyUserWidget::UpdateOrbCount(int32 Count) {
	if (OrbCountText) {
		OrbCountText->SetText(FText::FromString(TEXT("testing")));
	}
}