//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SOJUAdCognacMetadataBuilder : NSObject
{
    NSString *_orgId;
    NSString *_gameId;
    NSString *_buildId;
    NSString *_slotId;
    NSString *_developerFacingRequestId;
}

+ (id)withJUAdCognacMetadata:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setBuildId:(id)arg1;
- (id)setDeveloperFacingRequestId:(id)arg1;
- (id)setGameId:(id)arg1;
- (id)setOrgId:(id)arg1;
- (id)setSlotId:(id)arg1;

@end

