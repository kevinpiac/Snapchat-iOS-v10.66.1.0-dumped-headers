//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SCTAvatarContainer;

@protocol SCTAvatarFetchListener <NSObject>
- (void)onError:(NSString *)arg1;
- (void)onFetched:(id <SCTAvatarContainer>)arg1;
@end
