//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "LSABaseComponent.h"

@protocol LSAOfflineSixDofDataProviderProtocol;

@interface LSAOfflineSixDofComponent : LSABaseComponent
{
    struct shared_ptr<LSASpectaclesOfflineSixDofDataProviderWrapper> _offlineSixDofDataProviderWrapper;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) id <LSAOfflineSixDofDataProviderProtocol> dataProvider;
- (void)setCoreManager:(shared_ptr_6e078de4)arg1 announcer:(id)arg2 configuration:(id)arg3;

@end

