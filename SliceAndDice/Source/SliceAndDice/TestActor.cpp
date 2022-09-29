#include "TestActor.h"

#include "Components/SceneComponent.h"
#include "Components/BillboardComponent.h"

ATestActor::ATestActor(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	Value = 42;
	RootComponent = ObjectInitializer.CreateDefaultSubobject<USceneComponent>(this, TEXT("RootComponent"));

	Sprite = ObjectInitializer.CreateDefaultSubobject<UBillboardComponent>(this, TEXT("Sprite"));
	Sprite->SetupAttachment(RootComponent);
}

void ATestActor::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Hellooo"));
}
