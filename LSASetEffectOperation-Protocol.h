//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LSAEffectComponent;
@protocol NSObject;

@protocol LSASetEffectOperation <NSObject>
@property(readonly, nonatomic) id <NSObject> effectKey;
- (long long)performWithCoreManager:(shared_ptr_6e078de4)arg1 effectComponent:(LSAEffectComponent *)arg2 async:(_Bool)arg3;
@end

