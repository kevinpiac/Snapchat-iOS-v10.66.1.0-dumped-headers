//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensBitmojiProviderFactory-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCUserSession;

@interface SCLensBitmojiProviderFactory : NSObject <SCTraceEnabled, SCLensBitmojiProviderFactory>
{
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)_lensUserProvider;
- (id)bitmojiProviderWithLensComponentManager:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

