//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapStatusCreationViewProvider-Protocol.h"

@class NSString, SCLazy, SCUserSession;

@interface SCMapStatusCreationPhantomViewProvider : NSObject <SCMapStatusCreationViewProvider>
{
    SCUserSession *_userSession;
    SCLazy *_bitmojiImageFetcher;
}

- (void).cxx_destruct;
- (id)composerViewForClass:(Class)arg1;
- (id)initWithUserSession:(id)arg1 bitmojiImageFetcher:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
