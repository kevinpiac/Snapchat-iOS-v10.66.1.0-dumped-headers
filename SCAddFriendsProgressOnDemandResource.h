//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOnboardingUserlessResource-Protocol.h"
#import "SCOnboardingZippedResource-Protocol.h"

@class NSString;

@interface SCAddFriendsProgressOnDemandResource : NSObject <SCOnboardingZippedResource, SCOnboardingUserlessResource>
{
    NSString *_mediaId;
    NSString *_documentDirectory;
}

- (void).cxx_destruct;
- (id)documentDirectory;
- (id)initWithMediaId:(id)arg1 documentDirectory:(id)arg2;
- (_Bool)isDownloadedAndUnzipped;
- (id)mediaId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

