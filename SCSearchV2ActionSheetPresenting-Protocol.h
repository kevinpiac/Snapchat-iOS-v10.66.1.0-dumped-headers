//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SCComposerMarshallable-Protocol.h"

@class NSString, SCCUser;

@protocol SCSearchV2ActionSheetPresenting <NSObject, SCComposerMarshallable>
- (void)presentActionSheetForGroupWithGroupId:(NSString *)arg1;
- (void)presentActionSheetForUserWithUser:(SCCUser *)arg1;
@end

