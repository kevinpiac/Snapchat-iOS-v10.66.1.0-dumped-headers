//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensUserProvider-Protocol.h"

@class NSString;

@interface SCSnapchatLensUserProvider : NSObject <SCLensUserProvider>
{
}

+ (id)defaultSnapchatLensUserProvider;
- (id)init;
- (id)lensStudioUser;
- (id)lensTooltipUser;
- (id)lensUser;
- (void)resetLastLensActivationDate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

