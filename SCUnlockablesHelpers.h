//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUnlockableDataStoreWriter-Protocol.h"

@class SCUserSession;

@interface SCUnlockablesHelpers : NSObject <SCUnlockableDataStoreWriter>
{
    SCUserSession *_userSession;
}

+ (void)updateDataStoresWithUnlockedObject:(id)arg1 userSession:(id)arg2 caller:(id)arg3;
- (void).cxx_destruct;
- (id)initWithUserSession:(id)arg1;
- (void)updateDataStoresWithUnlockedLens:(id)arg1 callerIndentifier:(id)arg2;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;

@end

